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
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x56c7df0b, "snd_rawmidi_set_ops" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0xfb9fd45b, "snd_rawmidi_new" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xd0c854f6, "snd_card_free_when_closed" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x7aa1a55c, "usb_urb_ep_type_check" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8b540e58, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x998a5e2, "snd_rawmidi_receive" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1397p00BDd*dc*dsc*dp*ic*isc*ip*in*");
