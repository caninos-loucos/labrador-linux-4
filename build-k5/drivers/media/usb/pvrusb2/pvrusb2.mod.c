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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x63a49532, "device_remove_file" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x8087faee, "dvb_unregister_adapter" },
	{ 0x97255bdf, "strlen" },
	{ 0x55851205, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xb58755e6, "dvb_register_frontend" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0xe395e47e, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xced3ee0, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x374bef75, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0xaedbba57, "dvb_net_release" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xb7833ccf, "dvb_frontend_detach" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa11c8d64, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xc41d8142, "v4l2_s_ctrl" },
	{ 0xf2b67b10, "param_ops_short" },
	{ 0xc2e3b2a2, "device_register" },
	{ 0x20dc9c4b, "usb_lock_device_for_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0x129f81c2, "freezing_slow_path" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xcf472cca, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1161fec8, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xcdf24eed, "class_unregister" },
	{ 0xdd82e3ac, "dvb_net_init" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x21f2a6ef, "v4l2_fh_init" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x94a2b76e, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc0592b2b, "__class_register" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7aa1a55c, "usb_urb_ep_type_check" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x38c9845a, "put_device" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xccf9e241, "usb_clear_halt" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0x98ffa8ef, "dvb_register_adapter" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3fcb38d6, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6c782fd8, "v4l2_fh_add" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0x420f1986, "v4l2_fh_del" },
	{ 0xa20fee2, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x76bb0edb, "i2c_new_device" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xbd1857b, "release_firmware" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe2b4365f, "dvb_dmxdev_init" },
	{ 0x79083b5e, "v4l2_fh_exit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tveeprom,cx2341x";

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0191A2644D2BF422A8B77BD");
