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
	{ 0xf6f306c3, "v4l2_event_unsubscribe" },
	{ 0x76b30a6, "v4l2_ctrl_subscribe_event" },
	{ 0xd67f659a, "v4l2_ctrl_log_status" },
	{ 0xfbea9657, "vb2_ioctl_streamoff" },
	{ 0x30a1314d, "vb2_ioctl_streamon" },
	{ 0x326041b4, "vb2_ioctl_dqbuf" },
	{ 0x3acd9f1, "vb2_ioctl_qbuf" },
	{ 0xbebdbd2e, "vb2_ioctl_querybuf" },
	{ 0xc5007ba0, "vb2_ioctl_reqbufs" },
	{ 0x4705cbf8, "vb2_fop_release" },
	{ 0xf8b7dae9, "vb2_fop_mmap" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0x54c890b9, "vb2_fop_poll" },
	{ 0x3344e409, "vb2_fop_read" },
	{ 0xf2d5cf85, "vb2_ops_wait_finish" },
	{ 0x95736e5, "vb2_ops_wait_prepare" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x374bef75, "__video_register_device" },
	{ 0xb1636f78, "vb2_queue_init" },
	{ 0x28a1740a, "vb2_vmalloc_memops" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xcb29a101, "request_firmware" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0xa11c8d64, "v4l2_device_disconnect" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x999e8297, "vfree" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x748a711, "v4l2_fh_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3cad28, "_dev_info" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9f8c16c3, "__v4l2_ctrl_s_ctrl" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xe434b0df, "vb2_buffer_done" },
	{ 0x5e8f6c9f, "vb2_plane_vaddr" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7E178598ACEE997D6C054C4");
