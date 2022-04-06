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
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x5953560a, "acts_fsldma_external_start0" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x1700a495, "sg_alloc_table" },
	{ 0x5f754e5a, "memset" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xc2fbef76, "spi_unregister_controller" },
	{ 0x25ffd148, "module_clk_disable" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x38c9845a, "put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfee96aed, "spi_register_controller" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xbe675a5e, "__dma_request_channel" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4f3f9783, "module_reset" },
	{ 0x5c8e8e65, "module_clk_enable" },
	{ 0x56339f39, "clk_get" },
	{ 0xa6cc5e07, "gpiod_direction_output_raw" },
	{ 0xfef19c4b, "devm_gpio_request" },
	{ 0x97ba944f, "of_get_named_gpio_flags" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x3cad28, "_dev_info" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xc8a1a3d9, "platform_get_resource" },
	{ 0x1174f419, "platform_get_irq" },
	{ 0x7b01ca16, "of_alias_get_id" },
	{ 0xae0f6ccf, "__spi_alloc_controller" },
	{ 0xa5be3231, "of_match_node" },
	{ 0xaa555227, "dma_release_channel" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x7a7231b0, "arm_dma_ops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xff7866e3, "vmalloc_to_page" },
	{ 0xfffa3100, "sg_next" },
	{ 0x8752b44d, "mem_map" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xe6c12171, "complete" },
	{ 0x808f53e1, "gpiod_set_raw_value" },
	{ 0xb174334b, "gpio_to_desc" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ccaninos,caninos-spi");
MODULE_ALIAS("of:N*T*Ccaninos,caninos-spiC*");
