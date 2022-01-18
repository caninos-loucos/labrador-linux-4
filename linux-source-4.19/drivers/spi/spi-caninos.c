/*
 * @author: Igor Ruschi Andrade E Lima, igor.lima@lsitec.org.br
 * caninos_spi.c -- K5 soc SPI controller driver
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/init.h>
#include <linux/interrupt.h>
#include <linux/dma-mapping.h>
#include <linux/delay.h>
#include <linux/platform_device.h>
#include <linux/err.h>
#include <linux/io.h>
#include <linux/spi/spi.h>
#include <mach/hardware.h>
#include <mach/hdmac-owl.h>
#include <mach/spi-caninos.h>
#include <linux/module.h>
#include <linux/clk.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/pinctrl/consumer.h>
#include <mach/module-owl.h>
#include <linux/of_gpio.h>

#define DRIVER_NAME			"caninos_spi"

/**********************************************************/

#define SPI_CTL			0x0
#define SPI_CLKDIV		0x4
#define SPI_STAT		0x8
#define SPI_RXDAT		0xc
#define SPI_TXDAT		0x10
#define SPI_TCNT		0x14
#define SPI_SEED		0x18
#define SPI_TXCR		0x1c
#define SPI_RXCR		0x20

#define MAX_SPI_POLL_LOOPS		5000
#define MAX_SPI_DMA_LEN			8192
#define BYTES_4_DMA_XFER		64

struct caninos_spi {
	struct device *dev;

	unsigned int irq;
	spinlock_t		lock;
	struct clk *clk;

	u32 base; /*phy addr*/

	struct workqueue_struct *workqueue;
	struct work_struct	work;

	/* Lock access to transfer list.	*/
	struct list_head	msg_queue;

	u8 enable_dma;

#ifdef CONFIG_DMA_ENGINE
	struct dma_chan			*dma_rx_channel;
	struct dma_chan			*dma_tx_channel;
	struct sg_table			sgt_rx;
	struct sg_table			sgt_tx;
	bool				dma_running;
#endif

};

static inline void dump_spi_registers(struct caninos_spi *caninos_spi)
{
	dev_dbg(caninos_spi->dev, "caninos_spi: SPI0_CTL(0x%x) = 0x%x\n", caninos_spi->base + SPI_CTL,
	       act_readl(caninos_spi->base + SPI_CTL));
	dev_dbg(caninos_spi->dev, "caninos_spi: SPI0_STAT(0x%x) = 0x%x\n", caninos_spi->base + SPI_STAT,
	       act_readl(caninos_spi->base + SPI_STAT));
	dev_dbg(caninos_spi->dev, "caninos_spi: SPI0_CLKDIV(0x%x) = 0x%x\n", caninos_spi->base + SPI_CLKDIV,
	       act_readl(caninos_spi->base + SPI_CLKDIV));
}

static inline u32 spi_reg(struct caninos_spi *caninos_spi, u32 reg)
{
	return caninos_spi->base + reg;
}


static inline void spi_clear_stat(struct caninos_spi *caninos_spi)
{

	act_writel(SPIx_STAT_TFER	/* clear the rx FIFO */
		| SPIx_STAT_RFER	/* clear the tx FIFO */
		| SPIx_STAT_BEB	/* clear the Bus error bit */
		| SPIx_STAT_TCOM	/* clear the transfer complete bit */
		| SPIx_STAT_TIP	/* clear the tx IRQ pending bit */
		| SPIx_STAT_PIP,	/* clear the rx IRQ pending bit */
		spi_reg(caninos_spi, SPI_STAT)
	);
}

static int caninos_spi_mode_set(struct spi_device *spi)
{
	u32 ctl_reg;
	struct caninos_spi *caninos_spi;
	u32 tmp;
	u8 mode = spi->mode;

	caninos_spi = spi_master_get_devdata(spi->master);
	ctl_reg = spi_reg(caninos_spi, SPI_CTL);

	tmp = act_readl(ctl_reg);

	tmp |= SPIx_CTL_EN;

	if (mode & SPI_CPHA)
		tmp |= (0x1 << 6);
	else
		tmp &= (~(0x1 << 6));

	if (mode & SPI_CPOL)
		tmp |= (0x1 << 7);
	else
		tmp &= (~(0x1 << 7));

	if (mode & SPI_LSB_FIRST)
		tmp |= SPIx_CTL_LMFS;
	else
		tmp &= (~SPIx_CTL_LMFS);

	if (mode & SPI_LOOP)
		tmp |= SPIx_CTL_LBT;
	else
		tmp &= (~SPIx_CTL_LBT);

	act_writel(tmp, ctl_reg);

	return 0;
}

static int caninos_spi_set_bus_param(struct spi_device *spi,
	int bits_per_word, u8 convert_endian)
{
	u32 ctl_reg;
	struct caninos_spi *caninos_spi;
	u32 tmp;

	caninos_spi = spi_master_get_devdata(spi->master);
	ctl_reg = spi_reg(caninos_spi, SPI_CTL);

	tmp = act_readl(ctl_reg);
	tmp &= (~SPIx_CTL_DAWS(3));

	if (bits_per_word == 8) {
		tmp |= SPIx_CTL_DAWS(0);
	} else if (bits_per_word == 16) {
		tmp |= SPIx_CTL_DAWS(1);
	} else if (bits_per_word == 32) {
		tmp |= SPIx_CTL_DAWS(2);
	} else {
		pr_debug("caninos_spi:Bad bits per word value %d (8, 16 or 32 are "
			 "allowed).\n", bits_per_word);
		return -EINVAL;
	}

	if (convert_endian)
		tmp |= SPIx_CTL_CEB;
	else
		tmp &= (~SPIx_CTL_CEB);

	spi->bits_per_word = bits_per_word;
	act_writel(tmp, ctl_reg);

	return 0;
}

static int caninos_spi_baudrate_set(struct spi_device *spi, unsigned int speed)
{
	u32 spi_source_clk_hz;
	u32 clk_div;
	u32 clkdiv_reg;
	struct caninos_spi *caninos_spi;

	caninos_spi = spi_master_get_devdata(spi->master);

	clkdiv_reg = spi_reg(caninos_spi, SPI_CLKDIV);

	spi_source_clk_hz = clk_get_rate(caninos_spi->clk);

	/* setup SPI clock register */
	/* SPICLK = HCLK/(CLKDIV*2) */
	clk_div = (spi_source_clk_hz + (2 * speed) - 1) / (speed) / 2;
	if (clk_div == 0)
		clk_div = 1;

	dev_dbg(&spi->dev, "caninos_spi: required speed = %d\n", speed);
	dev_dbg(&spi->dev, "caninos_spi:spi clock = %d KHz(hclk = %d,clk_div = %d)\n",
	       spi_source_clk_hz / (clk_div * 2) / 1000, spi_source_clk_hz, clk_div);

	act_writel(SPIx_CLKDIV_CLKDIV(clk_div), clkdiv_reg);

	return 0;
}


