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
	{ 0xa622424d, "em28xx_unregister_extension" },
	{ 0x764cc9ce, "em28xx_register_extension" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x78f0c99a, "dvb_module_probe" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdd82e3ac, "dvb_net_init" },
	{ 0xe2b4365f, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xb58755e6, "dvb_register_frontend" },
	{ 0x98ffa8ef, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x6062e7f1, "em28xx_alloc_urbs" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x7c32d0f0, "printk" },
	{ 0x402b8281, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x50e1de46, "em28xx_setup_xc3028" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x37a0cba, "kfree" },
	{ 0xa21ba73a, "dvb_module_release" },
	{ 0x8087faee, "dvb_unregister_adapter" },
	{ 0xb7833ccf, "dvb_frontend_detach" },
	{ 0xced3ee0, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xcf472cca, "dvb_dmxdev_release" },
	{ 0xaedbba57, "dvb_net_release" },
	{ 0xb815c3f9, "em28xx_uninit_usb_xfer" },
	{ 0x69db6ba5, "dvb_frontend_suspend" },
	{ 0x9d4a42f, "dvb_frontend_resume" },
	{ 0x3cad28, "_dev_info" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x835b7fe8, "em28xx_init_usb_xfer" },
	{ 0x9b69ea19, "em28xx_stop_urbs" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x63311e4c, "em28xx_write_reg_bits" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1a476d1e, "i2c_transfer_buffer_flags" },
	{ 0x36e34964, "em28xx_write_reg" },
	{ 0xc506d0be, "em28xx_gpio_set" },
	{ 0x9d669763, "memcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf0ef52e8, "down" },
	{ 0x581cde4e, "up" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xdd3d6181, "em28xx_set_mode" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "439E6B96ACA0A62F28A16A4");
