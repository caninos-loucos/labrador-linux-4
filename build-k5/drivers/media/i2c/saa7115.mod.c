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
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x954dad06, "v4l2_ctrl_auto_cluster" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0x57679fcb, "v4l2_i2c_subdev_init" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x5a5b6aac, "v4l2_ctrl_handler_log_status" },
	{ 0xd54d7ac, "i2c_smbus_read_byte_data" },
	{ 0x71c90087, "memcmp" },
	{ 0x7c32d0f0, "printk" },
	{ 0x67d1c3f8, "i2c_smbus_write_byte_data" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x3b1133f7, "v4l2_device_unregister_subdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:saa7115_auto");
MODULE_ALIAS("i2c:saa7111");
MODULE_ALIAS("i2c:saa7113");
MODULE_ALIAS("i2c:saa7114");
MODULE_ALIAS("i2c:saa7115");
MODULE_ALIAS("i2c:saa7118");
MODULE_ALIAS("i2c:gm7113c");
