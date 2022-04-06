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
	{ 0xed9caf03, "gspca_suspend" },
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xa6eed98, "gspca_dev_probe" },
	{ 0x748a4297, "gspca_resume" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x70f7d410, "gspca_disconnect" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1161fec8, "kthread_stop" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x954dad06, "v4l2_ctrl_auto_cluster" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x5f517289, "gspca_frame_add" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v0402p5602d*dc*dsc*dp*ic*isc*ip*in*");
