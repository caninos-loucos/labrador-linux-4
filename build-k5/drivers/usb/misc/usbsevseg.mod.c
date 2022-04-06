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
	{ 0x9d669763, "memcpy" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0x793d9a92, "usb_autopm_put_interface" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x91715312, "sprintf" },
	{ 0x3cad28, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*in*");
