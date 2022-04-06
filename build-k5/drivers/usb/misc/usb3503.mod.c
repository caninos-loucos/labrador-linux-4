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
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0xf11b5ed8, "__devm_regmap_init_i2c" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x97ba944f, "of_get_named_gpio_flags" },
	{ 0xf231a449, "of_get_property" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x792f2fa0, "devm_clk_get" },
	{ 0xcbf0bc36, "of_property_read_variable_u32_array" },
	{ 0x9cd8b1ce, "devm_gpio_request_one" },
	{ 0xfdb02f70, "gpiod_set_raw_value_cansleep" },
	{ 0xb174334b, "gpio_to_desc" },
	{ 0x3cad28, "_dev_info" },
	{ 0xcb1781ad, "regmap_update_bits_base" },
	{ 0x9844e8ec, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Csmsc,usb3503");
MODULE_ALIAS("of:N*T*Csmsc,usb3503C*");
MODULE_ALIAS("of:N*T*Csmsc,usb3503a");
MODULE_ALIAS("of:N*T*Csmsc,usb3503aC*");
MODULE_ALIAS("i2c:usb3503");
