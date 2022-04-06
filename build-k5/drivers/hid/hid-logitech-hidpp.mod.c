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
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xf2add6d3, "input_ff_create" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0xf0ef52e8, "down" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x581cde4e, "up" },
	{ 0x230408f6, "hid_open_report" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x8d16786a, "input_free_device" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0x57e1efbe, "devm_input_allocate_device" },
	{ 0x9bac5672, "power_supply_powers" },
	{ 0xaa6adb1a, "devm_power_supply_register" },
	{ 0x91715312, "sprintf" },
	{ 0x135aaa2a, "devm_kmemdup" },
	{ 0x2e6ee629, "devm_kasprintf" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0xa6511e00, "hid_field_extract" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x7d220ba0, "input_mt_init_slots" },
	{ 0xded641fa, "input_set_capability" },
	{ 0x672dde0f, "input_alloc_absinfo" },
	{ 0x828e36e9, "input_set_abs_params" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x893f603a, "power_supply_changed" },
	{ 0x7a132a86, "power_supply_get_drvdata" },
	{ 0xb81960ca, "snprintf" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9d669763, "memcpy" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x63a49532, "device_remove_file" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3cad28, "_dev_info" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0xc14df2de, "input_mt_sync_frame" },
	{ 0x4958a94a, "input_mt_report_slot_state" },
	{ 0xc7a34a36, "input_event" },
	{ 0x783b2ca5, "input_mt_get_slot_by_key" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
