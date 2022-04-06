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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf6f306c3, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x4c3df14a, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x27a95846, "v4l2_event_queue" },
	{ 0xd67f659a, "v4l2_ctrl_log_status" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0x3bcbd24c, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xde88e1cf, "v4l2_ctrl_g_ctrl" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x54c890b9, "vb2_fop_poll" },
	{ 0x30a1314d, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x95736e5, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x374bef75, "__video_register_device" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0x5079edcc, "v4l2_device_register" },
	{ 0x3344e409, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0x28a1740a, "vb2_vmalloc_memops" },
	{ 0x7e78ccea, "snd_device_new" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xf8b7dae9, "vb2_fop_mmap" },
	{ 0x3acd9f1, "vb2_ioctl_qbuf" },
	{ 0x33c5201b, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0x76b30a6, "v4l2_ctrl_subscribe_event" },
	{ 0x5e8f6c9f, "vb2_plane_vaddr" },
	{ 0xe434b0df, "vb2_buffer_done" },
	{ 0xd0c854f6, "snd_card_free_when_closed" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x326041b4, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0x3cad28, "_dev_info" },
	{ 0x4705cbf8, "vb2_fop_release" },
	{ 0x347e9c17, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x843c5c75, "v4l2_ctrl_grab" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x748a711, "v4l2_fh_open" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xbebdbd2e, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xf2d5cf85, "vb2_ops_wait_finish" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xe64b92a1, "v4l2_i2c_new_subdev_board" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0x99bb8806, "memmove" },
	{ 0xff7866e3, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xfbea9657, "vb2_ioctl_streamoff" },
	{ 0x683300d4, "v4l2_device_put" },
	{ 0xbd1857b, "release_firmware" },
	{ 0xde44abc0, "video_ioctl2" },
	{ 0xb1636f78, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