//Use SS line as CS
static void caninos_spi_activate_cs(struct spi_device *spi)
{
	struct caninos_spi *caninos_spi;
	u32 ctl_reg;
	u32 enable = 0;

	caninos_spi = spi_master_get_devdata(spi->master);

	if (spi->mode & SPI_CS_HIGH){
		enable = 1;
	}

	
	//dev_info(&spi->dev, "id = %d\n", spi->dev.of_node->unique_id);
	//dev_info(&spi->dev, "gpio_cs = %d\nenable = 0x%X\n", spi->cs_gpio, enable);
	//look if the controler using gpio
	if (gpio_is_valid(spi->cs_gpio)){
		//dev_info(&spi->dev, "Set GPIO as CS\n");
		gpio_set_value(spi->cs_gpio, enable);
		ctl_reg = spi_reg(caninos_spi, SPI_CTL);
		act_clearl(SPIx_CTL_SSCO, ctl_reg);
	}
	else//use the SS Line
	{
		//dev_info(&spi->dev, "Set SS as CS\n");
		ctl_reg = spi_reg(caninos_spi, SPI_CTL);
		act_clearl(SPIx_CTL_SSCO, ctl_reg);
	}
	//ctl_reg = spi_reg(caninos_spi, SPI_CTL);

	//act_clearl(SPIx_CTL_SSCO, ctl_reg);
}

static void caninos_spi_deactivate_cs(struct spi_device *spi)
{
	struct caninos_spi *caninos_spi;
	u32 ctl_reg;
	u32 disable = 1;

	caninos_spi = spi_master_get_devdata(spi->master);

	if (spi->mode & SPI_CS_HIGH)
		disable = 0;

	//look if the controler using gpio
	if (gpio_is_valid(spi->cs_gpio)){
		gpio_set_value(spi->cs_gpio, disable);
		ctl_reg = spi_reg(caninos_spi, SPI_CTL);
		act_setl(SPIx_CTL_SSCO, ctl_reg);
	}
	else//use the SS Line
	{
		ctl_reg = spi_reg(caninos_spi, SPI_CTL);
		act_setl(SPIx_CTL_SSCO, ctl_reg);
	}
	//ctl_reg = spi_reg(caninos_spi, SPI_CTL);

	//act_setl(SPIx_CTL_SSCO, ctl_reg);
}

int caninos_spi_wait_till_ready(struct caninos_spi *caninos_spi)
{
	int i;
	u32 stat_reg = spi_reg(caninos_spi, SPI_STAT);

	for (i = 0; i < MAX_SPI_POLL_LOOPS; i++) {
		if (act_readl(stat_reg) & SPIx_STAT_TCOM) {
			act_writel(act_readl(stat_reg) | SPIx_STAT_TCOM, stat_reg);
			//dump_spi_registers(caninos_spi);
			dev_dbg(caninos_spi->dev, "wait num = %d\n", i);
			return 1;
		}
	}

	dump_spi_registers(caninos_spi);

	return -1;
}


static void spi_callback(void *completion)
{
	complete(completion);
}


static inline int caninos_spi_write_read_8bit(struct spi_device *spi,
			   struct spi_transfer *xfer)
{
	u32 tx_reg, rx_reg, ctl_reg;
	struct caninos_spi *caninos_spi;
	u32 tmp;
	const u8 *tx_buf = xfer->tx_buf;
	u8 *rx_buf = xfer->rx_buf;
	unsigned int count = xfer->len;

	dev_dbg(&spi->dev, "%s(len:0x%x)\n", __func__, xfer->len);
	if (rx_buf != NULL) {
		dev_dbg(&spi->dev, "  rx_buf:0x%x)\n", ((const u8 *)(xfer->rx_buf))[0]);
	}
	if (tx_buf != NULL) {
		dev_dbg(&spi->dev, "  tx_buf:0x%x)\n", ((const u8 *)(xfer->tx_buf))[0]);
	}


	caninos_spi = spi_master_get_devdata(spi->master);
	ctl_reg = spi_reg(caninos_spi, SPI_CTL);
	tx_reg = spi_reg(caninos_spi, SPI_TXDAT);
	rx_reg = spi_reg(caninos_spi, SPI_RXDAT);

	tmp = act_readl(ctl_reg);
	tmp &= (~(SPIx_CTL_RWC(3) |
		SPIx_CTL_RDIC(3) |
		SPIx_CTL_TDIC(3) |
		SPIx_CTL_SDT(7) |
		SPIx_CTL_DTS |
		SPIx_CTL_TIEN |
		SPIx_CTL_RIEN |
		SPIx_CTL_TDEN |
		SPIx_CTL_RDEN));
	tmp |= SPIx_CTL_RWC(0);
	act_writel(tmp, ctl_reg);

	do {
		if (tx_buf)
			act_writel(*tx_buf++, tx_reg);
		else
			act_writel(0, tx_reg);

		if (caninos_spi_wait_till_ready(caninos_spi) < 0) {
			dev_err(&spi->dev, "[%s]:TXS timed out\n", __func__);
			return count;
		}

		if (rx_buf)
			*rx_buf++ = act_readl(rx_reg);

		count--;

	} while (count);

	if (rx_buf != NULL) {
		dev_dbg(&spi->dev, "  rx_buf:0x%x)\n", ((const u8 *)(xfer->rx_buf))[0]);
	}
	if (tx_buf != NULL) {
		dev_dbg(&spi->dev, "  tx_buf:0x%x)\n", ((const u8 *)(xfer->tx_buf))[0]);
	}

	return count;
}

static inline int caninos_spi_write_read_16bit(struct spi_device *spi,
			   struct spi_transfer *xfer)
{
	u32 tx_reg, rx_reg, ctl_reg;
	struct caninos_spi *caninos_spi;
	u32 tmp;
	const u16 *tx_buf = xfer->tx_buf;
	u16 *rx_buf = xfer->rx_buf;
	unsigned int count = xfer->len;

	if (tx_buf) {
		dev_dbg(&spi->dev, "    tx_buf 0x%x  0x%x\n", tx_buf[0], tx_buf[1]);
	}

	caninos_spi = spi_master_get_devdata(spi->master);
	ctl_reg = spi_reg(caninos_spi, SPI_CTL);
	tx_reg = spi_reg(caninos_spi, SPI_TXDAT);
	rx_reg = spi_reg(caninos_spi, SPI_RXDAT);

	tmp = act_readl(ctl_reg);
	tmp &= (~(SPIx_CTL_RWC(3) |
		SPIx_CTL_RDIC(3) |
		SPIx_CTL_TDIC(3) |
		SPIx_CTL_SDT(7) |
		SPIx_CTL_DTS |
		SPIx_CTL_TIEN |
		SPIx_CTL_RIEN |
		SPIx_CTL_TDEN |
		SPIx_CTL_RDEN));
	tmp |= SPIx_CTL_RWC(0);
	act_writel(tmp, ctl_reg);

	do {
		if (tx_buf)
			act_writel(*tx_buf++, tx_reg);
		else
			act_writel(0, tx_reg);

		if (caninos_spi_wait_till_ready(caninos_spi) < 0) {
			dev_err(&spi->dev, "[%s]:TXS timed out\n", __func__);
			return count;
		}

		if (rx_buf) {
			*rx_buf++ = act_readl(rx_reg);
			dev_dbg(&spi->dev, "rx_buf 0x%x\n", rx_buf[-1]);
		}

		count -= 2;
	} while (count);

	return count;
}


