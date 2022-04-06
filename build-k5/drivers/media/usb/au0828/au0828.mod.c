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
	{ 0xc5007ba0, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf6f306c3, "v4l2_event_unsubscribe" },
	{ 0x13142d50, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf53baee2, "__media_pipeline_start" },
	{ 0xfc5213cb, "media_device_unregister_entity_notify" },
	{ 0x79b2952f, "_vb2_fop_release" },
	{ 0x4c3df14a, "video_device_release_empty" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x8087faee, "dvb_unregister_adapter" },
	{ 0xfd873e17, "media_device_unregister_entity" },
	{ 0x55851205, "v4l2_i2c_new_subdev" },
	{ 0xd67f659a, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x69db6ba5, "dvb_frontend_suspend" },
	{ 0xb58755e6, "dvb_register_frontend" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0x9d4a42f, "dvb_frontend_resume" },
	{ 0xe395e47e, "i2c_transfer" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xd16fcc4c, "__media_device_usb_init" },
	{ 0x54c890b9, "vb2_fop_poll" },
	{ 0x3e59c5ea, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x30a1314d, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x26db4fa1, "v4l_disable_media_source" },
	{ 0x95736e5, "vb2_ops_wait_prepare" },
	{ 0xced3ee0, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x374bef75, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf0d24b45, "media_entity_setup_link" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0xe6e562c8, "rc_allocate_device" },
	{ 0xaedbba57, "dvb_net_release" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0xb7833ccf, "dvb_frontend_detach" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0x3344e409, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa11c8d64, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x28a1740a, "vb2_vmalloc_memops" },
	{ 0xb36b25b5, "rc_free_device" },
	{ 0xf2b67b10, "param_ops_short" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xf8b7dae9, "vb2_fop_mmap" },
	{ 0x3acd9f1, "vb2_ioctl_qbuf" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xcf472cca, "dvb_dmxdev_release" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0xdd82e3ac, "dvb_net_init" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x76b30a6, "v4l2_ctrl_subscribe_event" },
	{ 0x5e8f6c9f, "vb2_plane_vaddr" },
	{ 0xe434b0df, "vb2_buffer_done" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xae5c589, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3f470fcb, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc04b4707, "tveeprom_read" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x51a87b3c, "vb2_ioctl_create_bufs" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x326041b4, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xecc64ee3, "v4l_enable_media_source" },
	{ 0xcdcabc41, "media_device_cleanup" },
	{ 0xe2152d9d, "media_device_register_entity" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x19d5abf8, "media_device_register_entity_notify" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6558013b, "__media_pipeline_stop" },
	{ 0x76f340f, "media_create_pad_link" },
	{ 0x98ffa8ef, "dvb_register_adapter" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x748a711, "v4l2_fh_open" },
	{ 0x1a476d1e, "i2c_transfer_buffer_flags" },
	{ 0xbebdbd2e, "vb2_ioctl_querybuf" },
	{ 0xc4880891, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xe193423d, "__media_entity_setup_link" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xf2d5cf85, "vb2_ops_wait_finish" },
	{ 0x5017dc34, "ir_raw_event_store" },
	{ 0x5c6e85a, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x462b592c, "vb2_ioctl_expbuf" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfbea9657, "vb2_ioctl_streamoff" },
	{ 0xffe49597, "vb2_queue_release" },
	{ 0x683300d4, "v4l2_device_put" },
	{ 0xa217919e, "ir_raw_event_handle" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xaadf4ef3, "media_device_unregister" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe2b4365f, "dvb_dmxdev_init" },
	{ 0xb1636f78, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tveeprom";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6E2D901B73099B0CBAEE480");
