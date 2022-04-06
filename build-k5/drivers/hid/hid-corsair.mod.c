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
	{ 0x820b8ed, "param_array_ops" },
	{ 0x34e11988, "param_ops_ushort" },
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x70473684, "of_led_classdev_register" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x373db350, "kstrtoint" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb8fdac6b, "led_classdev_unregister" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B02");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B34");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B3E");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B09");