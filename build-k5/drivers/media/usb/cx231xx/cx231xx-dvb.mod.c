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
	{ 0x820b8ed, "param_array_ops" },
	{ 0xf2b67b10, "param_ops_short" },
	{ 0xa70caf1a, "cx231xx_unregister_extension" },
	{ 0xe7e7dee5, "cx231xx_register_extension" },
	{ 0x7c32d0f0, "printk" },
	{ 0x402b8281, "__request_module" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x78f0c99a, "dvb_module_probe" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3cad28, "_dev_info" },
	{ 0xdd82e3ac, "dvb_net_init" },
	{ 0xe2b4365f, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xb58755e6, "dvb_register_frontend" },
	{ 0x98ffa8ef, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x32f87c33, "cx231xx_demod_reset" },
	{ 0x1d0e94b7, "cx231xx_get_i2c_adap" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xa21ba73a, "dvb_module_release" },
	{ 0x8087faee, "dvb_unregister_adapter" },
	{ 0xb7833ccf, "dvb_frontend_detach" },
	{ 0xced3ee0, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xcf472cca, "dvb_dmxdev_release" },
	{ 0xaedbba57, "dvb_net_release" },
	{ 0x8e4c3d13, "cx231xx_init_bulk" },
	{ 0xf8426000, "cx231xx_init_isoc" },
	{ 0x5e004d10, "cx231xx_set_alt_setting" },
	{ 0x7974f3aa, "cx231xx_uninit_isoc" },
	{ 0x4f21ad97, "cx231xx_uninit_bulk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x373bdaf7, "cx231xx_set_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";

