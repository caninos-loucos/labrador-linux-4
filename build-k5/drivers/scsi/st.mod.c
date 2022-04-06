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
	{ 0x6cea701, "noop_llseek" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0xcdf24eed, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8eb3512b, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc0592b2b, "__class_register" },
	{ 0xc4a1cc2d, "scsi_ioctl" },
	{ 0xdc3b5622, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb1335583, "scsi_ioctl_block_when_processing_errors" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaf38e081, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x99bb8806, "memmove" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5f754e5a, "memset" },
	{ 0xd510b439, "flush_dcache_page" },
	{ 0xbe9c87aa, "get_user_pages_fast" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0x951c87f9, "page_address" },
	{ 0xba6138a4, "scsi_block_when_processing_errors" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdf473a0e, "__free_pages" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5332ed9a, "blk_put_request" },
	{ 0x886cf82f, "blk_rq_map_user" },
	{ 0x5a9e8ef5, "blk_execute_rq_nowait" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xa1c9e3b4, "blk_get_request" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8749b57c, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x712743b2, "__put_page" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b04e5e5, "__blk_put_request" },
	{ 0xa01d2e84, "blk_rq_unmap_user" },
	{ 0xe6c12171, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3452aeef, "scsi_set_medium_removal" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x32e6b353, "put_disk" },
	{ 0xcecaeab7, "blk_put_queue" },
	{ 0x61275678, "idr_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x665950f6, "scsi_autopm_put_device" },
	{ 0x157500f7, "sysfs_create_link" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x518c41a8, "blk_queue_rq_timeout" },
	{ 0xada43c47, "blk_get_queue" },
	{ 0x1fcc2405, "__alloc_disk_node" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xcf3fdb77, "scsi_autopm_get_device" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa36da8fd, "device_create" },
	{ 0x235c3adf, "cdev_add" },
	{ 0xc66b5032, "cdev_alloc" },
	{ 0xb81960ca, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0x594b40c7, "cdev_del" },
	{ 0x66fd3e05, "sysfs_remove_link" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

