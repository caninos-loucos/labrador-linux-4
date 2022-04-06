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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x764cc9ce, "em28xx_register_extension" },
	{ 0xc0c40a9a, "snd_pcm_stream_lock" },
	{ 0x91715312, "sprintf" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0x50a44ab0, "snd_pcm_hw_constraint_integer" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xde102631, "em28xx_read_ac97" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x90d91075, "em28xx_write_ac97" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0xa622424d, "em28xx_unregister_extension" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xc4358701, "snd_ctl_boolean_mono_info" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x53c8f876, "snd_pcm_stream_unlock" },
	{ 0xa00cc9f9, "snd_ctl_new1" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3a0057a7, "snd_pcm_hw_constraint_minmax" },
	{ 0xeca82189, "snd_card_free" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0xff7866e3, "vmalloc_to_page" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0xdb92ce2d, "snd_ctl_add" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x45f109d0, "em28xx_audio_analog_set" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "9AC263912702EF478AB0231");
