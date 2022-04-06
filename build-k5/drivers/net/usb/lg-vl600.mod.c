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
	{ 0x14a9727a, "usbnet_cdc_status" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xb580f4a7, "usbnet_cdc_bind" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xad89eaf5, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xaa8853, "netdev_err" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x9d669763, "memcpy" },
	{ 0x99bb8806, "memmove" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x101f6d13, "skb_push" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x20dea7fc, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");
