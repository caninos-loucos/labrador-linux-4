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
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x8087faee, "dvb_unregister_adapter" },
	{ 0xb58755e6, "dvb_register_frontend" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb9cdca9d, "usb_deregister_dev" },
	{ 0xced3ee0, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb7833ccf, "dvb_frontend_detach" },
	{ 0x5f754e5a, "memset" },
	{ 0xf2b67b10, "param_ops_short" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcf472cca, "dvb_dmxdev_release" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x3f1be133, "usb_register_dev" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x969c605a, "usb_find_interface" },
	{ 0x98ffa8ef, "dvb_register_adapter" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xbd1857b, "release_firmware" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe2b4365f, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");
