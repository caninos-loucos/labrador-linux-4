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
	{ 0x2452ff70, "line6_disconnect" },
	{ 0xf4deb682, "line6_start_timer" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xd721cf28, "usb_driver_claim_interface" },
	{ 0x6006db1f, "snd_card_add_dev_attr" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x19a5dfbc, "line6_init_pcm" },
	{ 0x3b55a46, "line6_suspend" },
	{ 0x8074b55d, "line6_read_data" },
	{ 0x6af15773, "usb_driver_release_interface" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6";

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");
