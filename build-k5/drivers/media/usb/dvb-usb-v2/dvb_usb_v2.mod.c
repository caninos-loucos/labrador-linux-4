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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x13142d50, "rc_unregister_device" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x8087faee, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x69db6ba5, "dvb_frontend_suspend" },
	{ 0xb58755e6, "dvb_register_frontend" },
	{ 0x9d4a42f, "dvb_frontend_resume" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xced3ee0, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe6e562c8, "rc_allocate_device" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xaedbba57, "dvb_net_release" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0xb7833ccf, "dvb_frontend_detach" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x21381c3b, "dvb_dmx_swfilter_raw" },
	{ 0xb36b25b5, "rc_free_device" },
	{ 0xcf472cca, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xdd82e3ac, "dvb_net_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xae5c589, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xedda2b2f, "dvb_dmx_swfilter_204" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x98ffa8ef, "dvb_register_adapter" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xbd1857b, "release_firmware" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xe2b4365f, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7DA5EDD22CD7BE0AA1DB563");
