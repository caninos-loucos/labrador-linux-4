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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe83dde9b, "cfg80211_rx_unprot_mlme_mgmt" },
	{ 0x6e5db814, "cfg80211_auth_timeout" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4bb41010, "netdev_info" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbfc4f9c9, "cfg80211_cqm_rssi_notify" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x1683dd76, "wiphy_free" },
	{ 0x4221cb20, "cfg80211_unlink_bss" },
	{ 0x2e0aceaa, "__skb_gso_segment" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0xffe34ebe, "rht_bucket_nested" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x38cb594a, "ieee80211_ie_split_ric" },
	{ 0x8752b44d, "mem_map" },
	{ 0x9167a531, "crypto_alloc_shash" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0xc6972d14, "cfg80211_radar_event" },
	{ 0x97255bdf, "strlen" },
	{ 0x139112d7, "cfg80211_shutdown_all_interfaces" },
	{ 0x5f417d6c, "led_trigger_event" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xa14dd16, "cfg80211_send_layer2_update" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xee343f9a, "cfg80211_report_wowlan_wakeup" },
	{ 0xc6cabb0d, "led_set_brightness" },
	{ 0xaf0fe58e, "cfg80211_chandef_create" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x24b11a6, "skb_copy" },
	{ 0xbbeb19a2, "led_trigger_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xbb771b1a, "rhltable_init" },
	{ 0x5705160, "led_blink_set" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4f7fa64b, "cfg80211_rx_mgmt" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa03ff456, "cfg80211_abandon_assoc" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x741916d4, "crypto_shash_finup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x46312808, "ieee80211_radiotap_iterator_next" },
	{ 0x2f5c6a0a, "cfg80211_stop_iface" },
	{ 0xa7c08ed7, "trace_event_buffer_reserve" },
	{ 0x1c0e63b4, "freq_reg_info" },
	{ 0xd8a3c8e, "cfg80211_probe_status" },
	{ 0xe1bf2c5b, "cfg80211_unregister_wdev" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4d4be347, "idr_for_each" },
	{ 0xc3d579c5, "rhashtable_insert_slow" },
	{ 0x32a4f18b, "bpf_trace_run3" },
	{ 0xb504406e, "cfg80211_reg_can_beacon" },
	{ 0x4efabdac, "kfree_skb_list" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa58fa429, "cfg80211_check_station_change" },
	{ 0x75e9025a, "cfg80211_ch_switch_started_notify" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81ee08fa, "cfg80211_mgmt_tx_status" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xaf30c919, "netif_rx" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0x865029ac, "__hw_addr_sync" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x16872630, "cfg80211_rx_control_port" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0x6a732461, "cfg80211_cqm_beacon_loss_notify" },
	{ 0x1dc4fef7, "rht_bucket_nested_insert" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0x225cef50, "cfg80211_chandef_usable" },
	{ 0xc0056063, "trace_define_field" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xc8d0ffdd, "kernel_param_unlock" },
	{ 0x7d4d2be0, "rhashtable_free_and_destroy" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0x82a56cdf, "bpf_trace_run1" },
	{ 0xe1b4cf22, "netif_tx_stop_all_queues" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5aec6c5b, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9c2b0fe9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeed2ce18, "ieee80211_data_to_8023_exthdr" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x6c507cd4, "cfg80211_sched_scan_stopped_rtnl" },
	{ 0xac97a207, "ieee80211_radiotap_iterator_init" },
	{ 0x22938bd6, "led_trigger_unregister" },
	{ 0xd7d35dd8, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x79127043, "crypto_shash_update" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x8742e562, "free_netdev" },
	{ 0x672635da, "wiphy_unregister" },
	{ 0xe5ea94c1, "skb_ensure_writable" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1ffd3a6d, "crypto_shash_digest" },
	{ 0x328a05f1, "strncpy" },
	{ 0x388b1b90, "trace_event_reg" },
	{ 0x2d31bf02, "netif_receive_skb" },
	{ 0x8ab38223, "cfg80211_del_sta_sinfo" },
	{ 0xa6099c18, "ieee80211_get_channel" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x81d5d8aa, "ieee80211_operating_class_to_band" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8fa02936, "cfg80211_free_nan_func" },
	{ 0x122170da, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5996410, "dev_close" },
	{ 0x16f7757f, "cfg80211_cqm_pktloss_notify" },
	{ 0x6246d084, "cfg80211_reg_can_beacon_relax" },
	{ 0x381a71be, "cfg80211_michael_mic_failure" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc11b2ce7, "bpf_trace_run5" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3d855034, "cfg80211_report_obss_beacon" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xc6530af5, "cfg80211_iftype_allowed" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xda072db0, "cfg80211_iter_combinations" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x22c59be5, "cfg80211_chandef_compatible" },
	{ 0xc80bf300, "crypto_shash_setkey" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3e2512d1, "cfg80211_nan_match" },
	{ 0xc47fb42d, "cfg80211_ibss_joined" },
	{ 0x33086156, "perf_trace_run_bpf_submit" },
	{ 0xdeee7bb, "cfg80211_rx_spurious_frame" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x76f5120, "kernel_param_lock" },
	{ 0xf1a769ec, "cfg80211_assoc_timeout" },
	{ 0xb0e82f31, "crypto_aead_setkey" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x79febb63, "cfg80211_get_drvinfo" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x61275678, "idr_remove" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe6938daa, "ieee80211_bss_get_ie" },
	{ 0xbfcaf337, "cfg80211_tdls_oper_request" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x972d2d05, "cfg80211_check_combinations" },
	{ 0x5ecb36c6, "skb_get_hash_perturb" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0x1de36282, "cfg80211_gtk_rekey_notify" },
	{ 0x2c62bcba, "napi_gro_receive" },
	{ 0x3cad28, "_dev_info" },
	{ 0x1f2072d2, "cfg80211_tx_mlme_mgmt" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0xf0299fdd, "cfg80211_ch_switch_notify" },
	{ 0xbec06c7c, "cfg80211_nan_func_terminated" },
	{ 0x8118d610, "cfg80211_put_bss" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x10dd8ec9, "wiphy_register" },
	{ 0x4ac7104a, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x9caa65d1, "cfg80211_rx_mlme_mgmt" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1a6145d1, "cfg80211_classify8021d" },
	{ 0x8def4e99, "skb_checksum_help" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x6fafd5da, "cfg80211_ready_on_channel" },
	{ 0x2791cf04, "cfg80211_sta_opmode_change_notify" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x31b0cb83, "wiphy_new_nm" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0xd82758db, "crypto_destroy_tfm" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0xa7f18958, "cfg80211_calculate_bitrate" },
	{ 0x30d0338d, "trace_event_buffer_commit" },
	{ 0xf1512f9d, "pskb_expand_head" },
	{ 0x755b53e6, "ether_setup" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xef85c3e1, "netdev_set_default_ethtool_ops" },
	{ 0x2b59860e, "unregister_netdevice_queue" },
	{ 0xae578e62, "cfg80211_new_sta" },
	{ 0xeda437a4, "cfg80211_chandef_valid" },
	{ 0xb8bdf932, "event_triggers_call" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xef34dea, "crypto_aead_setauthsize" },
	{ 0xd06b5212, "bpf_trace_run2" },
	{ 0x5da07c5f, "crypto_alloc_aead" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5be49619, "trace_event_raw_init" },
	{ 0x5e250234, "___pskb_trim" },
	{ 0x935ceddf, "dev_alloc_name" },
	{ 0x6d87b69, "crc32_be" },
	{ 0xf2257880, "ieee80211_chandef_to_operating_class" },
	{ 0xf637c5f, "ieee80211_mandatory_rates" },
	{ 0xd7f602a7, "cfg80211_ref_bss" },
	{ 0x3e9110fa, "__hw_addr_unsync" },
	{ 0x704786a1, "ieee80211_amsdu_to_8023s" },
	{ 0xd653dac7, "led_trigger_blink_oneshot" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7a4497db, "kzfree" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x6116f021, "cfg80211_cac_event" },
	{ 0x3568aecf, "bpf_trace_run6" },
	{ 0xa27036a8, "cfg80211_remain_on_channel_expired" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32fad96, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x672c487, "skb_clone_sk" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xe02014ab, "cfg80211_sched_scan_stopped" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7aec4b52, "cfg80211_scan_done" },
	{ 0x6339e9cc, "cfg80211_chandef_dfs_required" },
	{ 0xcd4051e8, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0x13e26afc, "crypto_alloc_base" },
	{ 0xaf38e081, "idr_find" },
	{ 0xec161146, "skb_copy_bits" },
	{ 0x98d7aa57, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xff634723, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0x156e6717, "cfg80211_rx_assoc_resp" },
	{ 0xf389fe60, "__hw_addr_init" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe8519881, "skb_complete_wifi_ack" },
	{ 0x1d1fa71e, "cfg80211_sinfo_alloc_tid_stats" },
	{ 0x7d02ce5d, "cfg80211_sched_scan_results" },
	{ 0xb2096c18, "cfg80211_inform_bss_frame_data" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";
