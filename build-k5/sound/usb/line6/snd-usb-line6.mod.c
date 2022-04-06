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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x37f614b7, "__kfifo_len_r" },
	{ 0xe50eca7e, "snd_pcm_period_elapsed" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xa6970398, "__kfifo_to_user_r" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x56c7df0b, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfb9fd45b, "snd_rawmidi_new" },
	{ 0xd989ae62, "snd_pcm_suspend_all" },
	{ 0xeb55a931, "__kfifo_max_r" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdafc7ea6, "snd_pcm_set_ops" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0xd0c854f6, "snd_card_free_when_closed" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x55eca54a, "snd_rawmidi_transmit_peek" },
	{ 0x46000206, "snd_hwdep_new" },
	{ 0x9bd6fe9f, "snd_pcm_lib_free_pages" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4478ce5f, "snd_pcm_lib_ioctl" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa777249d, "snd_pcm_lib_malloc_pages" },
	{ 0x7aa1a55c, "usb_urb_ep_type_check" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0xf0982711, "snd_pcm_hw_constraint_ratdens" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xc8b575cd, "snd_rawmidi_transmit_ack" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xa00cc9f9, "snd_ctl_new1" },
	{ 0x2ec524ad, "__kfifo_in_r" },
	{ 0x5a396aef, "usb_interrupt_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xef9fae2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8c959533, "snd_pcm_new" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xdb92ce2d, "snd_ctl_add" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x998a5e2, "snd_rawmidi_receive" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hwdep";

