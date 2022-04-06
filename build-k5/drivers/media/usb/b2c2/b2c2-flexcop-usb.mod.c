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
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2640cc1d, "flexcop_device_initialize" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2d8ffa9f, "flexcop_device_kfree" },
	{ 0x4de68b87, "flexcop_sram_ctrl" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdcd6b709, "flexcop_device_kmalloc" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x1cfacefa, "flexcop_sram_set_dest" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd76060cf, "flexcop_pass_dmx_packets" },
	{ 0xf3e3cb78, "flexcop_wan_set_speed" },
	{ 0x9d669763, "memcpy" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xf3bc08dd, "flexcop_device_exit" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b2c2-flexcop";

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");
