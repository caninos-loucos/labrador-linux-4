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
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x70473684, "of_led_classdev_register" },
	{ 0xf1c1d013, "hid_validate_values" },
	{ 0x97255bdf, "strlen" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0x71c90087, "memcmp" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x373db350, "kstrtoint" },
	{ 0xf83c969, "__hid_request" },
	{ 0xb8fdac6b, "led_classdev_unregister" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xc7a34a36, "input_event" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");
MODULE_ALIAS("hid:b0003g*v000004B3p00003100");
MODULE_ALIAS("hid:b0003g*v000004B3p00003103");
MODULE_ALIAS("hid:b0003g*v000004B3p00003105");
MODULE_ALIAS("hid:b0003g*v000004B3p00003108");
MODULE_ALIAS("hid:b0003g*v000004B3p00003109");
MODULE_ALIAS("hid:b0003g*v000017EFp00006049");
