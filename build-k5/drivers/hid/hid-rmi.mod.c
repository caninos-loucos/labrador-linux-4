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
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x22be1330, "irq_create_mapping" },
	{ 0x5d24415b, "devm_add_action" },
	{ 0x94abc6ff, "__irq_domain_add" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x230408f6, "hid_open_report" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xd9a66572, "rmi_driver_resume" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0xf0ef52e8, "down" },
	{ 0x9e3c7f96, "rmi_register_transport_device" },
	{ 0x581cde4e, "up" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x616a41c, "rmi_set_attn_data" },
	{ 0x42e7663c, "irq_set_chip_and_handler_name" },
	{ 0x4c101807, "dummy_irq_chip" },
	{ 0x44910a98, "handle_simple_irq" },
	{ 0xcd015ebf, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xab54ba21, "irq_find_mapping" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d669763, "memcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb93d65e8, "rmi_unregister_transport_device" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc7a34a36, "input_event" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x4fd1da4c, "rmi_driver_suspend" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b*g0100v*p*");
