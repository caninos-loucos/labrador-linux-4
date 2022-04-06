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
	{ 0xef682093, "sdio_writeb" },
	{ 0x1dfe7453, "sdio_readb" },
	{ 0xe3e6e4b0, "bus_register" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x60e98796, "driver_register" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x350001e1, "_dev_emerg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7cd20bf4, "sdio_writel" },
	{ 0x5f754e5a, "memset" },
	{ 0xc2e3b2a2, "device_register" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe97c4103, "ioremap" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0xe4c3e559, "sdio_readl" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x22b5d74c, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3cad28, "_dev_info" },
	{ 0x38c9845a, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3fcb38d6, "get_device" },
	{ 0xaf9d0389, "sdio_writew" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc7c57509, "sdio_readw" },
	{ 0x623e05c3, "sdio_claim_host" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x39b9ed23, "sdio_release_host" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

