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
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x1e2c95fc, "usbnet_get_endpoints" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xb791ab29, "usbnet_device_suggests_idle" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0x99bb8806, "memmove" },
	{ 0x101f6d13, "skb_push" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x122170da, "crc32_le" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");
