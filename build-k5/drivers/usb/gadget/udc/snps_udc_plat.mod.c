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
	{ 0xa30102ec, "param_ops_bool" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0xb0221d29, "udc_basic_init" },
	{ 0xbf0d2c7e, "udc_enable_dev_setup_interrupts" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xdc2f03f2, "udc_probe" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
	{ 0x5d01d078, "udc_irq" },
	{ 0x38f8cf59, "init_dma_pools" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf0aad6b1, "extcon_register_notifier" },
	{ 0xfd8e83f1, "extcon_get_edev_by_phandle" },
	{ 0xf231a449, "of_get_property" },
	{ 0xce5554c7, "phy_power_on" },
	{ 0xd0f071a, "phy_init" },
	{ 0x7f54bb15, "devm_of_phy_get_by_index" },
	{ 0xf2304d7f, "irq_of_parse_and_map" },
	{ 0x71160775, "devm_ioremap_resource" },
	{ 0xc8a1a3d9, "platform_get_resource" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf19ddb25, "extcon_unregister_notifier" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xeec1b346, "udc_remove" },
	{ 0x9d927458, "free_dma_pools" },
	{ 0xaa5d0dae, "usb_del_gadget_udc" },
	{ 0x2b04ea6d, "phy_exit" },
	{ 0x7c58119, "phy_power_off" },
	{ 0xda85c14e, "extcon_get_state" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x3cad28, "_dev_info" },
	{ 0x61373b3e, "empty_req_queue" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x452a9e01, "udc_mask_unused_interrupts" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snps_udc_core";

MODULE_ALIAS("of:N*T*Cbrcm,ns2-udc");
MODULE_ALIAS("of:N*T*Cbrcm,ns2-udcC*");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-udc");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-udcC*");
MODULE_ALIAS("of:N*T*Cbrcm,iproc-udc");
MODULE_ALIAS("of:N*T*Cbrcm,iproc-udcC*");
