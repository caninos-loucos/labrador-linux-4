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
	{ 0x63a49532, "device_remove_file" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf6f306c3, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4c3df14a, "video_device_release_empty" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x55851205, "v4l2_i2c_new_subdev" },
	{ 0xd67f659a, "v4l2_ctrl_log_status" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xde88e1cf, "v4l2_ctrl_g_ctrl" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x374bef75, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa11c8d64, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x76b30a6, "v4l2_ctrl_subscribe_event" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1d3bc10c, "v4l2_fh_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcd46f1c7, "vm_insert_page" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x2f426a63, "v4l2_ctrl_find" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xb227f833, "v4l2_i2c_subdev_addr" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x748a711, "v4l2_fh_open" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xff7866e3, "vmalloc_to_page" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0x8a87e12b, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A6Fp0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0571p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D26d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D34d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D36d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D37d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0768p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07F8p9104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0214d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0419d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2400p4200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B577932BB0AAB5E6FBF7C13");
