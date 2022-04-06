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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc614c7f9, "module_layout" },
	{ 0x753bb058, "register_netdevice" },
	{ 0xef682093, "sdio_writeb" },
	{ 0x1dfe7453, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0x1683dd76, "wiphy_free" },
	{ 0x4221cb20, "cfg80211_unlink_bss" },
	{ 0x7e6546c3, "cfg80211_connect_done" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf89db10c, "single_open" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe35c1c18, "single_release" },
	{ 0x4892f808, "find_vpid" },
	{ 0x642d2e6d, "sdio_enable_func" },
	{ 0xc072aa9, "sdio_claim_irq" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x24b11a6, "skb_copy" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0x219fd890, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xdc16b903, "remove_proc_entry" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4f7fa64b, "cfg80211_rx_mgmt" },
	{ 0xa205f20c, "filp_close" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x46e29c5a, "seq_read" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81ee08fa, "cfg80211_mgmt_tx_status" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xaf30c919, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x87660f2a, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0x7cd20bf4, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0xe1b4cf22, "netif_tx_stop_all_queues" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5aec6c5b, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x8742e562, "free_netdev" },
	{ 0x672635da, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0x222c50cd, "register_netdev" },
	{ 0xe4c3e559, "sdio_readl" },
	{ 0x8ab38223, "cfg80211_del_sta_sinfo" },
	{ 0xa6099c18, "ieee80211_get_channel" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0x652032cb, "mac_pton" },
	{ 0x3ae0370c, "proc_mkdir_data" },
	{ 0x381a71be, "cfg80211_michael_mic_failure" },
	{ 0x55276bb1, "wiphy_apply_custom_regulatory" },
	{ 0xf0ef52e8, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9c940559, "kill_pid" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xc47fb42d, "cfg80211_ibss_joined" },
	{ 0x79e51169, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x564b9802, "flush_signals" },
	{ 0x449eca8d, "sdio_unregister_driver" },
	{ 0x1333d5a, "netif_device_attach" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x783e96a8, "cfg80211_roamed" },
	{ 0x8118d610, "cfg80211_put_bss" },
	{ 0x10dd8ec9, "wiphy_register" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x65811dbb, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x31b0cb83, "wiphy_new_nm" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x64296832, "proc_get_parent_data" },
	{ 0x2cc30d57, "sdio_f0_readb" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0xf231a449, "of_get_property" },
	{ 0x3351fc09, "cfg80211_disconnected" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2b59860e, "unregister_netdevice_queue" },
	{ 0xae578e62, "cfg80211_new_sta" },
	{ 0xe395f8e2, "sdio_memcpy_toio" },
	{ 0x97c6de9d, "proc_create_data" },
	{ 0xd75a2c88, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x935ceddf, "dev_alloc_name" },
	{ 0x581cde4e, "up" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x27a94d66, "sdio_register_driver" },
	{ 0xcb77d75d, "sdio_memcpy_fromio" },
	{ 0x623e05c3, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7aec4b52, "cfg80211_scan_done" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xec161146, "skb_copy_bits" },
	{ 0x6964e92b, "sdio_set_block_size" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0x3a3c4bf9, "sdio_disable_func" },
	{ 0x39b9ed23, "sdio_release_host" },
	{ 0x3c0e55aa, "filp_open" },
	{ 0xf6b84a09, "alloc_etherdev_mqs" },
	{ 0xb2096c18, "cfg80211_inform_bss_frame_data" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("sdio:c*v024Cd0523*");
MODULE_ALIAS("sdio:c*v024Cd0525*");
MODULE_ALIAS("sdio:c*v024Cd0623*");
MODULE_ALIAS("sdio:c*v024Cd0626*");
MODULE_ALIAS("sdio:c*v024CdB723*");

MODULE_INFO(srcversion, "625035247F80899768E35CF");
