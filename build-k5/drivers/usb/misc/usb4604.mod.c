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
	{ 0x49807b12, "i2c_register_driver" },
	{ 0xcbf0bc36, "of_property_read_variable_u32_array" },
	{ 0x5d160f2, "devm_gpiod_get_optional" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x1a476d1e, "i2c_transfer_buffer_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0x54924b08, "gpiod_set_value_cansleep" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Csmsc,usb4604");
MODULE_ALIAS("of:N*T*Csmsc,usb4604C*");
MODULE_ALIAS("i2c:usb4604");
