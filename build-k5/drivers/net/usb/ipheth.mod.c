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
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x7ce7ec83, "netif_carrier_on" },
	{ 0xe1b4cf22, "netif_tx_stop_all_queues" },
	{ 0x7f261041, "netif_carrier_off" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x4d9c3a1b, "usb_altnum_to_altsetting" },
	{ 0xf6b84a09, "alloc_etherdev_mqs" },
	{ 0xaf30c919, "netif_rx" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3cad28, "_dev_info" },
	{ 0x8742e562, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp1290d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1292d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1294d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1297d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Ad*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A2d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A6d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Cd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A0d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*icFFiscFDip01in*");
