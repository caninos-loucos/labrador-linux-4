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
	{ 0xde44abc0, "video_ioctl2" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xc86c35f5, "videobuf_read_one" },
	{ 0x1d67811, "videobuf_streamon" },
	{ 0xa8568021, "videobuf_queue_is_busy" },
	{ 0x1d3bc10c, "v4l2_fh_release" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1b15c8ec, "videobuf_vmalloc_free" },
	{ 0x6c3264fd, "videobuf_iolock" },
	{ 0x374bef75, "__video_register_device" },
	{ 0xebe454b5, "videobuf_queue_vmalloc_init" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4c3df14a, "video_device_release_empty" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x999e8297, "vfree" },
	{ 0x4257fdf0, "videobuf_mmap_free" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0x876a2c45, "videobuf_poll_stream" },
	{ 0x8a87e12b, "v4l2_ctrl_poll" },
	{ 0xbcd7ee6d, "videobuf_mmap_mapper" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x748a711, "v4l2_fh_open" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x17988a9b, "videobuf_reqbufs" },
	{ 0x4233348c, "videobuf_querybuf" },
	{ 0x9f8c36d2, "videobuf_qbuf" },
	{ 0x5fb3147, "videobuf_dqbuf" },
	{ 0x15c9f3e4, "videobuf_streamoff" },
	{ 0x347e9c17, "video_devdata" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x683300d4, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa11c8d64, "v4l2_device_disconnect" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe9f43db4, "videobuf_to_vmalloc" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3cad28, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf-vmalloc";

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E0EFD954B1151C5612098B");
