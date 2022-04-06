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
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x380bb971, "gpiochip_irqchip_add_key" },
	{ 0x44910a98, "handle_simple_irq" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xbf61fc05, "gpiochip_add_data_with_key" },
	{ 0xf0ef52e8, "down" },
	{ 0xb97363b1, "i2c_add_adapter" },
	{ 0x581cde4e, "up" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3cad28, "_dev_info" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x5f754e5a, "memset" },
	{ 0x726379e3, "sysfs_chmod_file" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xccd0687d, "irq_get_irq_data" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2529d58, "gpiochip_get_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0x412e8ae9, "gpiochip_remove" },
	{ 0xacb38e00, "gpiochip_free_own_desc" },
	{ 0x6a487926, "gpiochip_unlock_as_irq" },
	{ 0xa7a723f4, "i2c_del_adapter" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000010C4p0000EA90");