static inline int caninos_spi_write_read_32bit(struct spi_device *spi,
			   struct spi_transfer *xfer)
{
	u32 tx_reg, rx_reg, ctl_reg;
	struct caninos_spi *caninos_spi;
	u32 tmp;
	const u32 *tx_buf = xfer->tx_buf;
	u32 *rx_buf = xfer->rx_buf;
	unsigned int count = xfer->len;

	caninos_spi = spi_master_get_devdata(spi->master);
	ctl_reg = spi_reg(caninos_spi, SPI_CTL);
	tx_reg = spi_reg(caninos_spi, SPI_TXDAT);
	rx_reg = spi_reg(caninos_spi, SPI_RXDAT);

	tmp = act_readl(ctl_reg);
	tmp &= (~(SPIx_CTL_RWC(3) |
		SPIx_CTL_RDIC(3) |
		SPIx_CTL_TDIC(3) |
		SPIx_CTL_SDT(7) |
		SPIx_CTL_DTS |
		SPIx_CTL_TIEN |
		SPIx_CTL_RIEN |
		SPIx_CTL_TDEN |
		SPIx_CTL_RDEN));
	tmp |= SPIx_CTL_RWC(0);
	act_writel(tmp, ctl_reg);

	do {
		if (tx_buf)
			act_writel(*tx_buf++, tx_reg);
		else
			act_writel(0, tx_reg);

		if (caninos_spi_wait_till_ready(caninos_spi) < 0) {
			dev_err(&spi->dev, "[%s]:TXS timed out\n", __func__);
			return count;
		}

		if (rx_buf)
			*rx_buf++ = act_readl(rx_reg);

		count -= 4;

	} while (count);

	return count;
}

static int caninos_spi_get_channel_no(unsigned int base)
{
	switch (base) {
		case SPI0_BASE:
			return 0;
		case SPI1_BASE:
			return 1;
		case SPI2_BASE:
			return 2;
		case SPI3_BASE:
			return 3;
	}
	return -1;
}

static unsigned int caninos_spi_get_write_dma_trig(unsigned int base)
{
	static unsigned int trigs[] = {SPI0_T, SPI1_T, SPI2_T, SPI3_T};
	
	int spi_no = caninos_spi_get_channel_no(base);
	if(spi_no < 0) {
		pr_err("error: 0x%x.spi do not support\n", base);
		return -1;
	}
	
	return trigs[spi_no];
}

static inline unsigned int caninos_spi_get_read_dma_trig(unsigned int base)
{
	static unsigned int trigs[] = {SPI0_R, SPI1_R, SPI2_R, SPI3_R};
	int spi_no = caninos_spi_get_channel_no(base);
	if(spi_no < 0) {
		pr_err("error: 0x%x.spi do not support\n", base);
		return -1;
	}
	
	return trigs[spi_no];
}

static struct page *caninos_spi_virt_to_page(const void *addr)
{
	if (is_vmalloc_addr(addr))
		return vmalloc_to_page(addr);
	else
		return virt_to_page(addr);
}

static void caninos_spi_setup_dma_scatter(struct caninos_spi *caninos_spi,
			      void *buffer,
			      unsigned int length,
			      struct sg_table *sgtab)
{
	struct scatterlist *sg;
	int bytesleft = length;
	void *bufp = buffer;
	int mapbytes;
	int i;

	if (buffer) {
		for_each_sg(sgtab->sgl, sg, sgtab->nents, i) {
			if(bytesleft == 0) {
				sg_mark_end(sg);
				sgtab->nents = i;
				break;
			}
			/*
			 * If there are less bytes left than what fits
			 * in the current page (plus page alignment offset)
			 * we just feed in this, else we stuff in as much
			 * as we can.
			 */
			if (bytesleft < (PAGE_SIZE - offset_in_page(bufp)))
				mapbytes = bytesleft;
			else
				mapbytes = PAGE_SIZE - offset_in_page(bufp);
			sg_set_page(sg, caninos_spi_virt_to_page(bufp),
				    mapbytes, offset_in_page(bufp));
			bufp += mapbytes;
			bytesleft -= mapbytes;
			dev_dbg(caninos_spi->dev,
				"set RX/TX target page @ %p, %d bytes, %d left\n",
				bufp, mapbytes, bytesleft);
		}
	}
	
	BUG_ON(bytesleft);
}

static int caninos_spi_write_by_dma(struct caninos_spi *caninos_spi,
	struct spi_transfer *xfer)
{
	struct dma_slave_config tx_conf = {
		.dst_addr = spi_reg(caninos_spi, SPI_TXDAT),
		.direction = DMA_MEM_TO_DEV,
	};
	struct owl_dma_slave tx_atslave = {
		.mode = PRIORITY_ZERO | SRC_INCR | DST_CONSTANT
					| SRC_DCU | DST_DEV 
					| caninos_spi_get_write_dma_trig(caninos_spi->base),
		.dma_dev = caninos_spi->dma_tx_channel->device->dev,
		.trans_type = SLAVE,
	};
	u32 ctl_reg = spi_reg(caninos_spi, SPI_CTL);
	u32 stat_reg = spi_reg(caninos_spi, SPI_STAT);
	u32 txcr_reg = spi_reg(caninos_spi, SPI_TXCR);

	struct dma_chan *txchan = caninos_spi->dma_tx_channel;
	unsigned int pages;
	int len, left;
	void *tx_buf;
	int tx_sglen;
	struct dma_async_tx_descriptor *txdesc;
	u32 val;
	int retval;

	struct completion tx_cmp;
	dma_cookie_t		cookie;
	enum dma_status		status;

	/* Create sglists for the transfers */
	left = xfer->len;
	tx_buf = (void*)xfer->tx_buf;
	len = left > MAX_SPI_DMA_LEN ? MAX_SPI_DMA_LEN : left;
	
	pages = DIV_ROUND_UP(len, PAGE_SIZE);
	retval = sg_alloc_table(&caninos_spi->sgt_tx, pages, GFP_ATOMIC);
	if (retval)
		goto err_slave;

