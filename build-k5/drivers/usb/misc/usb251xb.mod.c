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
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x97255bdf, "strlen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0xcbf0bc36, "of_property_read_variable_u32_array" },
	{ 0xe78e76a, "of_property_read_variable_u16_array" },
	{ 0x5d160f2, "devm_gpiod_get_optional" },
	{ 0xf231a449, "of_get_property" },
	{ 0x90d9311a, "of_match_device" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x725f6728, "i2c_smbus_write_i2c_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x54924b08, "gpiod_set_value_cansleep" },
	{ 0x3cad28, "_dev_info" },
	{ 0x5f754e5a, "memset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:usb2512b");
MODULE_ALIAS("i2c:usb2512bi");
MODULE_ALIAS("i2c:usb2513b");
MODULE_ALIAS("i2c:usb2513bi");
MODULE_ALIAS("i2c:usb2514b");
MODULE_ALIAS("i2c:usb2514bi");
MODULE_ALIAS("i2c:usb2517");
MODULE_ALIAS("i2c:usb2517i");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2512b");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2512bC*");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2512bi");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2512biC*");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2513b");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2513bC*");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2513bi");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2513biC*");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2514b");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2514bC*");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2514bi");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2514biC*");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2517");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2517C*");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2517i");
MODULE_ALIAS("of:N*T*Cmicrochip,usb2517iC*");
