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
	{ 0xfc659e4e, "param_get_uint" },
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x672dde0f, "input_alloc_absinfo" },
	{ 0x828e36e9, "input_set_abs_params" },
	{ 0x7d220ba0, "input_mt_init_slots" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x10feabcb, "hid_register_report" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x2528256d, "input_mt_report_pointer_emulation" },
	{ 0x4958a94a, "input_mt_report_slot_state" },
	{ 0xc7a34a36, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");