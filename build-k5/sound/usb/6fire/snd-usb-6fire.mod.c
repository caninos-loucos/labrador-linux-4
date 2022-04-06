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
	{ 0xf9a482f9, "msleep" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0xd19d6c4e, "usb_init_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xeb5df8cb, "snd_pcm_stop_xrun" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x56c7df0b, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0xfb9fd45b, "snd_rawmidi_new" },
	{ 0xbdd550c4, "_snd_ctl_add_slave" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x650abf66, "snd_ctl_boolean_stereo_info" },
	{ 0xd0c854f6, "snd_card_free_when_closed" },
	{ 0xd40c477, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x63d921fd, "usb_poison_urb" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xc4358701, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xcb73693a, "snd_ctl_make_virtual_master" },
	{ 0x4170086b, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa00cc9f9, "snd_ctl_new1" },
	{ 0x5a396aef, "usb_interrupt_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0xb9543f0f, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xdb92ce2d, "snd_ctl_add" },
	{ 0x8b540e58, "snd_rawmidi_transmit" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x998a5e2, "snd_rawmidi_receive" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");
