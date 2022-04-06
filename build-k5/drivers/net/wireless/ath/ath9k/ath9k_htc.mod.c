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
	{ 0x20da465f, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2455e1c1, "ath9k_hw_set_txq_props" },
	{ 0x29344e4, "ieee80211_csa_finish" },
	{ 0x3c93647e, "ath9k_hw_init" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xd42a4063, "ath9k_cmn_get_channel" },
	{ 0x74035d6, "ath9k_hw_deinit" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xd36767f7, "device_release_driver" },
	{ 0xa9ad033e, "ath9k_hw_set_gpio" },
	{ 0xe3565123, "ath9k_cmn_init_crypto" },
	{ 0x5278ea87, "ieee80211_queue_work" },
	{ 0x95fe24ea, "ath9k_cmn_process_rate" },
	{ 0xc2bcbbfc, "ieee80211_csa_is_complete" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x58c43fea, "ath9k_hw_btcoex_enable" },
	{ 0xea7fddb, "ath9k_hw_wait" },
	{ 0xde8d5d9a, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xaad9668c, "ath9k_hw_stopdmarecv" },
	{ 0x4e966c00, "ath_key_delete" },
	{ 0xe439ed55, "ath9k_cmn_update_txpow" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x652f718d, "ieee80211_beacon_get_tim" },
	{ 0x91f6e92, "ath9k_hw_gpio_get" },
	{ 0x2543ad7b, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x92c9d6aa, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfe44a60b, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x1ddba2d2, "ath9k_hw_setrxfilter" },
	{ 0xb8956e15, "ath9k_hw_get_txq_props" },
	{ 0x1c6108fc, "ath9k_hw_releasetxqueue" },
	{ 0xec004d38, "ath9k_hw_reset_tsf" },
	{ 0x239b0563, "wiphy_rfkill_start_polling" },
	{ 0xff03e1bd, "ath9k_cmn_reload_chainmask" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xea7eb1b0, "ath9k_cmn_init_channels_rates" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xcbfc0194, "ieee80211_stop_queues" },
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0x70473684, "of_led_classdev_register" },
	{ 0x754f348a, "complete_all" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0x65611c8, "ieee80211_tx_status" },
	{ 0x9d3a901e, "ath_printk" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe20e1d08, "ath9k_hw_setopmode" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xba6ed343, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x847a713, "ath9k_hw_resettxqueue" },
	{ 0x65409927, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x6732738, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3207a0c9, "ath9k_hw_set_sta_beacon_timers" },
	{ 0xcc46c167, "ath9k_hw_set_tsfadjust" },
	{ 0x77b3d291, "ath9k_cmn_beacon_config_ap" },
	{ 0x291afc6a, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa7ac504c, "ath9k_hw_btcoex_disable" },
	{ 0x58d55b4a, "ath9k_hw_getrxfilter" },
	{ 0x1031371f, "ath9k_hw_ani_monitor" },
	{ 0xae660e90, "ath_is_mybeacon" },
	{ 0x75600ce2, "ath9k_cmn_beacon_config_adhoc" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xa0641515, "ath9k_cmn_process_rssi" },
	{ 0x84b183ae, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x34f87c1b, "wiphy_rfkill_stop_polling" },
	{ 0x661392c2, "request_firmware_nowait" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb23c5d24, "ath9k_hw_write_associd" },
	{ 0x9555fe58, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x12f9b470, "ath_reg_notifier_apply" },
	{ 0x9ec2f707, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x25fb344c, "ath9k_hw_init_btcoex_hw" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x40e7aee1, "ath9k_hw_beaconq_setup" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xd3f70629, "ath9k_hw_name" },
	{ 0x1b27f453, "ath9k_hw_init_global_settings" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x6c3e337b, "ath9k_hw_settsf64" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc234f543, "wiphy_rfkill_set_hw_state" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x97309ab0, "ath9k_hw_beaconinit" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0x56a54716, "ieee80211_get_buffered_bc" },
	{ 0x5a396aef, "usb_interrupt_msg" },
	{ 0x1080d497, "ath9k_hw_gpio_free" },
	{ 0x167be4d4, "ath9k_hw_btcoex_bt_stomp" },
	{ 0x4537cd17, "ath9k_hw_setrxabort" },
	{ 0xc4cd0888, "ath9k_cmn_beacon_config_sta" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x26f1d6f2, "ath_hw_setbssidmask" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9dbfeb75, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x2a32c4ba, "ath9k_hw_phy_disable" },
	{ 0x3c78ff75, "__ieee80211_get_radio_led_name" },
	{ 0xc3167391, "ieee80211_get_hdrlen_from_skb" },
	{ 0xeb3987ef, "ath9k_hw_setpower" },
	{ 0xf05eb8a, "__ieee80211_create_tpt_led_trigger" },
	{ 0x302cb88d, "ieee80211_register_hw" },
	{ 0xb8fdac6b, "led_classdev_unregister" },
	{ 0xd0d4a33e, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0xccd85b49, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xfcd6e2b3, "ath9k_hw_setmcastfilter" },
	{ 0x7e4dd03b, "ieee80211_start_tx_ba_session" },
	{ 0x4169fa39, "ath9k_hw_gpio_request_out" },
	{ 0xa434e2d6, "ath9k_hw_startpcureceive" },
	{ 0xb3c839ec, "ath9k_hw_setuptxqueue" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb29a101, "request_firmware" },
	{ 0xb9272586, "ath9k_hw_reset" },
	{ 0x2511866e, "ieee80211_free_hw" },
	{ 0x53881b9, "ath9k_cmn_rx_accept" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xab943819, "ath9k_hw_btcoex_init_3wire" },
	{ 0xacaaad0b, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xaf4312ff, "ath9k_hw_reset_calvalid" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
