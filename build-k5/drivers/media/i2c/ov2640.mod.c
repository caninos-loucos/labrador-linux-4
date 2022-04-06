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
	{ 0x827ff57b, "__v4l2_ctrl_handler_setup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84f7d659, "v4l2_async_register_subdev" },
	{ 0x3cad28, "_dev_info" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xd54d7ac, "i2c_smbus_read_byte_data" },
	{ 0x67d1c3f8, "i2c_smbus_write_byte_data" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x57679fcb, "v4l2_i2c_subdev_init" },
	{ 0x5d160f2, "devm_gpiod_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x792f2fa0, "devm_clk_get" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5ed40c64, "gpiod_set_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0x74b49675, "gpiod_direction_output" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3b1133f7, "v4l2_device_unregister_subdev" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xbf511952, "v4l2_async_unregister_subdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Covti,ov2640");
MODULE_ALIAS("of:N*T*Covti,ov2640C*");
MODULE_ALIAS("i2c:ov2640");