	while(left > 0) {
		len = left > MAX_SPI_DMA_LEN ? MAX_SPI_DMA_LEN : left;
		left -= len;
		
		val = act_readl(ctl_reg);
		val &= (~(SPIx_CTL_RWC(3) |
			SPIx_CTL_RDIC(3) |
			SPIx_CTL_TDIC(3) |
			SPIx_CTL_SDT(7) |
			SPIx_CTL_DTS |
			SPIx_CTL_TIEN |
			SPIx_CTL_RIEN |
			SPIx_CTL_TDEN |
			SPIx_CTL_RDEN));
		val |= (SPIx_CTL_RWC(1) |
			SPIx_CTL_RDIC(2) |
			SPIx_CTL_TDIC(2) |
			SPIx_CTL_TDEN);
		act_writel(val, ctl_reg);
	
		act_writel(len/4, txcr_reg);

		txchan->private = (void *)&tx_atslave;
		retval = dmaengine_slave_config(txchan, &tx_conf);
		if (retval) {
			dev_err(caninos_spi->dev, "call the write slave config error\n");
			goto err_slave;
		}

		/* Fill in the scatterlists for the TX buffers */
		caninos_spi_setup_dma_scatter(caninos_spi, tx_buf, len, &caninos_spi->sgt_tx);
		tx_sglen = dma_map_sg(txchan->device->dev, caninos_spi->sgt_tx.sgl,
				   caninos_spi->sgt_tx.nents, DMA_TO_DEVICE);
		if (!tx_sglen)
			goto err_sgmap;

		tx_buf += len;

		/* Send scatterlists */
		txdesc = dmaengine_prep_slave_sg(txchan,
					      caninos_spi->sgt_tx.sgl,
					      tx_sglen,
					      DMA_MEM_TO_DEV,
					      0);
		if (!txdesc)
			goto err_desc;

		init_completion(&tx_cmp);
	
		txdesc->callback = spi_callback;
		txdesc->callback_param = &tx_cmp;

		cookie = dmaengine_submit(txdesc);
		if (dma_submit_error(cookie)) {
			dev_err(caninos_spi->dev, "submit write error!\n");
			goto err_desc;
		}

		dma_async_issue_pending(txchan);

		dev_dbg(caninos_spi->dev, "write start dma\n");
		if (!wait_for_completion_timeout(&tx_cmp, 5 * HZ)) {
			dev_err(caninos_spi->dev, "wait_for_completion timeout while send by dma\n");
			owl_dma_dump_all(txchan);
			goto err_desc;
		}

		status = dma_async_is_tx_complete(txchan, cookie, NULL, NULL);
		if (status != DMA_COMPLETE) {
			dev_err(caninos_spi->dev, "transfer not succeed\n");
			goto err_desc;
		}

		if (caninos_spi_wait_till_ready(caninos_spi) < 0) {
			dev_err(caninos_spi->dev, "[%s]:TXS timed out\n", __func__);
			goto err_desc;
		}

		if (act_readl(stat_reg) &
		    (SPIx_STAT_RFER | SPIx_STAT_TFER | SPIx_STAT_BEB)) {
			dev_err(caninos_spi->dev, "spi state error while send by dma\n");
			dump_spi_registers(caninos_spi);
			goto err_desc;
		}

		dma_unmap_sg(txchan->device->dev, caninos_spi->sgt_tx.sgl,
			     caninos_spi->sgt_tx.nents, DMA_TO_DEVICE);
	}
	sg_free_table(&caninos_spi->sgt_tx);
	return 0;

err_desc:
	dmaengine_terminate_all(txchan);
err_sgmap:
	sg_free_table(&caninos_spi->sgt_tx);
err_slave:
	return -EINVAL;
}

static int caninos_spi_read_by_dma(struct caninos_spi *caninos_spi,
			   struct spi_transfer *xfer)
{
	struct dma_slave_config rx_conf = {
		.src_addr = spi_reg(caninos_spi, SPI_RXDAT),
		.direction = DMA_DEV_TO_MEM,
	};
	struct owl_dma_slave rx_atslave = {
		.mode = PRIORITY_ZERO | DST_INCR | SRC_CONSTANT 
					| DST_DCU | SRC_DEV 
					| caninos_spi_get_read_dma_trig(caninos_spi->base),
		.dma_dev = caninos_spi->dma_rx_channel->device->dev,
		.trans_type = SLAVE,
	};
	u32 ctl_reg = spi_reg(caninos_spi, SPI_CTL);
	u32 stat_reg = spi_reg(caninos_spi, SPI_STAT);
	u32 rxcr_reg = spi_reg(caninos_spi, SPI_RXCR);
	u32 tcnt_reg = spi_reg(caninos_spi, SPI_TCNT);
	struct dma_chan *rxchan = caninos_spi->dma_rx_channel;
	unsigned int pages;
	int len, left;
	void *rx_buf;
	int rx_sglen;
	struct dma_async_tx_descriptor *rxdesc;
	
	u32 val;
	int retval;

	struct completion rx_cmp;
	dma_cookie_t		cookie;
	enum dma_status		status;
	
	/* Create sglists for the transfers */
	left = xfer->len;
	rx_buf = xfer->rx_buf;
	len = left > MAX_SPI_DMA_LEN ? MAX_SPI_DMA_LEN : left;
	
	pages = DIV_ROUND_UP(len, PAGE_SIZE);
	retval = sg_alloc_table(&caninos_spi->sgt_rx, pages, GFP_ATOMIC);
	if (retval)
		goto err_slave;

	while(left > 0) {
		len = left > MAX_SPI_DMA_LEN ? MAX_SPI_DMA_LEN : left;
		left -= len;
		
		val = act_readl(ctl_reg);
		val &= (~(SPIx_CTL_RWC(3) |
			SPIx_CTL_RDIC(3) |
			SPIx_CTL_TDIC(3) |
			SPIx_CTL_SDT(7) |
			SPIx_CTL_DTS |
			SPIx_CTL_TIEN |
			SPIx_CTL_RIEN |
			SPIx_CTL_TDEN |
			SPIx_CTL_RDEN));
		val |= (SPIx_CTL_RWC(2) |
			SPIx_CTL_RDIC(2) |
			SPIx_CTL_TDIC(2) |
			SPIx_CTL_SDT(1) |
			SPIx_CTL_DTS |
			SPIx_CTL_RDEN);
		act_writel(val, ctl_reg);

		act_writel(len/4, tcnt_reg);
		act_writel(len/4, rxcr_reg);
		
		rxchan->private = (void *)&rx_atslave;
		retval = dmaengine_slave_config(rxchan, &rx_conf);
		if (retval) {
			dev_err(caninos_spi->dev, "call the read slave config error\n");
			goto err_slave;
		}

		/* Fill in the scatterlists for the RX buffers */
		caninos_spi_setup_dma_scatter(caninos_spi, rx_buf, len, &caninos_spi->sgt_rx);
		rx_sglen = dma_map_sg(rxchan->device->dev, caninos_spi->sgt_rx.sgl,
				   caninos_spi->sgt_rx.nents, DMA_FROM_DEVICE);
		if (!rx_sglen)
			goto err_sgmap;

		rx_buf += len;
		
		/* Send scatterlists */
		rxdesc = dmaengine_prep_slave_sg(rxchan,
					      caninos_spi->sgt_rx.sgl,
					      rx_sglen,
					      DMA_DEV_TO_MEM,
					      0);
		if (!rxdesc)
			goto err_desc;

		init_completion(&rx_cmp);
	
		rxdesc->callback = spi_callback;
		rxdesc->callback_param = &rx_cmp;
	
		cookie = dmaengine_submit(rxdesc);
		if (dma_submit_error(cookie)) {
			dev_err(caninos_spi->dev, "submit read error!\n");
			goto err_desc;
		}

		dma_async_issue_pending(rxchan);

		dev_dbg(caninos_spi->dev, "read start dma\n");
		if (!wait_for_completion_timeout(&rx_cmp, 5 * HZ)) {
			dev_err(caninos_spi->dev, "read wait_for_completion timeout while receive by dma\n");
			owl_dma_dump_all(rxchan);
			goto err_desc;
		}
	
		status = dma_async_is_tx_complete(rxchan, cookie, NULL, NULL);
		if (status != DMA_COMPLETE) {
			dev_err(caninos_spi->dev, "transfer not succeed\n");
			goto err_desc;
		}
	
		if (caninos_spi_wait_till_ready(caninos_spi) < 0) {
			dev_err(caninos_spi->dev, "RXS timed out\n");
			goto err_desc;
		}
	
		if (act_readl(stat_reg) &
		    (SPIx_STAT_RFER | SPIx_STAT_TFER | SPIx_STAT_BEB)) {
			dev_err(caninos_spi->dev, "spi state error while send by dma\n");
			dump_spi_registers(caninos_spi);
			goto err_desc;
		}
	
		dma_unmap_sg(rxchan->device->dev, caninos_spi->sgt_rx.sgl,
			     caninos_spi->sgt_rx.nents, DMA_FROM_DEVICE);
	}
	sg_free_table(&caninos_spi->sgt_rx);
	return 0;
	
err_desc:
	dmaengine_terminate_all(rxchan);
err_sgmap:
	sg_free_table(&caninos_spi->sgt_rx);
err_slave:
	return -EINVAL;
}


