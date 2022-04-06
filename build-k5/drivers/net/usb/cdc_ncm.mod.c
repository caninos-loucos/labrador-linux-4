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
	{ 0x4bb41010, "netdev_info" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x50de9f9, "ethtool_op_get_ts_info" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x4d9c3a1b, "usb_altnum_to_altsetting" },
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x6e1698a, "hrtimer_active" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0xdc8e105a, "usbnet_link_change" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0xc921b457, "usbnet_update_max_qlen" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0x49f9ae68, "netif_schedule_queue" },
	{ 0xd24a38a8, "usbnet_nway_reset" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x527d4727, "usbnet_set_link_ksettings" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x526221d3, "usbnet_get_link_ksettings" },
	{ 0xd721cf28, "usb_driver_claim_interface" },
	{ 0xac455996, "usbnet_get_drvinfo" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x64447c5, "usbnet_suspend" },
	{ 0x46858ad, "usbnet_get_link" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9dd3216b, "usbnet_read_cmd" },
	{ 0x3cad28, "_dev_info" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x913a8eb7, "cdc_parse_cdc_header" },
	{ 0xf174ddd, "usbnet_get_ethernet_addr" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0x6af15773, "usb_driver_release_interface" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x8e4743b6, "usbnet_get_msglevel" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x86160929, "usbnet_unlink_rx_urbs" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0x35da3320, "usbnet_manage_power" },
	{ 0x3a66feed, "usbnet_write_cmd" },
	{ 0x9c18b558, "usbnet_set_msglevel" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
