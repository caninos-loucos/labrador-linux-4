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
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0xd19d6c4e, "usb_init_urb" },
	{ 0x4bbc4530, "snd_pcm_hw_constraint_msbits" },
	{ 0xeb5df8cb, "snd_pcm_stop_xrun" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0xd0c854f6, "snd_card_free_when_closed" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd40c477, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xd721cf28, "usb_driver_claim_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xab550a43, "__snd_usbmidi_create" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x4170086b, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x6af15773, "usb_driver_release_interface" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x3a0057a7, "snd_pcm_hw_constraint_minmax" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb9543f0f, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usbmidi-lib";

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");
