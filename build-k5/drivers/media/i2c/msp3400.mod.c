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
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xe395e47e, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x129f81c2, "freezing_slow_path" },
	{ 0x1161fec8, "kthread_stop" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x3b1133f7, "v4l2_device_unregister_subdev" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0x3cad28, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x5a5b6aac, "v4l2_ctrl_handler_log_status" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1a476d1e, "i2c_transfer_buffer_flags" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x57679fcb, "v4l2_i2c_subdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:msp3400");
