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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x20da465f, "ieee80211_rx_napi" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x5278ea87, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x77e58a3a, "usb_get_from_anchor" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x652f718d, "ieee80211_beacon_get_tim" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2543ad7b, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0x92c9d6aa, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3e00d70f, "__ieee80211_get_assoc_led_name" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xcbfc0194, "ieee80211_stop_queues" },
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0x70473684, "of_led_classdev_register" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0x7ec337cd, "ieee80211_stop_queue" },
	{ 0xc7a34a36, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x6732738, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcf81bddc, "ieee80211_free_txskb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x291afc6a, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xae660e90, "ath_is_mybeacon" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xded641fa, "input_set_capability" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0x62638d2c, "__dev_kfree_skb_irq" },
	{ 0x688f38e8, "ieee80211_sta_block_awake" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x661392c2, "request_firmware_nowait" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9555fe58, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x12f9b470, "ath_reg_notifier_apply" },
	{ 0x9ec2f707, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x71237de7, "usb_queue_reset_device" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xf83f59a1, "ath_regd_get_band_ctl" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0xa1949ba4, "ieee80211_tx_status_irqsafe" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x6af15773, "usb_driver_release_interface" },
	{ 0x3ff582e7, "ieee80211_get_tx_rates" },
	{ 0x8d16786a, "input_free_device" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0x1f215d6b, "__ieee80211_get_tx_led_name" },
	{ 0x2f63e634, "usb_poison_anchored_urbs" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2b337151, "usb_get_intf" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3cec2af7, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x17a648b7, "ieee80211_restart_hw" },
	{ 0x302cb88d, "ieee80211_register_hw" },
	{ 0xb8fdac6b, "led_classdev_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xccd85b49, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab619f5, "input_unregister_device" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x2511866e, "ieee80211_free_hw" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x906dd327, "usb_unpoison_anchored_urbs" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0x4303eb4, "device_set_wakeup_enable" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0x3ddc56f3, "usb_put_intf" },
	{ 0x6d049973, "ieee80211_stop_tx_ba_session" },
	{ 0xf66a4f75, "ieee80211_queue_stopped" },
	{ 0x712ffc59, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");
