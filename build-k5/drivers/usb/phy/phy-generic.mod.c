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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3f0aa8a1, "usb_remove_phy" },
	{ 0x815588a6, "clk_enable" },
	{ 0x74b49675, "gpiod_direction_output" },
	{ 0xb70a96a, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb174334b, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3653ec7a, "platform_device_register_full" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0xfe0bbbd2, "atomic_notifier_call_chain" },
	{ 0x5f754e5a, "memset" },
	{ 0x15f4401a, "of_find_property" },
	{ 0xa7156b9, "platform_device_unregister" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x9cd8b1ce, "devm_gpio_request_one" },
	{ 0x9cbe08f, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x792f2fa0, "devm_clk_get" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5d160f2, "devm_gpiod_get_optional" },
	{ 0x6a5dc53d, "gpiod_get_value" },
	{ 0xb88821d1, "usb_add_phy_dev" },
	{ 0x18b23fba, "gpiod_to_irq" },
	{ 0xfd071e60, "regulator_set_current_limit" },
	{ 0x54924b08, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0xcbf0bc36, "of_property_read_variable_u32_array" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
	{ 0xddfdd74f, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cusb-nop-xceiv");
MODULE_ALIAS("of:N*T*Cusb-nop-xceivC*");
