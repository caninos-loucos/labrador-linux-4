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
	{ 0x42b35679, "__hci_cmd_sync" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x47022514, "bt_err" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0xd7442057, "bt_info" },
	{ 0xe906c111, "__regmap_init" },
	{ 0x71c90087, "memcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x213b5855, "request_firmware_direct" },
	{ 0x8f0a1a8a, "hci_cmd_sync" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xbd1857b, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B978516D847A719EA755825");
