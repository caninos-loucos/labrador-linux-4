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
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0x3cad28, "_dev_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc817568b, "devm_gpiod_get" },
	{ 0x30c98de6, "usb_get_phy" },
	{ 0xb174334b, "gpio_to_desc" },
	{ 0x9cd8b1ce, "devm_gpio_request_one" },
	{ 0x6e2eef47, "usb_add_gadget_udc" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x792f2fa0, "devm_clk_get" },
	{ 0x74b49675, "gpiod_direction_output" },
	{ 0x699a7b9, "devm_usb_get_phy_by_phandle" },
	{ 0xb8521904, "of_root" },
	{ 0x1174f419, "platform_get_irq" },
	{ 0x71160775, "devm_ioremap_resource" },
	{ 0xc8a1a3d9, "platform_get_resource" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb0a0e3ed, "usb_phy_set_charger_current" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x37a0cba, "kfree" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc335eb3, "usb_put_phy" },
	{ 0x6122337, "atomic_notifier_chain_unregister" },
	{ 0xaa5d0dae, "usb_del_gadget_udc" },
	{ 0x9ef197d1, "usb_gadget_vbus_disconnect" },
	{ 0x191a9351, "usb_gadget_vbus_connect" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5ed40c64, "gpiod_set_value" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmarvell,pxa270-udc");
MODULE_ALIAS("of:N*T*Cmarvell,pxa270-udcC*");