static int caninos_spi_write_read_by_dma(struct caninos_spi *caninos_spi,
			   struct spi_transfer *xfer)
{
	struct dma_slave_config tx_conf = {
		.dst_addr = spi_reg(caninos_spi, SPI_TXDAT),
		.direction = DMA_MEM_TO_DEV,
	};
	struct owl_dma_slave tx_atslave = {
		.mode = PRIORITY_ZERO | SRC_INCR | DST_CONSTANT
					| SRC_DCU | DST_DEV 
					| caninos_spi_get_write_dma_trig(caninos_spi->base),
		.dma_dev = caninos_spi->dma_tx_channel->device->dev,
		.trans_type = SLAVE,
	};
	struct dma_slave_config rx_conf = {
		.src_addr = spi_reg(caninos_spi, SPI_RXDAT),
		.direction = DMA_DEV_TO_MEM,
	};
	struct owl_dma_slave rx_atslave = {
		.mode = PRIORITY_ZERO | DST_INCR | SRC_CONSTANT 
					| DST_DCU | SRC_DEV 
					| caninos_spi_get_read_dma_trig(caninos_spi->base),
		.dma_dev = caninos_spi->dma_rx_channel->device->dev,
		.trans_type = SLAVE,
	};
	u32 ctl_reg = spi_reg(caninos_spi, SPI_CTL);
	u32 stat_reg = spi_reg(caninos_spi, SPI_STAT);
	u32 txcr_reg = spi_reg(caninos_spi, SPI_TXCR);
	u32 rxcr_reg = spi_reg(caninos_spi, SPI_RXCR);
	struct dma_chan *txchan = caninos_spi->dma_tx_channel;
	struct dma_chan *rxchan = caninos_spi->dma_rx_channel;
	unsigned int pages;
	int len, left;
	void *tx_buf, *rx_buf;
	int rx_sglen, tx_sglen;
	struct dma_async_tx_descriptor *rxdesc;
	struct dma_async_tx_descriptor *txdesc;
	
	u32 val;
	int retval;

	struct completion rx_cmp, tx_cmp;
	dma_cookie_t		cookie;
	enum dma_status		status;

	/* Create sglists for the transfers */
	left = xfer->len;
	tx_buf = (void*)xfer->tx_buf;
	rx_buf = xfer->rx_buf;
	len = left > MAX_SPI_DMA_LEN ? MAX_SPI_DMA_LEN : left;

	pages = DIV_ROUND_UP(len, PAGE_SIZE);
	retval = sg_alloc_table(&caninos_spi->sgt_tx, pages, GFP_ATOMIC);
	if (retval)
		goto err_slave;
	retval = sg_alloc_table(&caninos_spi->sgt_rx, pages, GFP_ATOMIC);
	if (retval)
		goto err_slave;

	while(left > 0) {
		len = left > MAX_SPI_DMA_LEN ? MAX_SPI_DMA_LEN : left;
		left -= len;

		val = act_readl(ctl_reg);
		val &= (~(SPIx_CTL_RWC(3) |
			SPIx_CTL_RDIC(3) |
			SPIx_CTL_TDIC(3) |
			SPIx_CTL_SDT(7) |
			SPIx_CTL_DTS |
			SPIx_CTL_TIEN |
			SPIx_CTL_RIEN |
			SPIx_CTL_TDEN |
			SPIx_CTL_RDEN));
		val |= (SPIx_CTL_RWC(0) |
			SPIx_CTL_RDIC(2) |
			SPIx_CTL_TDIC(2) |
			SPIx_CTL_SDT(1) |
			SPIx_CTL_DTS |
			SPIx_CTL_RDEN |
			SPIx_CTL_TDEN);
		act_writel(val, ctl_reg);
	
		act_writel(len/4, txcr_reg);
		act_writel(len/4, rxcr_reg);

		txchan->private = (void *)&tx_atslave;
		retval = dmaengine_slave_config(txchan, &tx_conf);
		if (retval) {
			dev_err(caninos_spi->dev, "call the write slave config error\n");
			goto err_slave;
		}
		rxchan->private = (void *)&rx_atslave;
		retval = dmaengine_slave_config(rxchan, &rx_conf);
		if (retval) {
			dev_err(caninos_spi->dev, "call the read slave config error\n");
			goto err_slave;
		}

		/* Fill in the scatterlists for the TX buffers */
		caninos_spi_setup_dma_scatter(caninos_spi, tx_buf, len, &caninos_spi->sgt_tx);
		tx_sglen = dma_map_sg(txchan->device->dev, caninos_spi->sgt_tx.sgl,
				   caninos_spi->sgt_tx.nents, DMA_TO_DEVICE);
		if (!tx_sglen)
			goto err_sgmap;
		caninos_spi_setup_dma_scatter(caninos_spi, rx_buf, len, &caninos_spi->sgt_rx);
		rx_sglen = dma_map_sg(rxchan->device->dev, caninos_spi->sgt_rx.sgl,
				   caninos_spi->sgt_rx.nents, DMA_FROM_DEVICE);
		if (!rx_sglen)
			goto err_sgmap;

		tx_buf += len;
		rx_buf += len;

		/* Send scatterlists */
		txdesc = dmaengine_prep_slave_sg(txchan,
					      caninos_spi->sgt_tx.sgl,
					      tx_sglen,
					      DMA_MEM_TO_DEV,
					      0);
		if (!txdesc)
			goto err_desc;	
		rxdesc = dmaengine_prep_slave_sg(rxchan,
					      caninos_spi->sgt_rx.sgl,
					      rx_sglen,
					      DMA_DEV_TO_MEM,
					      0);
		if (!rxdesc)
			goto err_desc;

		init_completion(&tx_cmp);
		txdesc->callback = spi_callback;
		txdesc->callback_param = &tx_cmp;
		cookie = dmaengine_submit(txdesc);
		if (dma_submit_error(cookie)) {
			dev_err(caninos_spi->dev, "submit write error!\n");
			goto err_desc;
		}

		init_completion(&rx_cmp);
		rxdesc->callback = spi_callback;
		rxdesc->callback_param = &rx_cmp;
		cookie = dmaengine_submit(rxdesc);
		if (dma_submit_error(cookie)) {
			dev_err(caninos_spi->dev, "submit read error!\n");
			goto err_desc;
		}

		dma_async_issue_pending(txchan);
		dma_async_issue_pending(rxchan);

		dev_dbg(caninos_spi->dev, "write&read start dma\n");
		if (!wait_for_completion_timeout(&tx_cmp, 5 * HZ)) {
			dev_err(caninos_spi->dev, "write wait_for_completion timeout while send by dma\n");
			owl_dma_dump_all(txchan);
			goto err_desc;
		}
		if (!wait_for_completion_timeout(&rx_cmp, 1 * HZ)) {
			dev_err(caninos_spi->dev, "read wait_for_completion timeout while receive by dma\n");
			owl_dma_dump_all(rxchan);
			goto err_desc;
		}
	
		status = dma_async_is_tx_complete(txchan, cookie, NULL, NULL);
		if (status != DMA_COMPLETE) {
			dev_err(caninos_spi->dev, "transfer not succeed\n");
			goto err_desc;
		}
		status = dma_async_is_tx_complete(rxchan, cookie, NULL, NULL);
		if (status != DMA_COMPLETE) {
			dev_err(caninos_spi->dev, "transfer not succeed\n");
			goto err_desc;
		}
	
		if (caninos_spi_wait_till_ready(caninos_spi) < 0) {
			dev_err(caninos_spi->dev, "TXS&RXS timed out\n");
			goto err_desc;
		}

		if (act_readl(stat_reg) &
		    (SPIx_STAT_RFER | SPIx_STAT_TFER | SPIx_STAT_BEB)) {
			dev_err(caninos_spi->dev, "spi state error while send by dma\n");
			dump_spi_registers(caninos_spi);
			goto err_desc;
		}

		dma_unmap_sg(txchan->device->dev, caninos_spi->sgt_tx.sgl,
			     caninos_spi->sgt_tx.nents, DMA_TO_DEVICE);
		dma_unmap_sg(rxchan->device->dev, caninos_spi->sgt_rx.sgl,
			     caninos_spi->sgt_rx.nents, DMA_FROM_DEVICE);
	}
	sg_free_table(&caninos_spi->sgt_tx);
	sg_free_table(&caninos_spi->sgt_rx);
	return 0;
	
err_desc:
	dmaengine_terminate_all(rxchan);
	dmaengine_terminate_all(txchan);
err_sgmap:
	sg_free_table(&caninos_spi->sgt_rx);
	sg_free_table(&caninos_spi->sgt_tx);
err_slave:
	return -EINVAL;
}

