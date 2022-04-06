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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x7b020b9d, "i2c_mux_add_adapter" },
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0x8be8f6a0, "regmap_multi_reg_write" },
	{ 0xcb1781ad, "regmap_update_bits_base" },
	{ 0xa6b40c64, "i2c_mux_del_adapters" },
	{ 0x2d9c1f0b, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x8bc788c9, "regmap_bulk_write" },
	{ 0x589ff94e, "regmap_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x96365041, "i2c_mux_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb00ec2d9, "i2c_unregister_device" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0x3cad28, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf11b5ed8, "__devm_regmap_init_i2c" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3365bd8d, "__i2c_transfer" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9844e8ec, "regmap_write" },
	{ 0x76bb0edb, "i2c_new_device" },
	{ 0xbd1857b, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:m88ds3103");
