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
	{ 0x64447c5, "usbnet_suspend" },
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0xcb0516a5, "usbnet_change_mtu" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x527d4727, "usbnet_set_link_ksettings" },
	{ 0x526221d3, "usbnet_get_link_ksettings" },
	{ 0x46858ad, "usbnet_get_link" },
	{ 0xd24a38a8, "usbnet_nway_reset" },
	{ 0x9c18b558, "usbnet_set_msglevel" },
	{ 0x8e4743b6, "usbnet_get_msglevel" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x1e2c95fc, "usbnet_get_endpoints" },
	{ 0xe5f9fcee, "usbnet_write_cmd_async" },
	{ 0x3cad28, "_dev_info" },
	{ 0x122170da, "crc32_le" },
	{ 0xac455996, "usbnet_get_drvinfo" },
	{ 0x9d669763, "memcpy" },
	{ 0x2f0b6a54, "generic_mii_ioctl" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9dd3216b, "usbnet_read_cmd" },
	{ 0x3a66feed, "usbnet_write_cmd" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xdc8e105a, "usbnet_link_change" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");
