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
	{ 0x70d7eddf, "is_fw_load" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0x689db648, "_snd_pcm_stream_lock_irqsave" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0x50a44ab0, "snd_pcm_hw_constraint_integer" },
	{ 0xe7e7dee5, "cx231xx_register_extension" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x788f8173, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8521cd0c, "cx231xx_capture_start" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5e004d10, "cx231xx_set_alt_setting" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0xff7866e3, "vmalloc_to_page" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xa70caf1a, "cx231xx_unregister_extension" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";

