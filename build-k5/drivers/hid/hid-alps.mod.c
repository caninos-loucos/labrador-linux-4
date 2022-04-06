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
	{ 0xc14df2de, "input_mt_sync_frame" },
	{ 0x4958a94a, "input_mt_report_slot_state" },
	{ 0xc7a34a36, "input_event" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8d16786a, "input_free_device" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0x712ffc59, "input_allocate_device" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xf0ef52e8, "down" },
	{ 0x7d220ba0, "input_mt_init_slots" },
	{ 0x672dde0f, "input_alloc_absinfo" },
	{ 0x828e36e9, "input_set_abs_params" },
	{ 0x581cde4e, "up" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b*g*v0000044Ep0000120B");
MODULE_ALIAS("hid:b*g*v0000044Ep00001215");
MODULE_ALIAS("hid:b*g*v0000044Ep0000120C");
