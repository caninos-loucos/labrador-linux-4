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
	{ 0xb774a7e6, "serio_unregister_driver" },
	{ 0xa2465454, "__serio_register_driver" },
	{ 0xfa7964a4, "cec_s_phys_addr" },
	{ 0xfec9ab2d, "cec_s_log_addrs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x354b8c0d, "cec_register_adapter" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xa0aec2aa, "cec_delete_adapter" },
	{ 0xb9b3ceb6, "serio_open" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xb32a084, "cec_allocate_adapter" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe6c12171, "complete" },
	{ 0x9d669763, "memcpy" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x328a05f1, "strncpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x746904d8, "cec_received_msg_ts" },
	{ 0x9cda7e8e, "cec_transmit_attempt_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d2da33e, "serio_close" },
	{ 0x3cad28, "_dev_info" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xb597cf62, "cec_unregister_adapter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr40id*ex*");
