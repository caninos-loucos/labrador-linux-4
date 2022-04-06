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
	{ 0xc8ea0d60, "no_llseek" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x7fe970fd, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x52ecd6fd, "class_destroy" },
	{ 0xd1e1654e, "scsi_register_interface" },
	{ 0xf1958b66, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x5f1e4295, "sg_scsi_ioctl" },
	{ 0x51f7a61c, "_raw_write_unlock_irq" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xa723ed16, "blk_trace_remove" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7f34358c, "blk_trace_startstop" },
	{ 0xb3af5cd6, "blk_trace_setup" },
	{ 0xc4a1cc2d, "scsi_ioctl" },
	{ 0xb1335583, "scsi_ioctl_block_when_processing_errors" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xf5eb86ea, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6047c12, "blk_end_request_all" },
	{ 0xa97d2dbc, "blk_rq_map_user_iov" },
	{ 0x839a64ee, "import_iovec" },
	{ 0x5a9e8ef5, "blk_execute_rq_nowait" },
	{ 0x886cf82f, "blk_rq_map_user" },
	{ 0xa1c9e3b4, "blk_get_request" },
	{ 0x5db1c990, "__module_get" },
	{ 0xba6138a4, "scsi_block_when_processing_errors" },
	{ 0xcf3fdb77, "scsi_autopm_get_device" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaf38e081, "idr_find" },
	{ 0x39869399, "nonseekable_open" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x951c87f9, "page_address" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x157500f7, "sysfs_create_link" },
	{ 0xa36da8fd, "device_create" },
	{ 0x235c3adf, "cdev_add" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91715312, "sprintf" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xc66b5032, "cdev_alloc" },
	{ 0x1fcc2405, "__alloc_disk_node" },
	{ 0x8aa1a25a, "__task_pid_nr_ns" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8749b57c, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b04e5e5, "__blk_put_request" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0x665950f6, "scsi_autopm_put_device" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf13ced, "module_put" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5332ed9a, "blk_put_request" },
	{ 0xa01d2e84, "blk_rq_unmap_user" },
	{ 0xdf473a0e, "__free_pages" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x52183b7d, "fasync_helper" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x594b40c7, "cdev_del" },
	{ 0xb2062b2f, "device_destroy" },
	{ 0x66fd3e05, "sysfs_remove_link" },
	{ 0x676bde77, "kill_fasync" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x32e6b353, "put_disk" },
	{ 0x61275678, "idr_remove" },
	{ 0xb40d7cf, "_raw_read_unlock_irqrestore" },
	{ 0x630f2cb8, "_raw_read_lock_irqsave" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x8752b44d, "mem_map" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "44A2233ABD6EFC17061FE20");
