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
	{ 0x402b8281, "__request_module" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x3e8b0a0b, "dvb_usbv2_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf2b67b10, "param_ops_short" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x7c32d0f0, "printk" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x22d50aa5, "dvb_usbv2_probe" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x297895e6, "dvb_usbv2_disconnect" },
	{ 0xfa62ad95, "dvb_usbv2_suspend" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xbad4e167, "dvb_usbv2_reset_resume" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2";

MODULE_ALIAS("usb:v058Fp6610d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "925968C038D68D9EE545CB2");