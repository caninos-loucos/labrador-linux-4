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
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x2200cc31, "v4l2_ctrl_subdev_log_status" },
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3e748aca, "au8522_readreg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8872ac9d, "au8522_writereg" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0x57679fcb, "v4l2_i2c_subdev_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x92d02cb5, "au8522_get_state" },
	{ 0xad619cd3, "au8522_release_state" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x3b1133f7, "v4l2_device_unregister_subdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";

MODULE_ALIAS("i2c:au8522");
