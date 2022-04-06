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
	{ 0x2d3385d3, "system_wq" },
	{ 0x63a49532, "device_remove_file" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x119af839, "generic_file_llseek" },
	{ 0x230408f6, "hid_open_report" },
	{ 0xf89db10c, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0x6d623149, "input_ff_create_memless" },
	{ 0xe35c1c18, "single_release" },
	{ 0x3c5557f1, "power_supply_unregister" },
	{ 0x1bc4846b, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x219fd890, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x9bac5672, "power_supply_powers" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5109164d, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0x46e29c5a, "seq_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x828e36e9, "input_set_abs_params" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x70473684, "of_led_classdev_register" },
	{ 0xc7a34a36, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7a132a86, "power_supply_get_drvdata" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x93fccabe, "debugfs_remove" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x712c331b, "simple_open" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0x3cad28, "_dev_info" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x38c9845a, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x8d16786a, "input_free_device" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3fcb38d6, "get_device" },
	{ 0xb8fdac6b, "led_classdev_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xd75a2c88, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab619f5, "input_unregister_device" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x32f2a2c3, "power_supply_register" },
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x712ffc59, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");