static unsigned int
caninos_spi_write_read(struct spi_device *spi, struct spi_transfer *xfer)
{
	struct caninos_spi *caninos_spi;
	unsigned int len;
	int word_len;

	caninos_spi = spi_master_get_devdata(spi->master);
	word_len = spi->bits_per_word;
	len = xfer->len;

	spi_clear_stat(caninos_spi);
	
	if ((len < BYTES_4_DMA_XFER) ||
		(caninos_spi->enable_dma == 0) ||
		(xfer->bits_per_word != 32)) {
		unsigned int count = 0;

		dev_dbg(caninos_spi->dev, "cpu wr\n");

		if (word_len == 8)
			count = caninos_spi_write_read_8bit(spi, xfer);
		else if (word_len == 16)
			count = caninos_spi_write_read_16bit(spi, xfer);
		else if (word_len == 32)
			count = caninos_spi_write_read_32bit(spi, xfer);

		return len - count;

	} else {
		int retval = 0;

		if (xfer->tx_buf && (!xfer->rx_buf)) {
			dev_dbg(caninos_spi->dev, "dma w%d\n", xfer->len);
			retval = caninos_spi_write_by_dma(caninos_spi, xfer);
		} else if ((!xfer->tx_buf) && xfer->rx_buf) {
			dev_dbg(caninos_spi->dev, "dma r%d\n", xfer->len);
			retval = caninos_spi_read_by_dma(caninos_spi, xfer);
		} else if((xfer->tx_buf) && (xfer->rx_buf)) {
			dev_dbg(caninos_spi->dev, "dma w&r%d\n", xfer->len);
			retval = caninos_spi_write_read_by_dma(caninos_spi, xfer);
  		} else {
			dev_err(&spi->dev, "cannot find valid xfer buffer\n");
			return 0;
		}

		if (retval)
			return 0;
		else
			return len;
	}

}

/*
 * called only when no transfer is active on the bus
 */
static int caninos_spi_device_setup(struct spi_device *spi)
{
	struct caninos_spi *caninos_spi;
	int retval;
	int bits_per_word, speed_hz;

	caninos_spi = spi_master_get_devdata(spi->master);

	speed_hz = spi->max_speed_hz;
	bits_per_word = spi->bits_per_word;

	if (bits_per_word <= 8)
		bits_per_word = 8;
	else if (bits_per_word <= 16)
		bits_per_word = 16;
	else if (bits_per_word <= 32)
		bits_per_word = 32;
	else
		return -EINVAL;

	retval = caninos_spi_baudrate_set(spi, speed_hz);
	if (retval)
		return retval;

	return caninos_spi_set_bus_param(spi, bits_per_word, 0);
}


static int caninos_spi_transfer_setup(struct spi_device *spi,
		struct spi_transfer *t)
{
	struct caninos_spi *caninos_spi;
	int retval;
	int bits_per_word, speed_hz;

	if (!t)
		return -EINVAL;

	caninos_spi = spi_master_get_devdata(spi->master);

	speed_hz = (t->speed_hz)
			? t->speed_hz : spi->max_speed_hz;
	bits_per_word = (t->bits_per_word)
			? t->bits_per_word : spi->bits_per_word;

	if (bits_per_word <= 8 || t->len <= 8)
		bits_per_word = 8;
	else if (bits_per_word <= 16)
		bits_per_word = 16;
	else if (bits_per_word <= 32)
		bits_per_word = 32;
	else
		return -EINVAL;


	retval = caninos_spi_baudrate_set(spi, speed_hz);
	if (retval)
		return retval;

	return caninos_spi_set_bus_param(spi, bits_per_word, 0);
}


static int caninos_spi_transfer_check(struct spi_device *spi,
		struct spi_transfer *t)
{
	int bits_per_word = 0;

	if ((!t) || (t->len == 0))
		return -EINVAL;

	bits_per_word = (t->bits_per_word)
			? t->bits_per_word : spi->bits_per_word;
	if (bits_per_word <= 8 || t->len <= 8)
		bits_per_word = 8;
	else if (bits_per_word <= 16)
		bits_per_word = 16;
	else if (bits_per_word <= 32)
		bits_per_word = 32;
	else
		return -EINVAL;

	/*transfer length should be alignd according to bits_per_word*/
	if (t->len & ((bits_per_word >> 3) - 1)) {
		dev_err(&spi->dev, "bad transfer length!!\n");
		return -EINVAL;
	}

	return 0;
}


