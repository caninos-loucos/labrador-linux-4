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
	{ 0x2d3385d3, "system_wq" },
	{ 0xae053585, "em28xx_read_reg" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x13142d50, "rc_unregister_device" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x3641fd60, "em28xx_write_regs" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xe395e47e, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x764cc9ce, "em28xx_register_extension" },
	{ 0xe6e562c8, "rc_allocate_device" },
	{ 0xc7a34a36, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x7d5db7ab, "em28xx_find_led" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0xb36b25b5, "rc_free_device" },
	{ 0xf4b8ba14, "em28xx_toggle_reg_bits" },
	{ 0xf8658d52, "rc_keydown" },
	{ 0xa622424d, "em28xx_unregister_extension" },
	{ 0xae5c589, "rc_register_device" },
	{ 0x63311e4c, "em28xx_write_reg_bits" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x3cad28, "_dev_info" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0x8d16786a, "input_free_device" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x1a476d1e, "i2c_transfer_buffer_flags" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xeab619f5, "input_unregister_device" },
	{ 0x5c6e85a, "i2c_probe_func_quick_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x36e34964, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x712ffc59, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "00591157FC994EC12459052");
