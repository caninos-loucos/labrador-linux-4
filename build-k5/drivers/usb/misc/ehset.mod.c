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
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1A0Ap0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0108d*dc*dsc*dp*ic*isc*ip*in*");
