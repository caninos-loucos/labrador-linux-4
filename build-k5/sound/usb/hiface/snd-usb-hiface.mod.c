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
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0xd19d6c4e, "usb_init_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x830851cb, "snd_pcm_hw_constraint_list" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0xd0c854f6, "snd_card_free_when_closed" },
	{ 0xd40c477, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7aa1a55c, "usb_urb_ep_type_check" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x4170086b, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0xb9543f0f, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xdd73e233, "usb_anchor_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04B4p0384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p930Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp932Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v245Fp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25C6p9002d*dc*dsc*dp*ic*isc*ip*in*");
