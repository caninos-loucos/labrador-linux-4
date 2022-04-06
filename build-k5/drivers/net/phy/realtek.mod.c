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
	{ 0x39ffee74, "genphy_write_mmd_unsupported" },
	{ 0x9a955c58, "genphy_read_mmd_unsupported" },
	{ 0x41a571b1, "phy_drivers_unregister" },
	{ 0x2eaf884a, "phy_drivers_register" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x3cad28, "_dev_info" },
	{ 0x416b8c3c, "__mdiobus_read" },
	{ 0x89d2c992, "__mdiobus_write" },
	{ 0xa2ce7ad3, "genphy_config_aneg" },
	{ 0xa5be9e85, "mdiobus_read" },
	{ 0x685caa80, "genphy_resume" },
	{ 0x30dca81c, "genphy_suspend" },
	{ 0x6a294637, "mdiobus_write" },
	{ 0x652e78bb, "phy_modify_paged" },
	{ 0xa3a72b7d, "phy_read_paged" },
	{ 0xa0143a67, "phy_write_paged" },
	{ 0x68aabb70, "genphy_config_init" },
	{ 0x8fa84934, "phy_modify" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:???????????111001100100000010110");
MODULE_ALIAS("mdio:???????????111001100100100010000");
MODULE_ALIAS("mdio:???????????111001100100100010010");
MODULE_ALIAS("mdio:???????????111001100100100010011");
MODULE_ALIAS("mdio:???????????111001100100100010100");
MODULE_ALIAS("mdio:???????????111001100100100010101");
MODULE_ALIAS("mdio:???????????111001100100100010110");
MODULE_ALIAS("mdio:???????????111001100100101100001");
