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
	{ 0x753bb058, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xac0364ff, "crypto_alloc_skcipher" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2927783e, "ieee802154_hdr_push" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0x6ea80386, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa7c08ed7, "trace_event_buffer_reserve" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x32a4f18b, "bpf_trace_run3" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x5a7b2af7, "ieee802154_hdr_pull" },
	{ 0xc0056063, "trace_define_field" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0x82a56cdf, "bpf_trace_run1" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x8742e562, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x388b1b90, "trace_event_reg" },
	{ 0x2d31bf02, "netif_receive_skb" },
	{ 0xcf1b7bab, "wpan_phy_free" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2d00ec07, "ieee802154_hdr_peek" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1e4d0e3, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x33086156, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb0e82f31, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0x4ac7104a, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0xd82758db, "crypto_destroy_tfm" },
	{ 0x30d0338d, "trace_event_buffer_commit" },
	{ 0x8514c54e, "wpan_phy_unregister" },
	{ 0x1dd59dc1, "ieee802154_hdr_peek_addrs" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2b59860e, "unregister_netdevice_queue" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0xb8bdf932, "event_triggers_call" },
	{ 0xef34dea, "crypto_aead_setauthsize" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0xd06b5212, "bpf_trace_run2" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x5da07c5f, "crypto_alloc_aead" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x5be49619, "trace_event_raw_init" },
	{ 0x935ceddf, "dev_alloc_name" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32fad96, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x98d7aa57, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

