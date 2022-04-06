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
	{ 0xa30102ec, "param_ops_bool" },
	{ 0xdd4bbd82, "usbnet_disconnect" },
	{ 0x59e26c45, "usbnet_probe" },
	{ 0x527d4727, "usbnet_set_link_ksettings" },
	{ 0x526221d3, "usbnet_get_link_ksettings" },
	{ 0x46858ad, "usbnet_get_link" },
	{ 0xd24a38a8, "usbnet_nway_reset" },
	{ 0x9c18b558, "usbnet_set_msglevel" },
	{ 0x8e4743b6, "usbnet_get_msglevel" },
	{ 0xac455996, "usbnet_get_drvinfo" },
	{ 0xae1c397b, "usbnet_get_stats64" },
	{ 0x4b54d1d1, "usbnet_tx_timeout" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0x9286c276, "eth_mac_addr" },
	{ 0xc2ba555a, "usbnet_start_xmit" },
	{ 0x320d5139, "usbnet_stop" },
	{ 0x353c58e4, "usbnet_open" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x64447c5, "usbnet_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x753dc072, "of_get_mac_address" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x1e2c95fc, "usbnet_get_endpoints" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4914320, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaed406b8, "mii_ethtool_gset" },
	{ 0x588902e3, "mii_check_media" },
	{ 0xcb75ef8e, "usbnet_resume" },
	{ 0x4bb41010, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa933ed00, "usbnet_skb_return" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x70af94b, "usbnet_defer_kevent" },
	{ 0xf102732a, "crc16" },
	{ 0x2f0b6a54, "generic_mii_ioctl" },
	{ 0xcb0516a5, "usbnet_change_mtu" },
	{ 0x4303eb4, "device_set_wakeup_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xffa267f4, "__dynamic_netdev_dbg" },
	{ 0x122170da, "crc32_le" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5f754e5a, "memset" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1dd5be4a, "usbnet_read_cmd_nopm" },
	{ 0x9dd3216b, "usbnet_read_cmd" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa65f33a9, "netdev_warn" },
	{ 0x6770902d, "usbnet_write_cmd_nopm" },
	{ 0x3a66feed, "usbnet_write_cmd" },
	{ 0xb881e2f1, "__dev_kfree_skb_any" },
	{ 0x101f6d13, "skb_push" },
	{ 0xf1512f9d, "pskb_expand_head" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");
