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
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0x3cad28, "_dev_info" },
	{ 0x1b49b3ae, "devm_kfree" },
	{ 0x84b183ae, "strncmp" },
	{ 0x66ba57fc, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00005543p00000042");
MODULE_ALIAS("hid:b0003g*v00005543p00000003");
MODULE_ALIAS("hid:b0003g*v00005543p00000004");
MODULE_ALIAS("hid:b0003g*v00005543p00000005");
MODULE_ALIAS("hid:b0003g*v00005543p00000064");
MODULE_ALIAS("hid:b0003g*v00005543p00000522");
MODULE_ALIAS("hid:b0003g*v00005543p00000781");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006E");
MODULE_ALIAS("hid:b0003g*v00005543p0000006E");
MODULE_ALIAS("hid:b0003g*v00005543p0000004D");
MODULE_ALIAS("hid:b0003g*v00005543p00000081");
MODULE_ALIAS("hid:b0003g*v00005543p00000045");
MODULE_ALIAS("hid:b0003g*v00005543p00003031");
MODULE_ALIAS("hid:b0003g*v00002179p00000053");
MODULE_ALIAS("hid:b0003g*v000028BDp00000071");
