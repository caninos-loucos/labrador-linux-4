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
	{ 0x2d3385d3, "system_wq" },
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f0e7b94, "scsi_change_queue_depth" },
	{ 0x938f99c5, "sg_copy_to_buffer" },
	{ 0xe8c2fa42, "scsi_host_alloc" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xcc4378ee, "scsi_is_fc_rport" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf6d707a0, "mempool_destroy" },
	{ 0xfffa3100, "sg_next" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xda78b63e, "init_uts_ns" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdf13ced, "module_put" },
	{ 0xfa0e4b2d, "fc_host_post_event" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xedb47436, "fc_remote_port_delete" },
	{ 0x9aa9b648, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xe1422a46, "mempool_create" },
	{ 0xd3c12748, "fc_block_scsi_eh" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x278606ec, "mempool_free" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xeab4f658, "fc_remote_port_add" },
	{ 0xfb36d70c, "bsg_job_done" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x47704d20, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_fc";

