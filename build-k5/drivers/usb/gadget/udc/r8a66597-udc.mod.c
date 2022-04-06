#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc614c7f9, "module_layout" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0xe7627e01, "__platform_driver_probe" },
	{ 0xa2f26632, "usb_ep_clear_halt" },
	{ 0xd06c58bc, "usb_gadget_udc_reset" },
	{ 0xdd226fa9, "__raw_readsw" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0xde0ff11a, "usb_gadget_unmap_request" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x792f2fa0, "devm_clk_get" },
	{ 0xb81960ca, "snprintf" },
	{ 0xaaeab9d5, "platform_get_resource_byname" },
	{ 0x3cad28, "_dev_info" },
	{ 0x6e2eef47, "usb_add_gadget_udc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x71160775, "devm_ioremap_resource" },
	{ 0xc8a1a3d9, "platform_get_resource" },
	{ 0x676b9185, "usb_gadget_map_request" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaa5d0dae, "usb_del_gadget_udc" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdad97f94, "__raw_writesw" },
	{ 0xecf8a3b4, "__raw_writesl" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x945d354d, "usb_ep_set_halt" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

