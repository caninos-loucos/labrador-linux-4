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
	{ 0x4bb41010, "netdev_info" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x50de9f9, "ethtool_op_get_ts_info" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x8752b44d, "mem_map" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x77e58a3a, "usb_get_from_anchor" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0x2ef1d279, "usb_get_urb" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xaf30c919, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x66ba57fc, "usb_string" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0x4914320, "mii_nway_restart" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9c2b0fe9, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x8742e562, "free_netdev" },
	{ 0xa2dc88ab, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x1cdeddd, "mii_ethtool_set_link_ksettings" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x1333d5a, "netif_device_attach" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x742bab07, "netif_device_detach" },
	{ 0xc263d22e, "usb_autopm_get_interface_async" },
	{ 0x3cee98c5, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xccf9e241, "usb_clear_halt" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x86ccf98c, "hex2bin" },
	{ 0xaa8853, "netdev_err" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x98f91066, "mii_ethtool_get_link_ksettings" },
	{ 0xf7e1222c, "usb_autopm_get_interface_no_resume" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbdb2af85, "mii_link_ok" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xc6479501, "skb_tstamp_tx" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x793d9a92, "usb_autopm_put_interface" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xf6b84a09, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

