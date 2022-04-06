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
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x8733236, "intlog10" },
	{ 0x5f754e5a, "memset" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9d669763, "memcpy" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe395e47e, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tc90522sat");
MODULE_ALIAS("i2c:tc90522ter");
