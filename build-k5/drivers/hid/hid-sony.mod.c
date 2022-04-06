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
	{ 0x445c816c, "ida_destroy" },
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xc14df2de, "input_mt_sync_frame" },
	{ 0x4958a94a, "input_mt_report_slot_state" },
	{ 0xc7a34a36, "input_event" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf1c1d013, "hid_validate_values" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0x6d623149, "input_ff_create_memless" },
	{ 0xded641fa, "input_set_capability" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0x9bac5672, "power_supply_powers" },
	{ 0xaa6adb1a, "devm_power_supply_register" },
	{ 0x2e6ee629, "devm_kasprintf" },
	{ 0x51e28c67, "devm_of_led_classdev_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x63a49532, "device_remove_file" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x21af32f7, "ida_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x71c90087, "memcmp" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x7d220ba0, "input_mt_init_slots" },
	{ 0xf83c969, "__hid_request" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0x7a132a86, "power_supply_get_drvdata" },
	{ 0x672dde0f, "input_alloc_absinfo" },
	{ 0x828e36e9, "input_set_abs_params" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x57e1efbe, "devm_input_allocate_device" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x122170da, "crc32_le" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x3cad28, "_dev_info" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");
