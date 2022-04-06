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
	{ 0x20da465f, "ieee80211_rx_napi" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xfc305db, "rtl_deinit_deferred_work" },
	{ 0x3b30f734, "rtl_deinit_core" },
	{ 0x77e58a3a, "usb_get_from_anchor" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x92c9d6aa, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xdc8d92fc, "_rtl_dbg_trace" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x6732738, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x44afa7c4, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9941c690, "rtl_action_proc" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf8ff6add, "rtl_lps_change_work_callback" },
	{ 0x45d63928, "rtl_init_rx_config" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0xa1949ba4, "ieee80211_tx_status_irqsafe" },
	{ 0x1201ab49, "rtl_ops" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x302cb88d, "ieee80211_register_hw" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2511866e, "ieee80211_free_hw" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xeef8e243, "rtl_beacon_statistic" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";

