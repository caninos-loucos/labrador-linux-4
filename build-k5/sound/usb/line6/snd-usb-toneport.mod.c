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
	{ 0x4bd9c00c, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x944142e1, "line6_resume" },
	{ 0xed448684, "line6_probe" },
	{ 0x55d56906, "line6_write_data" },
	{ 0x2452ff70, "line6_disconnect" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x223af27e, "line6_pcm_release" },
	{ 0x70473684, "of_led_classdev_register" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x571bb64, "line6_pcm_acquire" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x19a5dfbc, "line6_init_pcm" },
	{ 0x3b55a46, "line6_suspend" },
	{ 0x8074b55d, "line6_read_data" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xa00cc9f9, "snd_ctl_new1" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xb8fdac6b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdb92ce2d, "snd_ctl_add" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6";

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");
