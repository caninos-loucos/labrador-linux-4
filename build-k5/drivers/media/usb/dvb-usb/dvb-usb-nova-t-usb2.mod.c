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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x40852e6b, "dibusb_read_eeprom_byte" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x98cb19da, "dvb_usb_device_exit" },
	{ 0xea02684, "dvb_usb_device_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xaacb913f, "dibusb_pid_filter" },
	{ 0xf2b67b10, "param_ops_short" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xbdf7d35e, "dibusb2_0_power_ctrl" },
	{ 0x8868a530, "dibusb_dib3000mc_frontend_attach" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x3823d2a6, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0x51134f65, "dibusb_dib3000mc_tuner_attach" },
	{ 0xffc80693, "dibusb2_0_streaming_ctrl" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x5adc6f85, "dibusb_i2c_algo" },
	{ 0x2691965a, "dibusb_pid_filter_ctrl" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common";

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6D29CFC73B09A4B46EE299B");
