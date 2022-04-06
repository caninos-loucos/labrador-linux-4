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
	{ 0xf9a482f9, "msleep" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x546a441a, "rt2x00lib_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xfa893999, "rt2x00lib_dmastart" },
	{ 0x96bd56c4, "rt2x00queue_flush_queue" },
	{ 0x6732738, "ieee80211_alloc_hw_nm" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x102abc89, "rt2x00queue_for_each_entry" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9121cf48, "rt2x00queue_start_queue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x82366dc9, "rt2x00lib_remove_dev" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x56065156, "rt2x00queue_get_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0x734ef482, "rt2x00lib_rxdone" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x2511866e, "ieee80211_free_hw" },
	{ 0xd5c01be8, "rt2x00lib_txdone_noinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xd7856b79, "rt2x00lib_dmadone" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xb403f9c7, "rt2x00lib_probe_dev" },
	{ 0x4a8a995f, "rt2x00queue_stop_queue" },
	{ 0x51047240, "rt2x00lib_suspend" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0x9e97dad1, "__skb_pad" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "D86C2F8730AD8DAE1BB3994");
