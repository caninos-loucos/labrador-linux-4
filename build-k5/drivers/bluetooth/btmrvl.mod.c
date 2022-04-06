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
	{ 0x94f7a29, "skb_queue_head" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x4a07c33b, "debugfs_create_dir" },
	{ 0x18014b30, "debugfs_create_u8" },
	{ 0x42b35679, "__hci_cmd_sync" },
	{ 0x559eca6d, "hci_register_dev" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5109164d, "debugfs_create_file" },
	{ 0x165b68a4, "hci_unregister_dev" },
	{ 0xece092ff, "debugfs_remove_recursive" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x47022514, "bt_err" },
	{ 0x25e23da6, "debugfs_create_x16" },
	{ 0x9d76874, "of_property_read_variable_u8_array" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x12e85778, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0xa6c641e8, "default_llseek" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x1161fec8, "kthread_stop" },
	{ 0x6900bfc4, "hci_alloc_dev" },
	{ 0x101f6d13, "skb_push" },
	{ 0x712c331b, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xe78e76a, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2a3ea407, "hci_free_dev" },
	{ 0x3fbc8ee8, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F1FC12511476C0DEC969BE");
