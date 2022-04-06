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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xad89eaf5, "usbnet_cdc_unbind" },
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0xd52ee908, "usbnet_generic_cdc_bind" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x64447c5, "usbnet_suspend" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0x3cad28, "_dev_info" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0x6af15773, "usb_driver_release_interface" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x5a396aef, "usb_interrupt_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x9286c276, "eth_mac_addr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");
