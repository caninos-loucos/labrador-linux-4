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
	{ 0x9c2b0fe9, "ethtool_op_get_link" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x632780, "work_busy" },
	{ 0x1333d5a, "netif_device_attach" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x58c679b, "usb_driver_set_configuration" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3cad28, "_dev_info" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x4c26b2ec, "netif_napi_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf6b84a09, "alloc_etherdev_mqs" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x40c3b7f3, "usb_enable_lpm" },
	{ 0x4303eb4, "device_set_wakeup_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x345febae, "netdev_notice" },
	{ 0x122170da, "crc32_le" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf1512f9d, "pskb_expand_head" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0x8def4e99, "skb_checksum_help" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0x2e0aceaa, "__skb_gso_segment" },
	{ 0x8fe78268, "napi_complete_done" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc263d22e, "usb_autopm_get_interface_async" },
	{ 0x49f9ae68, "netif_schedule_queue" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xec161146, "skb_copy_bits" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xe6f3fe23, "__napi_alloc_skb" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2c62bcba, "napi_gro_receive" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xc6479501, "skb_tstamp_tx" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x71237de7, "usb_queue_reset_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x4914320, "mii_nway_restart" },
	{ 0x98f91066, "mii_ethtool_get_link_ksettings" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf0072db9, "__napi_schedule" },
	{ 0xdcdf7bfe, "napi_schedule_prep" },
	{ 0xa2dc88ab, "usb_autopm_put_interface_async" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8742e562, "free_netdev" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x6a9794d5, "netif_napi_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x793d9a92, "usb_autopm_put_interface" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0x4bb41010, "netdev_info" },
	{ 0x742bab07, "netif_device_detach" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaa8853, "netdev_err" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xf6323981, "napi_disable" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "D1F4A1F34EC8253488CE0E7");
