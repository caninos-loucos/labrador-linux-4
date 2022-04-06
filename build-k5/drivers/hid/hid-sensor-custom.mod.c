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
	{ 0x6cea701, "noop_llseek" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0x1cc6920d, "misc_deregister" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x39869399, "nonseekable_open" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xebf5493b, "misc_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xb859f38b, "krealloc" },
	{ 0x7c09c43, "sensor_hub_remove_callback" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{  0x1376b, "sensor_hub_register_callback" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xab694444, "bsearch" },
	{ 0x39a2a244, "sensor_hub_input_attr_get_raw_value" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3e26f742, "sensor_hub_get_feature" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x91715312, "sprintf" },
	{ 0x22abd420, "sensor_hub_device_open" },
	{ 0x2fc78645, "sensor_hub_device_close" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x373db350, "kstrtoint" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x220d44b7, "sensor_hub_set_feature" },
	{ 0xbb8872d2, "hid_sensor_get_usage_index" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub";

MODULE_ALIAS("platform:HID-SENSOR-2000e1");
MODULE_ALIAS("platform:HID-SENSOR-2000e2");
