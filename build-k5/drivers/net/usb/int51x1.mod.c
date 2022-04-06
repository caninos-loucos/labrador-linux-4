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
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0xcb0516a5, "usbnet_change_mtu" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x1e2c95fc, "usbnet_get_endpoints" },
	{ 0xf174ddd, "usbnet_get_ethernet_addr" },
	{ 0x4bb41010, "netdev_info" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xe5f9fcee, "usbnet_write_cmd_async" },
	{ 0xaa8853, "netdev_err" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x99bb8806, "memmove" },
	{ 0x5f754e5a, "memset" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");
