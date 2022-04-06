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
	{ 0x3452aeef, "scsi_set_medium_removal" },
	{ 0x53326531, "mempool_alloc_pages" },
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x518c41a8, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11a9dddd, "t10_pi_type1_ip" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x951c87f9, "page_address" },
	{ 0x4dbf6cd8, "t10_pi_prepare" },
	{ 0xb1335583, "scsi_ioctl_block_when_processing_errors" },
	{ 0xebdea06d, "blk_mq_unfreeze_queue" },
	{ 0x34d2b82e, "blk_queue_io_min" },
	{ 0xf6d707a0, "mempool_destroy" },
	{ 0x51267ed0, "scsi_mode_select" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x84d6ebc7, "scmd_printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbd8de498, "blk_mq_freeze_queue" },
	{ 0x7f9c1e8, "blk_queue_max_write_zeroes_sectors" },
	{ 0xdb913b73, "blk_queue_alignment_offset" },
	{ 0x91715312, "sprintf" },
	{ 0xa4a13436, "revalidate_disk" },
	{ 0xf9276f34, "scsi_cmd_blk_ioctl" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcf3fdb77, "scsi_autopm_get_device" },
	{ 0x1fcc2405, "__alloc_disk_node" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x26483214, "device_del" },
	{ 0xeb280084, "check_disk_change" },
	{ 0x7c32d0f0, "printk" },
	{ 0x59a3002f, "blk_queue_max_discard_sectors" },
	{ 0x40d3f54a, "del_gendisk" },
	{ 0xcdf24eed, "class_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x9407888d, "__scsi_execute" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0x21af32f7, "ida_free" },
	{ 0x10d12086, "blk_register_region" },
	{ 0xabc0c31f, "scsi_report_opcode" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x2258cabf, "t10_pi_complete" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2ea111e, "scsi_driverbyte_string" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x48a91171, "string_get_size" },
	{ 0x5694be65, "device_add" },
	{ 0xc0592b2b, "__class_register" },
	{ 0xcaf2c603, "scsi_sd_pm_domain" },
	{ 0x6b698ebd, "t10_pi_type3_ip" },
	{ 0x5d550c4d, "scsi_sd_probe_domain" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xebba4136, "t10_pi_type3_crc" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x3d573a2e, "async_schedule_domain" },
	{ 0x890d129f, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xf1364d9d, "blk_queue_flag_set" },
	{ 0x38c9845a, "put_device" },
	{ 0x27c23c38, "blk_queue_physical_block_size" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x23bd2420, "scsi_verify_blk_ioctl" },
	{ 0xc4a1cc2d, "scsi_ioctl" },
	{ 0x32e6b353, "put_disk" },
	{ 0xe1422a46, "mempool_create" },
	{ 0x8eb3512b, "scsi_register_driver" },
	{ 0xba6138a4, "scsi_block_when_processing_errors" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xc393ab26, "scsi_test_unit_ready" },
	{ 0x92159c8b, "scsi_device_set_state" },
	{ 0x41a492bf, "scsi_init_io" },
	{ 0xb3d2c76d, "scsi_hostbyte_string" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x278606ec, "mempool_free" },
	{ 0x789b0648, "scsi_command_normalize_sense" },
	{ 0x3fcb38d6, "get_device" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0xbbfca5db, "scsicam_bios_param" },
	{ 0x9271cad3, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xa672e03d, "t10_pi_type1_crc" },
	{ 0xd7019203, "device_initialize" },
	{ 0x7b0bf519, "scsi_get_vpd_page" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x15af7f4, "system_state" },
	{ 0xb9b8646b, "blk_pm_runtime_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb69c9776, "device_add_disk" },
	{ 0x99bb8806, "memmove" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0x665950f6, "scsi_autopm_put_device" },
	{ 0x1c5329b6, "blk_queue_logical_block_size" },
	{ 0x4fa1326b, "scsi_mode_sense" },
	{ 0x2fea1622, "blk_queue_max_write_same_sectors" },
	{ 0xc2daa284, "blk_integrity_register" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x5c3a141d, "scsi_print_sense_hdr" },
	{ 0xeaa09a82, "set_disk_ro" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

