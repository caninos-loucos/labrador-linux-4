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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4bb41010, "netdev_info" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x24b11a6, "skb_copy" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xaf30c919, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0xe1b4cf22, "netif_tx_stop_all_queues" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x8742e562, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x3e73e5f4, "wireless_send_event" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x78703483, "device_init_wakeup" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x564b9802, "flush_signals" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x86b1e15c, "lib80211_get_crypto_ops" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x1333d5a, "netif_device_attach" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0x755b53e6, "ether_setup" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x935ceddf, "dev_alloc_name" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb29a101, "request_firmware" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xec161146, "skb_copy_bits" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf6b84a09, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211,lib80211";

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApFFEFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B7329208313FE464261F304");
