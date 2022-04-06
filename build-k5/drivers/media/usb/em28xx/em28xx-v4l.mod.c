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
	{ 0xae053585, "em28xx_read_reg" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf6f306c3, "v4l2_event_unsubscribe" },
	{ 0x4c3df14a, "video_device_release_empty" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xfd873e17, "media_device_unregister_entity" },
	{ 0x55851205, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x3641fd60, "em28xx_write_regs" },
	{ 0xcfb25f18, "v4l2_ctrl_notify" },
	{ 0x50e1de46, "em28xx_setup_xc3028" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x54c890b9, "vb2_fop_poll" },
	{ 0x3e59c5ea, "v4l2_mc_create_media_graph" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x30a1314d, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x95736e5, "vb2_ops_wait_prepare" },
	{ 0x835b7fe8, "em28xx_init_usb_xfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x374bef75, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x764cc9ce, "em28xx_register_extension" },
	{ 0xf0d24b45, "media_entity_setup_link" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0x3344e409, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa11c8d64, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x28a1740a, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xf8b7dae9, "vb2_fop_mmap" },
	{ 0x3acd9f1, "vb2_ioctl_qbuf" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xebe1667a, "video_unregister_device" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x76b30a6, "v4l2_ctrl_subscribe_event" },
	{ 0x5e8f6c9f, "vb2_plane_vaddr" },
	{ 0xe434b0df, "vb2_buffer_done" },
	{ 0xa622424d, "em28xx_unregister_extension" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3f470fcb, "vb2_ioctl_prepare_buf" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xb815c3f9, "em28xx_uninit_usb_xfer" },
	{ 0x51a87b3c, "vb2_ioctl_create_bufs" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x326041b4, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe2152d9d, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x3cad28, "_dev_info" },
	{ 0x2f426a63, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4705cbf8, "vb2_fop_release" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1c20efe1, "em28xx_audio_setup" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xb227f833, "v4l2_i2c_subdev_addr" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x748a711, "v4l2_fh_open" },
	{ 0xdd3d6181, "em28xx_set_mode" },
	{ 0xbebdbd2e, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xf2d5cf85, "vb2_ops_wait_finish" },
	{ 0x9b69ea19, "em28xx_stop_urbs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x36e34964, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x45f109d0, "em28xx_audio_analog_set" },
	{ 0xfbea9657, "vb2_ioctl_streamoff" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0x1d1b04a4, "em28xx_boards" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeb355c3f, "em28xx_init_camera" },
	{ 0xb1636f78, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "D3C49AE5B85C493509C4391");
