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
	{ 0x2d3385d3, "system_wq" },
	{ 0x703c95a7, "line6_version_request_async" },
	{ 0x944142e1, "line6_resume" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xed448684, "line6_probe" },
	{ 0xea1a6e88, "line6_init_midi" },
	{ 0x2452ff70, "line6_disconnect" },
	{ 0xf4deb682, "line6_start_timer" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0x3b55a46, "line6_suspend" },
	{ 0x3cad28, "_dev_info" },
	{ 0x4dffbb69, "line6_send_raw_message_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0xb2d48a2e, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6";

MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p534Dd*dc*dsc*dp*ic*isc*ip*in*");
