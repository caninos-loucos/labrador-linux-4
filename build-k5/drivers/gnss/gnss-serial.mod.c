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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xffc61cc3, "__pm_runtime_idle" },
	{ 0x477a2f91, "__pm_runtime_disable" },
	{ 0xc8afa7cf, "gnss_put_device" },
	{ 0x7fe09bee, "gnss_register_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x86812242, "serdev_device_close" },
	{ 0x8ad04752, "__pm_runtime_resume" },
	{ 0x1e4c8319, "gnss_deregister_device" },
	{ 0x5953e6ea, "gnss_allocate_device" },
	{ 0x669146d7, "serdev_device_wait_until_sent" },
	{ 0xea67a762, "serdev_device_write" },
	{ 0x354bbb5c, "serdev_device_write_wakeup" },
	{ 0x3cee98c5, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2b1ef447, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x6acde4c7, "serdev_device_set_flow_control" },
	{ 0x537206af, "gnss_insert_raw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x97b61906, "serdev_device_set_baudrate" },
	{ 0xcbf0bc36, "of_property_read_variable_u32_array" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serdev";

