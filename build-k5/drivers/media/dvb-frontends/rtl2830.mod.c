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
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x3365bd8d, "__i2c_transfer" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8733236, "intlog10" },
	{ 0x3cad28, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x7b020b9d, "i2c_mux_add_adapter" },
	{ 0x96365041, "i2c_mux_alloc" },
	{ 0xe906c111, "__regmap_init" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x2d9c1f0b, "regmap_bulk_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8bc788c9, "regmap_bulk_write" },
	{ 0xcb1781ad, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cd92600, "regmap_exit" },
	{ 0xa6b40c64, "i2c_mux_del_adapters" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:rtl2830");
