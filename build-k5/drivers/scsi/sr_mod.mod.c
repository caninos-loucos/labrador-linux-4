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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x518c41a8, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x28ed55b3, "cdrom_number_of_slots" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xb1335583, "scsi_ioctl_block_when_processing_errors" },
	{ 0xc3eb3cb9, "unregister_cdrom" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x99f6f9d5, "blk_dump_rq_flags" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x84d6ebc7, "scmd_printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa215a5da, "cdrom_open" },
	{ 0x91715312, "sprintf" },
	{ 0xcf3fdb77, "scsi_autopm_get_device" },
	{ 0x1fcc2405, "__alloc_disk_node" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xeb280084, "check_disk_change" },
	{ 0xb3869e5e, "cdrom_release" },
	{ 0x40d3f54a, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x9407888d, "__scsi_execute" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xac26081f, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xedf9054a, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x3aed9d66, "cdrom_get_last_written" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc4a1cc2d, "scsi_ioctl" },
	{ 0x32e6b353, "put_disk" },
	{ 0x8eb3512b, "scsi_register_driver" },
	{ 0xba6138a4, "scsi_block_when_processing_errors" },
	{ 0xc393ab26, "scsi_test_unit_ready" },
	{ 0x41a492bf, "scsi_init_io" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd98a3d7, "cdrom_ioctl" },
	{ 0xb9b8646b, "blk_pm_runtime_init" },
	{ 0xe918b9fd, "register_cdrom" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb69c9776, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0x665950f6, "scsi_autopm_put_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1c5329b6, "blk_queue_logical_block_size" },
	{ 0x4fa1326b, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,cdrom";

