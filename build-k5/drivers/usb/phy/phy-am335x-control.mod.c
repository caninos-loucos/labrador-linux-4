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
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xd78c1600, "of_parse_phandle" },
	{ 0x94f9aeaf, "platform_bus_type" },
	{ 0x71160775, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0xa5be3231, "of_match_node" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x88f2faad, "bus_find_device" },
	{ 0x38c9845a, "put_device" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaaeab9d5, "platform_get_resource_byname" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0x121a4d36, "of_node_put" },
	{ 0x4b7b6251, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am335x-usb-ctrl-module");
MODULE_ALIAS("of:N*T*Cti,am335x-usb-ctrl-moduleC*");
