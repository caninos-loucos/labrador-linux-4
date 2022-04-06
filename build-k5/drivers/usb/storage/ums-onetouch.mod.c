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
	{ 0xae6d5718, "usb_stor_post_reset" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xcf9061c3, "usb_stor_disconnect" },
	{ 0xc7a34a36, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2477f498, "usb_stor_probe2" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x80fa4539, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0x81efa947, "usb_stor_pre_reset" },
	{ 0x69a12125, "usb_stor_reset_resume" },
	{ 0x45dc34a3, "usb_stor_suspend" },
	{ 0x8d16786a, "input_free_device" },
	{ 0x5f22f04b, "usb_stor_probe1" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xeef69b1a, "usb_stor_resume" },
	{ 0xeab619f5, "input_unregister_device" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0x712ffc59, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");
