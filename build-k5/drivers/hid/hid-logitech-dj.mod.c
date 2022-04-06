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
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x581cde4e, "up" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0xf1c1d013, "hid_validate_values" },
	{ 0x230408f6, "hid_open_report" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x4bb7232d, "hid_add_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbc37ab0b, "hid_allocate_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf83c969, "__hid_request" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x75915ac7, "hid_input_report" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x2e7c5185, "hid_parse_report" },
	{ 0x9d669763, "memcpy" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x462e6bc1, "hid_destroy_device" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x5495392, "hid_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