static void caninos_spi_work(struct work_struct *work)
{
	struct caninos_spi *caninos_spi =
		container_of(work, struct caninos_spi, work);

	dev_dbg(caninos_spi->dev, "Caninos SPI: enter spi work\n");

	spin_lock_irq(&caninos_spi->lock);
	while (!list_empty(&caninos_spi->msg_queue)) {
		struct spi_message *m;
		struct spi_device *spi;
		struct spi_transfer *t = NULL;
		int par_override = 0;
		int status = 0;
		int cs_active = 0;

		dev_dbg(caninos_spi->dev, "caninos_spi: start one message\n");

		m = container_of(caninos_spi->msg_queue.next, struct spi_message,
				 queue);

		list_del_init(&m->queue);
		spin_unlock_irq(&caninos_spi->lock);

		spi = m->spi;

		/* Load defaults */
		status = caninos_spi_mode_set(spi);
		status = caninos_spi_device_setup(spi);

		if (status < 0)
			goto msg_done;

		list_for_each_entry(t, &m->transfers, transfer_list) {
			dev_dbg(caninos_spi->dev, "caninos_spi: start one transfer\n");

			status = caninos_spi_transfer_check(spi, t);
			if (status < 0)
				break;

			if (par_override || t->bits_per_word || t->speed_hz) {
				par_override = 1;
				status = caninos_spi_transfer_setup(spi, t);
				if (status < 0)
					break;
				if (!t->speed_hz && !t->bits_per_word)
					par_override = 0;
			}

			if (!cs_active) {
				caninos_spi_activate_cs(spi);
				cs_active = 1;
			}

			m->actual_length +=
				caninos_spi_write_read(spi, t);

			if (t->delay_usecs)
				udelay(t->delay_usecs);

			if (t->cs_change) {
				caninos_spi_deactivate_cs(spi);
				cs_active = 0;
			}
			dev_dbg(caninos_spi->dev, "caninos_spi: end one transfer\n");
		}

msg_done:
		if (cs_active)
			caninos_spi_deactivate_cs(spi);

		m->status = status;
		m->complete(m->context);

		dev_dbg(caninos_spi->dev, "caninos_spi: end one message\n");
		spin_lock_irq(&caninos_spi->lock);
	}

	spin_unlock_irq(&caninos_spi->lock);

	dev_dbg(caninos_spi->dev, "Caninos SPI: quit spi work\n");
}

static int caninos_spi_setup(struct spi_device *spi)
{
	struct caninos_spi *caninos_spi;
	unsigned int spi_source_clk_hz;

	dev_dbg(&spi->dev, "Caninos SPI: enter spi setup\n");

	caninos_spi = spi_master_get_devdata(spi->master);

	if (spi->bits_per_word > 32)
		return -EINVAL;

	if (spi->bits_per_word == 0)
		spi->bits_per_word = 8;

	spi_source_clk_hz = clk_get_rate(caninos_spi->clk);

	dev_dbg(&spi->dev, "ahb freq is %d\n", spi_source_clk_hz);

	if ((spi->max_speed_hz == 0)
			|| (spi->max_speed_hz > spi_source_clk_hz))
		spi->max_speed_hz = spi_source_clk_hz;

	dev_dbg(&spi->dev, "Caninos SPI: ok spi setup\n");

	/*
	 * baudrate & width will be set caninos_spi_setup_transfer
	 */
	return 0;
}


static int caninos_spi_transfer(struct spi_device *spi, struct spi_message *m)
{
	struct caninos_spi *caninos_spi;
	unsigned long flags;

	/* reject invalid messages and transfers */
	if (list_empty(&m->transfers) || !m->complete) {
		m->status = -EINVAL;
		return -EINVAL;
	}

	caninos_spi = spi_master_get_devdata(spi->master);

	m->actual_length = 0;
	m->status = -EINPROGRESS;

	spin_lock_irqsave(&caninos_spi->lock, flags);
	list_add_tail(&m->queue, &caninos_spi->msg_queue);
	queue_work(caninos_spi->workqueue, &caninos_spi->work);
	spin_unlock_irqrestore(&caninos_spi->lock, flags);

	return 0;

}

static void caninos_spi_cleanup(struct spi_device *spi)
{
}

static struct caninos_spi_pdata caninos_spi_pdata = {
	.max_chipselect = 4,
	.enable_dma = 1,
};

static const struct of_device_id caninos_spi_dt_ids[] = {
	{
		.compatible = "caninos,caninos-spi",
		.data = &caninos_spi_pdata,
	},
	{},
};

MODULE_DEVICE_TABLE(of, caninos_spi_dt_ids);



static int caninos_spi_dma_probe(struct caninos_spi *caninos_spi)
{
	dma_cap_mask_t mask;

	if (!caninos_spi->enable_dma) {
		dev_dbg(caninos_spi->dev, "spi dma is disabled\n");
		return 0;
	}

	/* Try to acquire a generic DMA engine slave channel */
	dma_cap_zero(mask);
	dma_cap_set(DMA_SLAVE, mask);
	/*
	 * We need both RX and TX channels to do DMA, else do none
	 * of them.
	 */
	caninos_spi->dma_rx_channel = dma_request_channel(mask, NULL, NULL);
	if (!caninos_spi->dma_rx_channel) {
		dev_err(caninos_spi->dev, "no RX DMA channel!\n");
		goto err_no_rxchan;
	}

	caninos_spi->dma_tx_channel = dma_request_channel(mask, NULL, NULL);
	if (!caninos_spi->dma_tx_channel) {
		dev_err(caninos_spi->dev, "no TX DMA channel!\n");
		goto err_no_txchan;
	}

	dev_dbg(caninos_spi->dev, "setup for DMA on RX %s, TX %s\n",
		 dma_chan_name(caninos_spi->dma_rx_channel),
		 dma_chan_name(caninos_spi->dma_tx_channel));

	return 0;

err_no_txchan:
	dma_release_channel(caninos_spi->dma_rx_channel);
	caninos_spi->dma_rx_channel = NULL;
err_no_rxchan:
	dev_err(caninos_spi->dev, "Failed to work in dma mode, work without dma!\n");
	return -ENODEV;
}

static void caninos_spi_unmap_free_dma_scatter(struct caninos_spi *caninos_spi)
{
	/* Unmap and free the SG tables */
	dma_unmap_sg(caninos_spi->dma_tx_channel->device->dev, caninos_spi->sgt_tx.sgl,
		     caninos_spi->sgt_tx.nents, DMA_TO_DEVICE);
	dma_unmap_sg(caninos_spi->dma_rx_channel->device->dev, caninos_spi->sgt_rx.sgl,
		     caninos_spi->sgt_rx.nents, DMA_FROM_DEVICE);
	sg_free_table(&caninos_spi->sgt_rx);
	sg_free_table(&caninos_spi->sgt_tx);
}

static void caninos_spi_terminate_dma(struct caninos_spi *caninos_spi)
{
	struct dma_chan *rxchan = caninos_spi->dma_rx_channel;
	struct dma_chan *txchan = caninos_spi->dma_tx_channel;

	dmaengine_terminate_all(rxchan);
	dmaengine_terminate_all(txchan);
	caninos_spi_unmap_free_dma_scatter(caninos_spi);
	caninos_spi->dma_running = false;
}

static void caninos_spi_dma_remove(struct caninos_spi *caninos_spi)
{
	if (caninos_spi->dma_running)
		caninos_spi_terminate_dma(caninos_spi);
	if (caninos_spi->dma_tx_channel)
		dma_release_channel(caninos_spi->dma_tx_channel);
	if (caninos_spi->dma_rx_channel)
		dma_release_channel(caninos_spi->dma_rx_channel);
}

static int caninos_spi_clk_enable(struct caninos_spi *caninos_spi)
{
	static int mod_ids[] = {MOD_ID_SPI0, MOD_ID_SPI1, MOD_ID_SPI2, MOD_ID_SPI3};
	
	int mod_id;
	int spi_no = caninos_spi_get_channel_no(caninos_spi->base);
	if(spi_no < 0)
		return -1;
		
	caninos_spi->clk = clk_get(caninos_spi->dev, "H_CLK");
	if (IS_ERR(caninos_spi->clk)) {
		return PTR_ERR(caninos_spi->clk);
	}

	mod_id = mod_ids[spi_no];
	
	module_clk_enable(mod_id);
	module_reset(mod_id);
	return 0;
}

