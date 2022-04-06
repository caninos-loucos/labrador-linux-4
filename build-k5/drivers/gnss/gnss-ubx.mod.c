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
	{ 0xb70a96a, "regulator_disable" },
	{ 0xf0c12de7, "gnss_serial_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x844e91f7, "__serdev_device_driver_register" },
	{ 0xcd2ffc0b, "gnss_serial_allocate" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0x9cbe08f, "devm_regulator_get" },
	{ 0x3aff5fec, "gnss_serial_deregister" },
	{ 0x1f8a7109, "devm_regulator_get_optional" },
	{ 0x430efe02, "gnss_serial_pm_ops" },
	{ 0xad9cf259, "gnss_serial_register" },
	{ 0xddfdd74f, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gnss-serial,serdev";

MODULE_ALIAS("of:N*T*Cu-blox,neo-8");
MODULE_ALIAS("of:N*T*Cu-blox,neo-8C*");
MODULE_ALIAS("of:N*T*Cu-blox,neo-m8");
MODULE_ALIAS("of:N*T*Cu-blox,neo-m8C*");
