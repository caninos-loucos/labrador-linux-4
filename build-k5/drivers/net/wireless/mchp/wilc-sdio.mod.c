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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0xef682093, "sdio_writeb" },
	{ 0x1dfe7453, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x594b40c7, "cdev_del" },
	{ 0x4bb41010, "netdev_info" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc9654c69, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1683dd76, "wiphy_free" },
	{ 0x7e6546c3, "cfg80211_connect_done" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x74b49675, "gpiod_direction_output" },
	{ 0x4a07c33b, "debugfs_create_dir" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x9287eea3, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc072aa9, "sdio_claim_irq" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb174334b, "gpio_to_desc" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb2062b2f, "device_destroy" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4f7fa64b, "cfg80211_rx_mgmt" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8ad04752, "__pm_runtime_resume" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5109164d, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0xece092ff, "debugfs_remove_recursive" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0x81ee08fa, "cfg80211_mgmt_tx_status" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xaf30c919, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x1161fec8, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x8742e562, "free_netdev" },
	{ 0x672635da, "wiphy_unregister" },
	{ 0x328a05f1, "strncpy" },
	{ 0x222c50cd, "register_netdev" },
	{ 0xa6099c18, "ieee80211_get_channel" },
	{ 0x84b183ae, "strncmp" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x38b5df65, "gpiod_direction_input" },
	{ 0xa36da8fd, "device_create" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x373db350, "kstrtoint" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x235c3adf, "cdev_add" },
	{ 0x449eca8d, "sdio_unregister_driver" },
	{ 0xe187693c, "kstrtouint_from_user" },
	{ 0x3cad28, "_dev_info" },
	{ 0x8118d610, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0x10dd8ec9, "wiphy_register" },
	{ 0x65811dbb, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x6fafd5da, "cfg80211_ready_on_channel" },
	{ 0x31b0cb83, "wiphy_new_nm" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0xaa8853, "netdev_err" },
	{ 0x3351fc09, "cfg80211_disconnected" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe395f8e2, "sdio_memcpy_toio" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x18b23fba, "gpiod_to_irq" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x52ecd6fd, "class_destroy" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa27036a8, "cfg80211_remain_on_channel_expired" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0x99bb8806, "memmove" },
	{ 0x27a94d66, "sdio_register_driver" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xcb77d75d, "sdio_memcpy_fromio" },
	{ 0x623e05c3, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7aec4b52, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf1958b66, "__class_create" },
	{ 0x25b0b422, "gpiod_put" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x39b9ed23, "sdio_release_host" },
	{ 0xf0cea117, "gpiod_get" },
	{ 0xf6b84a09, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000C*");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc3000");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc3000C*");