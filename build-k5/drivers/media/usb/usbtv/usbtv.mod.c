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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4c3df14a, "video_device_release_empty" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0x689db648, "_snd_pcm_stream_lock_irqsave" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x54c890b9, "vb2_fop_poll" },
	{ 0x30a1314d, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x95736e5, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x374bef75, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0x3344e409, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa11c8d64, "v4l2_device_disconnect" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x28a1740a, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xf8b7dae9, "vb2_fop_mmap" },
	{ 0x3acd9f1, "vb2_ioctl_qbuf" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x5e8f6c9f, "vb2_plane_vaddr" },
	{ 0xe434b0df, "vb2_buffer_done" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x788f8173, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x3f470fcb, "vb2_ioctl_prepare_buf" },
	{ 0x9bd6fe9f, "snd_pcm_lib_free_pages" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0x51a87b3c, "vb2_ioctl_create_bufs" },
	{ 0x326041b4, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa777249d, "snd_pcm_lib_malloc_pages" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0x4705cbf8, "vb2_fop_release" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xccf9e241, "usb_clear_halt" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x748a711, "v4l2_fh_open" },
	{ 0xbebdbd2e, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xf2d5cf85, "vb2_ops_wait_finish" },
	{ 0xef9fae2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xfbea9657, "vb2_ioctl_streamoff" },
	{ 0xffe49597, "vb2_queue_release" },
	{ 0x683300d4, "v4l2_device_put" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xb1636f78, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3306d*dc*dsc*dp*ic*isc*ip*in*");
