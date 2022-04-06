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
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x20dc9c4b, "usb_lock_device_for_reset" },
	{ 0xa12dd9d4, "scsi_remove_host" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x704da50c, "scsi_host_put" },
	{ 0xc35ece1e, "scsi_scan_host" },
	{ 0xe4c80508, "scsi_add_host_with_dma" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xe8c2fa42, "scsi_host_alloc" },
	{ 0x3ce9e991, "usb_stor_adjust_quirks" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x87feafd5, "scsi_cmd_get_serial" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9d669763, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xf8842806, "blk_queue_max_hw_sectors" },
	{ 0xb072884e, "blk_queue_update_dma_alignment" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x2ef1d279, "usb_get_urb" },
	{ 0x3f0e7b94, "scsi_change_queue_depth" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xc958e131, "scsi_print_command" },
	{ 0x84d6ebc7, "scmd_printk" },
	{ 0x6cc60c17, "scsi_block_requests" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x92b57248, "flush_work" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xaa23dd87, "scsi_unblock_requests" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xb1808239, "scsi_report_bus_reset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x72f45a67, "usb_alloc_streams" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xde6feb2e, "usb_free_streams" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,usb-storage";

MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");
