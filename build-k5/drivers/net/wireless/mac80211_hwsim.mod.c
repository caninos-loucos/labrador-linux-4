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
	{ 0xa30102ec, "param_ops_bool" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xf2b21839, "simple_attr_release" },
	{ 0x17ece8b4, "simple_attr_write" },
	{ 0xd93fb87a, "simple_attr_read" },
	{ 0x119af839, "generic_file_llseek" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa9fb6b48, "rhashtable_destroy" },
	{ 0x3eabe18f, "unregister_pernet_device" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x8742e562, "free_netdev" },
	{ 0x753bb058, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x935ceddf, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0xf1958b66, "__class_create" },
	{ 0x8fe7eae6, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xa1b56311, "genl_register_family" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0xf93c478e, "register_pernet_device" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x21af32f7, "ida_free" },
	{ 0xd33eb47e, "skb_unlink" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xac3f0654, "ieee80211_remain_on_channel_expired" },
	{ 0x37a0cba, "kfree" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1dc4fef7, "rht_bucket_nested_insert" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc3d579c5, "rhashtable_insert_slow" },
	{ 0x5109164d, "debugfs_create_file" },
	{ 0x4a07c33b, "debugfs_create_dir" },
	{ 0xccd85b49, "regulatory_hint" },
	{ 0x302cb88d, "ieee80211_register_hw" },
	{ 0x203f9fac, "tasklet_hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x55276bb1, "wiphy_apply_custom_regulatory" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xca08ef1a, "device_bind_driver" },
	{ 0xa36da8fd, "device_create" },
	{ 0x6732738, "ieee80211_alloc_hw_nm" },
	{ 0x52ecd6fd, "class_destroy" },
	{ 0x2511866e, "ieee80211_free_hw" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0xd36767f7, "device_release_driver" },
	{ 0x92c9d6aa, "ieee80211_unregister_hw" },
	{ 0xece092ff, "debugfs_remove_recursive" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe4d93bcb, "netlink_broadcast" },
	{ 0x79e51169, "init_net" },
	{ 0x4e567c1c, "genl_notify" },
	{ 0xa1949ba4, "ieee80211_tx_status_irqsafe" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x3eec6e76, "ieee80211_ready_on_channel" },
	{ 0xaab24c35, "ieee80211_scan_completed" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe2632d4b, "ieee80211_probereq_get" },
	{ 0x9555fe58, "ieee80211_queue_delayed_work" },
	{ 0xbddfbd77, "cfg80211_vendor_cmd_reply" },
	{ 0x17559fa7, "__cfg80211_alloc_reply_skb" },
	{ 0x6454c5d, "__cfg80211_send_event_skb" },
	{ 0x8c82050b, "__cfg80211_alloc_event_skb" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x29344e4, "ieee80211_csa_finish" },
	{ 0xc2bcbbfc, "ieee80211_csa_is_complete" },
	{ 0x652f718d, "ieee80211_beacon_get_tim" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3ff582e7, "ieee80211_get_tx_rates" },
	{ 0xdf473a0e, "__free_pages" },
	{ 0x92703a3c, "dst_release" },
	{ 0x7072b279, "skb_add_rx_frag" },
	{ 0x951c87f9, "page_address" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0x80aac656, "__secpath_destroy" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x24b11a6, "skb_copy" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x5b026fd7, "nla_put_64bit" },
	{ 0xcf81bddc, "ieee80211_free_txskb" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xaf30c919, "netif_rx" },
	{ 0x101f6d13, "skb_push" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xfe44a60b, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xf295737e, "ieee80211_radar_detected" },
	{ 0x4c0bf32c, "simple_attr_open" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x77ea5a4a, "netlink_unicast" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xbaf70cb8, "ieee80211_rx_irqsafe" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0xffe34ebe, "rht_bucket_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xdfd41198, "genlmsg_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x97255bdf, "strlen" },
	{ 0x6ecedfb7, "nla_put" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x755b53e6, "ether_setup" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