static int caninos_spi_clk_disable(struct caninos_spi *caninos_spi)
{
	static int mod_ids[] = {MOD_ID_SPI0, MOD_ID_SPI1, MOD_ID_SPI2, MOD_ID_SPI3};
	
	int mod_id;
	int spi_no = caninos_spi_get_channel_no(caninos_spi->base);
	if(spi_no < 0)
		return -1;
		
	if (!IS_ERR(caninos_spi->clk))
		clk_put(caninos_spi->clk);

	mod_id = mod_ids[spi_no];
	
	module_clk_disable(mod_id);
	return 0;
}

/*Just for test de LCD it will use just one CS GPIO, must implement for more gpios*/
static int caninos_spi_master_get_cs_gpios(struct spi_master *ctlr)
{
	int nb, i, *cs, ret;
	struct device_node *np = ctlr->dev.of_node;

	if (!np){
		dev_err(&ctlr->dev, "No node found! give up of GPIO\n");
		return 0;
	}

	/*nb = of_gpio_named_count(np, "cs-gpio");*/
	//ctlr->num_chipselect = max_t(int, nb, ctlr->num_chipselect);
	ctlr->num_chipselect = max_t(int, 1, ctlr->num_chipselect);
	/* Return error only for an incorrectly formed cs-gpios property */
	/*if (nb == 0 || nb == -ENOENT)
		return 0;
	else if (nb < 0)
		return nb;
	*/
	dev_info(&ctlr->dev, "num_chipselect = %d", ctlr->num_chipselect);
	cs = devm_kzalloc(&ctlr->dev, sizeof(int) * ctlr->num_chipselect,
			  GFP_KERNEL);
	ctlr->cs_gpios = cs;

	if (!ctlr->cs_gpios)
		return -ENOMEM;

	for (i = 0; i < ctlr->num_chipselect; i++)
		cs[i] = -ENOENT;

	cs[0] = of_get_named_gpio(np, "cs-gpio", 0);
	if(gpio_is_valid(cs[0])){
		ret = devm_gpio_request(&ctlr->dev, cs[0], "cs-gpio");
		if (ret)
		{
			dev_err(&ctlr->dev, "could not request  cs-gpio[0]\n");
			return ret;
		}
		gpio_direction_output(cs[0], 0);
		gpio_set_value(cs[0], 0x0);
	}

	/*for (i = 0; i < nb; i++){
		cs[i] = of_get_named_gpio(np, "cs-gpio", i);
		if(gpio_is_valid(cs[i])){
			ret = devm_gpio_request(&ctlr->dev, cs[i], "cs-gpio");
			if (ret)
			{
				dev_err(&ctlr->dev, "could not request  cs-gpio[%d]\n", i);
				return ret;
			}
			gpio_direction_output(cs[i], 1);
		}
	}*/

	return 0;
}

static int __init caninos_spi_probe(struct platform_device *pdev)
{
	struct spi_master *master;
	struct caninos_spi *caninos_spi;
	struct caninos_spi_pdata *spi_pdata;
	struct device_node *np = pdev->dev.of_node;
	const struct of_device_id *match;
	int ret = 0;

	dev_dbg(&pdev->dev, "Caninos SPI: enter spi probe\n");
	dev_dbg(&pdev->dev, "pdev->name: %s\n", pdev->name ? pdev->name : "<null>");

	if (np == NULL)
		return -ENODEV;
	match = of_match_node(caninos_spi_dt_ids, np);
	if (match == NULL)
		return -ENODEV;
	spi_pdata = (struct caninos_spi_pdata *)match->data;

	master = spi_alloc_master(&pdev->dev, sizeof *caninos_spi);
	if (master == NULL) {
		dev_dbg(&pdev->dev, "master allocation failed\n");
		return -ENOMEM;
	}

	master->bus_num = of_alias_get_id(np, "spi");

	/* the spi->mode bits understood by this driver: */
	master->mode_bits = SPI_CPOL | SPI_CPHA | SPI_CS_HIGH;

	master->setup = caninos_spi_setup;
	master->transfer = caninos_spi_transfer;
	master->cleanup = caninos_spi_cleanup;

	master->num_chipselect = spi_pdata->max_chipselect;
	master->dev.of_node = np;

	dev_set_drvdata(&pdev->dev, master);

	caninos_spi = spi_master_get_devdata(master);
	caninos_spi->dev = &pdev->dev;
	caninos_spi->irq = platform_get_irq(pdev, 0);
	caninos_spi->base =
		(platform_get_resource(pdev, IORESOURCE_MEM, 0)->start);

	caninos_spi_master_get_cs_gpios(master);

	caninos_spi_clk_enable(caninos_spi);
	caninos_spi->enable_dma = spi_pdata->enable_dma;
	if(caninos_spi_dma_probe(caninos_spi) < 0)
		goto out0;

	spin_lock_init(&caninos_spi->lock);
	INIT_WORK(&caninos_spi->work, caninos_spi_work);
	INIT_LIST_HEAD(&caninos_spi->msg_queue);
	caninos_spi->workqueue = create_singlethread_workqueue(
		dev_name(master->dev.parent));

	if (caninos_spi->workqueue == NULL) {
		ret = -EBUSY;
		goto out0;
	}
	ret = spi_register_master(master);
	if (ret < 0)
		goto out1;

	dev_dbg(&pdev->dev, "Caninos SPI: spi probe ok\n");

	return ret;

out1:
	destroy_workqueue(caninos_spi->workqueue);
out0:
	caninos_spi_dma_remove(caninos_spi);
	spi_master_put(master);
	
	dev_dbg(&pdev->dev, "Caninos SPI: spi probe failed\n");
	return ret;
}


static int __exit caninos_spi_remove(struct platform_device *pdev)
{
	struct spi_master *master;
	struct caninos_spi *caninos_spi;

	dev_dbg(&pdev->dev, "spi remove\n");

	master = dev_get_drvdata(&pdev->dev);
	caninos_spi = spi_master_get_devdata(master);

	cancel_work_sync(&caninos_spi->work);
	caninos_spi_dma_remove(caninos_spi);
	caninos_spi_clk_disable(caninos_spi);

	spi_unregister_master(master);

	dev_dbg(&pdev->dev, "spi remove ok\n");
	
	return 0;
}

MODULE_ALIAS("platform: caninos_spi");


static struct platform_driver caninos_spi_driver = {
	.driver = {
		.name	= "caninos_spi",
		.owner	= THIS_MODULE,
		.of_match_table = caninos_spi_dt_ids,
		},
	.remove		= caninos_spi_remove,

};

static int __init caninos_spi_init(void)
{
	int err;
	err =  platform_driver_probe(&caninos_spi_driver, caninos_spi_probe);
	return err;
}
subsys_initcall(caninos_spi_init);

static void __exit caninos_spi_exit(void)
{
	platform_driver_unregister(&caninos_spi_driver);
}
module_exit(caninos_spi_exit);

MODULE_DESCRIPTION("Caninos SPI driver");
MODULE_LICENSE("GPL");
