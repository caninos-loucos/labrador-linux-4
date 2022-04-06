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
	{ 0x4257fdf0, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf6f306c3, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7b020b9d, "i2c_mux_add_adapter" },
	{ 0x4c3df14a, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xbcd7ee6d, "videobuf_mmap_mapper" },
	{ 0x55851205, "v4l2_i2c_new_subdev" },
	{ 0xd67f659a, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xa6b40c64, "i2c_mux_del_adapters" },
	{ 0x1edb45ad, "usb_reset_endpoint" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0xe395e47e, "i2c_transfer" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xd16fcc4c, "__media_device_usb_init" },
	{ 0x92dd0bbd, "cx2341x_handler_set_50hz" },
	{ 0x258fdd05, "cx2341x_handler_init" },
	{ 0xebe454b5, "videobuf_queue_vmalloc_init" },
	{ 0x3e59c5ea, "v4l2_mc_create_media_graph" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x1d67811, "videobuf_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x374bef75, "__video_register_device" },
	{ 0x6c3264fd, "videobuf_iolock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf0d24b45, "media_entity_setup_link" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0xe6e562c8, "rc_allocate_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x96365041, "i2c_mux_alloc" },
	{ 0xc41d8142, "v4l2_s_ctrl" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9f8c36d2, "videobuf_qbuf" },
	{ 0x71c90087, "memcmp" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x21f2a6ef, "v4l2_fh_init" },
	{ 0x1eceee8, "v4l2_event_pending" },
	{ 0x76b30a6, "v4l2_ctrl_subscribe_event" },
	{ 0x4233348c, "videobuf_querybuf" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xec7fadad, "videobuf_read_stream" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xb00ec2d9, "i2c_unregister_device" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcdcabc41, "media_device_cleanup" },
	{ 0xe2152d9d, "media_device_register_entity" },
	{ 0xd63f2bf7, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xafd9380f, "cx2341x_handler_setup" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0xccf9e241, "usb_clear_halt" },
	{ 0x1b15c8ec, "videobuf_vmalloc_free" },
	{ 0xe9f43db4, "videobuf_to_vmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5fb3147, "videobuf_dqbuf" },
	{ 0xa8568021, "videobuf_queue_is_busy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1a476d1e, "i2c_transfer_buffer_flags" },
	{ 0xc4880891, "__media_device_register" },
	{ 0xc5d874c2, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x17988a9b, "videobuf_reqbufs" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x6c782fd8, "v4l2_fh_add" },
	{ 0x420f1986, "v4l2_fh_del" },
	{ 0xb79a0c96, "v4l2_ctrl_add_handler" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0xf143ff7f, "v4l2_ctrl_radio_filter" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x6c4f85be, "videobuf_read_stop" },
	{ 0x76bb0edb, "i2c_new_device" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xaadf4ef3, "media_device_unregister" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xbd1857b, "release_firmware" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0x876a2c45, "videobuf_poll_stream" },
	{ 0x8a87e12b, "v4l2_ctrl_poll" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x79083b5e, "v4l2_fh_exit" },
	{ 0x15c9f3e4, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,tveeprom,cx2341x,videobuf-vmalloc";

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E90B3570004A0E99A260FC4");
