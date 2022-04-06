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
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0x81acafa1, "cdc_ncm_change_mtu" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x67de74ce, "usb_match_id" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0xb27fabb5, "usb_cdc_wdm_register" },
	{ 0x68e116c8, "cdc_ncm_bind_common" },
	{ 0xa560b4ab, "cdc_ncm_select_altsetting" },
	{ 0x64447c5, "usbnet_suspend" },
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x11f1162e, "cdc_ncm_unbind" },
	{ 0x793d9a92, "usb_autopm_put_interface" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0x4856a277, "in6_dev_finish_destroy" },
	{ 0x417e7c44, "__vlan_find_dev_deep_rcu" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0x102729b5, "cdc_ncm_rx_verify_ndp16" },
	{ 0x7af16480, "ipv6_stub" },
	{ 0x8dbf63b0, "cdc_ncm_rx_verify_nth16" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaa8853, "netdev_err" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9dc3fcd4, "cdc_ncm_fill_tx_frame" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ncm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");
