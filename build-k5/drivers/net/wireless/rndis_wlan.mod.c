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
	{ 0x31dcd773, "param_ops_string" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x64447c5, "usbnet_suspend" },
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0xf27c7376, "rndis_tx_fixup" },
	{ 0xb01b955c, "rndis_rx_fixup" },
	{ 0xb38dea93, "rndis_status" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xaa8853, "netdev_err" },
	{ 0xfa1a5ddf, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x3351fc09, "cfg80211_disconnected" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x783e96a8, "cfg80211_roamed" },
	{ 0xc47fb42d, "cfg80211_ibss_joined" },
	{ 0x7e6546c3, "cfg80211_connect_done" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0xdaef6eb3, "usbnet_resume_rx" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xbfc4f9c9, "cfg80211_cqm_rssi_notify" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x91715312, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0x10dd8ec9, "wiphy_register" },
	{ 0x9f6c4779, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x31b0cb83, "wiphy_new_nm" },
	{ 0xb859f38b, "krealloc" },
	{ 0x8118d610, "cfg80211_put_bss" },
	{ 0x9287eea3, "cfg80211_inform_bss_data" },
	{ 0xa6099c18, "ieee80211_get_channel" },
	{ 0x1683dd76, "wiphy_free" },
	{ 0x672635da, "wiphy_unregister" },
	{ 0xe803ad24, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7aec4b52, "cfg80211_scan_done" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6541eb7c, "rndis_command" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x11089ac7, "_ctype" },
	{ 0x381a71be, "cfg80211_michael_mic_failure" },
	{ 0xe02065dc, "cfg80211_pmksa_candidate_notify" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0x4358a4f7, "usbnet_pause_rx" },
	{ 0x4bb41010, "netdev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,rndis_host,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
