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
	{ 0x9c2b0fe9, "ethtool_op_get_link" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x7c32d0f0, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf6b84a09, "alloc_etherdev_mqs" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x122170da, "crc32_le" },
	{ 0x5f754e5a, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaf30c919, "netif_rx" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x8742e562, "free_netdev" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");
