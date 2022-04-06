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
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb88821d1, "usb_add_phy_dev" },
	{ 0x4303eb4, "device_set_wakeup_enable" },
	{ 0x78703483, "device_init_wakeup" },
	{ 0xf0fdaf90, "usb_phy_gen_create_phy" },
	{ 0xbebbc9f8, "of_usb_get_dr_mode_by_phy" },
	{ 0x7b01ca16, "of_alias_get_id" },
	{ 0x37b5c50d, "am335x_get_phy_control" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x3f0aa8a1, "usb_remove_phy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=phy-generic,phy-am335x-control";

MODULE_ALIAS("of:N*T*Cti,am335x-usb-phy");
MODULE_ALIAS("of:N*T*Cti,am335x-usb-phyC*");
