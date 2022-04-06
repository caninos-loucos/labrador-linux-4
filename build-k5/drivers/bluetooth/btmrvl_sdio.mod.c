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
	{ 0x449eca8d, "sdio_unregister_driver" },
	{ 0x27a94d66, "sdio_register_driver" },
	{ 0x3438135d, "btmrvl_send_module_cfg_cmd" },
	{ 0x6d9016a0, "btmrvl_remove_card" },
	{ 0x2be2833, "hci_recv_frame" },
	{ 0x39d7fcc4, "btmrvl_check_evtpkt" },
	{ 0x3b304353, "btmrvl_process_event" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x3a3c4bf9, "sdio_disable_func" },
	{ 0x65811dbb, "sdio_release_irq" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
	{ 0xbd1857b, "release_firmware" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x9519def1, "btmrvl_register_hdev" },
	{ 0x5d2fff77, "btmrvl_add_card" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xf2304d7f, "irq_of_parse_and_map" },
	{ 0xa5be3231, "of_match_node" },
	{ 0x6964e92b, "sdio_set_block_size" },
	{ 0xc072aa9, "sdio_claim_irq" },
	{ 0x642d2e6d, "sdio_enable_func" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb80c899e, "btmrvl_interrupt" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x53123467, "sdio_readsb" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x7a462eea, "pm_wakeup_dev_event" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x9bae7d3b, "sdio_writesb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1b1d2b5, "sdio_set_host_pm_flags" },
	{ 0x6fdd31a1, "btmrvl_enable_hs" },
	{ 0xb624707c, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x48252fbd, "hci_resume_dev" },
	{ 0xe072e69e, "sdio_get_host_pm_caps" },
	{ 0xb646231f, "dev_coredumpv" },
	{ 0x9d669763, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7442057, "bt_info" },
	{ 0x1dfe7453, "sdio_readb" },
	{ 0x2cc30d57, "sdio_f0_readb" },
	{ 0x91715312, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47022514, "bt_err" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x39b9ed23, "sdio_release_host" },
	{ 0xef682093, "sdio_writeb" },
	{ 0x623e05c3, "sdio_claim_host" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "645CE23F6DC16D4E897ADEB");
