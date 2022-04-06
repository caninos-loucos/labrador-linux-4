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
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x64447c5, "usbnet_suspend" },
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0x527d4727, "usbnet_set_link_ksettings" },
	{ 0x526221d3, "usbnet_get_link_ksettings" },
	{ 0xd24a38a8, "usbnet_nway_reset" },
	{ 0x9c18b558, "usbnet_set_msglevel" },
	{ 0x8e4743b6, "usbnet_get_msglevel" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0xcb0516a5, "usbnet_change_mtu" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x1e2c95fc, "usbnet_get_endpoints" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4914320, "mii_nway_restart" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaed406b8, "mii_ethtool_gset" },
	{ 0x588902e3, "mii_check_media" },
	{ 0x5f754e5a, "memset" },
	{ 0x3a66feed, "usbnet_write_cmd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9dd3216b, "usbnet_read_cmd" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xdc8e105a, "usbnet_link_change" },
	{ 0xaa8853, "netdev_err" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x122170da, "crc32_le" },
	{ 0xe5f9fcee, "usbnet_write_cmd_async" },
	{ 0x2f0b6a54, "generic_mii_ioctl" },
	{ 0x328a05f1, "strncpy" },
	{ 0xac455996, "usbnet_get_drvinfo" },
	{ 0xbdb2af85, "mii_link_ok" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0x101f6d13, "skb_push" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0FE6p9800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "75E05A75F8077DB1AFBE7F5");
