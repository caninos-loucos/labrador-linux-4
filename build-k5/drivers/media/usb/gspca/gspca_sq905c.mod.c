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
	{ 0xed9caf03, "gspca_suspend" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa6eed98, "gspca_dev_probe" },
	{ 0x748a4297, "gspca_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x70f7d410, "gspca_disconnect" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f517289, "gspca_frame_add" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v2770p905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p913Dd*dc*dsc*dp*ic*isc*ip*in*");