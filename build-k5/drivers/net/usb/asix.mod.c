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
	{ 0xaed406b8, "mii_ethtool_gset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc209a4fb, "phy_disconnect" },
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x2a52b75, "phy_stop" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdc8e105a, "usbnet_link_change" },
	{ 0x348964cb, "__mdiobus_register" },
	{ 0xc1e76e96, "phy_ethtool_nway_reset" },
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2f0b6a54, "generic_mii_ioctl" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0xc921b457, "usbnet_update_max_qlen" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbce70d10, "mdiobus_unregister" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0x89567654, "phy_print_status" },
	{ 0xd24a38a8, "usbnet_nway_reset" },
	{ 0x527d4727, "usbnet_set_link_ksettings" },
	{ 0x5f754e5a, "memset" },
	{ 0xaa4ab69c, "phy_start" },
	{ 0x4914320, "mii_nway_restart" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x81bb483b, "eth_platform_get_mac_address" },
	{ 0x63e0632e, "mdiobus_free" },
	{ 0x1e2c95fc, "usbnet_get_endpoints" },
	{ 0x526221d3, "usbnet_get_link_ksettings" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xac455996, "usbnet_get_drvinfo" },
	{ 0x101f6d13, "skb_push" },
	{ 0x1dd5be4a, "usbnet_read_cmd_nopm" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x64447c5, "usbnet_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46858ad, "usbnet_get_link" },
	{ 0x6770902d, "usbnet_write_cmd_nopm" },
	{ 0xdcf71ebb, "phy_ethtool_get_link_ksettings" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0x9dd3216b, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x685caa80, "genphy_resume" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x588902e3, "mii_check_media" },
	{ 0x8e4743b6, "usbnet_get_msglevel" },
	{ 0xaa8853, "netdev_err" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0x86160929, "usbnet_unlink_rx_urbs" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0xfd374067, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe5f9fcee, "usbnet_write_cmd_async" },
	{ 0xcb0516a5, "usbnet_change_mtu" },
	{ 0x3996abc4, "phy_connect" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4e6a5b72, "phy_mii_ioctl" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbdb2af85, "mii_link_ok" },
	{ 0x99bb8806, "memmove" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0x3a66feed, "usbnet_write_cmd" },
	{ 0x9c18b558, "usbnet_set_msglevel" },
	{ 0xe2dbe82f, "mdiobus_alloc_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii,usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B345E9BD2BD027AA18007C7");
