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
	{ 0xeb133d96, "driver_remove_file" },
	{ 0x52ecd6fd, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0xc3963b6d, "driver_create_file" },
	{ 0x8eb3512b, "scsi_register_driver" },
	{ 0xf724d33e, "__register_chrdev" },
	{ 0xf1958b66, "__class_create" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc4a1cc2d, "scsi_ioctl" },
	{ 0xb1335583, "scsi_ioctl_block_when_processing_errors" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xba6138a4, "scsi_block_when_processing_errors" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x3452aeef, "scsi_set_medium_removal" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4cce30a, "blk_rq_map_kern" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5a9e8ef5, "blk_execute_rq_nowait" },
	{ 0x5332ed9a, "blk_put_request" },
	{ 0x886cf82f, "blk_rq_map_user" },
	{ 0xfffa3100, "sg_next" },
	{ 0xa1c9e3b4, "blk_get_request" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c1372e8, "panic" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91715312, "sprintf" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x1fcc2405, "__alloc_disk_node" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x3b04e5e5, "__blk_put_request" },
	{ 0xa01d2e84, "blk_rq_unmap_user" },
	{ 0xe6c12171, "complete" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x951c87f9, "page_address" },
	{ 0x8749b57c, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0xa36da8fd, "device_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x32e6b353, "put_disk" },
	{ 0xb2062b2f, "device_destroy" },
	{ 0x4489be9a, "_raw_write_unlock" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xdf473a0e, "__free_pages" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

