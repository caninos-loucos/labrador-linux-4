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
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f0e7b94, "scsi_change_queue_depth" },
	{ 0xff9cf214, "sas_remove_children" },
	{ 0x938f99c5, "sg_copy_to_buffer" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7a9c08b7, "blk_abort_request" },
	{ 0x6cc60c17, "scsi_block_requests" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x2d6cd937, "sas_port_free" },
	{ 0x6039b599, "sg_copy_from_buffer" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xe4c45412, "sas_phy_add" },
	{ 0xaa23dd87, "scsi_unblock_requests" },
	{ 0x5c1ac9e7, "sas_port_add_phy" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa4f838c2, "sas_rphy_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2bfc0c0e, "sas_port_delete_phy" },
	{ 0x39a002bb, "sas_rphy_add" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x55fbe219, "sas_port_delete" },
	{ 0x5a1c81a5, "scsi_host_busy" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa344686d, "sas_attach_transport" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0xbbc1a338, "sas_rphy_delete" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x927fedb8, "sas_expander_alloc" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7272b55e, "sas_read_port_mode_page" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x676508ae, "sas_end_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xd8203492, "kmem_cache_free" },
	{ 0x8df9c7f2, "sas_port_mark_backlink" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f39779a, "sas_port_add" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf811e69d, "scsi_eh_flush_done_q" },
	{ 0x914e2bb1, "scsi_eh_finish_cmd" },
	{ 0xc81fce5b, "sas_phy_free" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb9e5e042, "kmem_cache_alloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x38c9845a, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9e4ce9fb, "sas_phy_alloc" },
	{ 0x86ccf98c, "hex2bin" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3fcb38d6, "get_device" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0x26c90ea4, "scsi_eh_get_sense" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xe7100bcd, "sas_port_get_phy" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x14f37880, "scsi_eh_ready_devs" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xc1b12dff, "sas_port_alloc" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x30a47a28, "scsi_schedule_eh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8ab9a800, "sas_rphy_unlink" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xfb36d70c, "bsg_job_done" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc96ded54, "sas_rphy_remove" },
	{ 0xbd1857b, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_sas";

