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
	{ 0x3cad28, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1e2c95fc, "usbnet_get_endpoints" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x66ba57fc, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x101f6d13, "skb_push" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xf1512f9d, "pskb_expand_head" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");
