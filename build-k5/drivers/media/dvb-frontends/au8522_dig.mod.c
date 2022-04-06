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
	{ 0xad619cd3, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x516c87ca, "au8522_led_ctrl" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x8872ac9d, "au8522_writereg" },
	{ 0x3e748aca, "au8522_readreg" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9fb2168e, "au8522_i2c_gate_ctrl" },
	{ 0x9c5d8865, "au8522_sleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9ecda91d, "au8522_analog_i2c_gate_ctrl" },
	{ 0x92d02cb5, "au8522_get_state" },
	{ 0x9d669763, "memcpy" },
	{ 0xa4e63c30, "au8522_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";

