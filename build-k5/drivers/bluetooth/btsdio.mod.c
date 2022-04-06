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
	{ 0xd7442057, "bt_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x559eca6d, "hci_register_dev" },
	{ 0x6900bfc4, "hci_alloc_dev" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x94f7a29, "skb_queue_head" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x9bae7d3b, "sdio_writesb" },
	{ 0x101f6d13, "skb_push" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x2be2833, "hci_recv_frame" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x53123467, "sdio_readsb" },
	{ 0x1dfe7453, "sdio_readb" },
	{ 0xc072aa9, "sdio_claim_irq" },
	{ 0x642d2e6d, "sdio_enable_func" },
	{ 0x39b9ed23, "sdio_release_host" },
	{ 0x3a3c4bf9, "sdio_disable_func" },
	{ 0x65811dbb, "sdio_release_irq" },
	{ 0xef682093, "sdio_writeb" },
	{ 0x623e05c3, "sdio_claim_host" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x2a3ea407, "hci_free_dev" },
	{ 0x165b68a4, "hci_unregister_dev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "2452201ABD58B1B2EF107BB");
