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
	{ 0xd787d6b9, "smscore_register_hotplug" },
	{ 0x63510455, "smscore_get_board_id" },
	{ 0x2e5450f, "sms_board_setup" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x8087faee, "dvb_unregister_adapter" },
	{ 0xe68453da, "sms_board_event" },
	{ 0xb58755e6, "dvb_register_frontend" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0xced3ee0, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf2b67b10, "param_ops_short" },
	{ 0x63222b29, "smsclient_sendrequest" },
	{ 0xcf472cca, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x42076b0f, "sms_board_lna_control" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x40b53c4a, "smscore_putbuffer" },
	{ 0x8f0dd5e3, "smscore_unregister_hotplug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x98ffa8ef, "dvb_register_adapter" },
	{ 0x613dd25c, "sms_board_power" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xcecc5aef, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x820b8ed, "param_array_ops" },
	{ 0xdfab64c2, "smscore_register_client" },
	{ 0xb80af2d3, "smscore_get_device_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xe2b4365f, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

