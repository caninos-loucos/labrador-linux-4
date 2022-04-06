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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x81bcc32f, "usb_stor_set_xfer_buf" },
	{ 0x87ec897e, "usb_stor_bulk_transfer_buf" },
	{ 0x1b41ebd7, "usb_stor_access_xfer_buf" },
	{ 0xae6d5718, "usb_stor_post_reset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcf9061c3, "usb_stor_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2477f498, "usb_stor_probe2" },
	{ 0xe7b70134, "fill_inquiry_response" },
	{ 0x80fa4539, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81efa947, "usb_stor_pre_reset" },
	{ 0x69a12125, "usb_stor_reset_resume" },
	{ 0x45dc34a3, "usb_stor_suspend" },
	{ 0x5f22f04b, "usb_stor_probe1" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xeef69b1a, "usb_stor_resume" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v07C4pA103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C0BpA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v55AApA103d*dc*dsc*dp*ic*isc*ip*in*");
