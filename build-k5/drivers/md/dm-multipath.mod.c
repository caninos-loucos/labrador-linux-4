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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe05548bf, "scsi_dh_set_params" },
	{ 0x402b8281, "__request_module" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x9d004b0, "up_read" },
	{ 0xc8a98094, "dm_table_set_type" },
	{ 0x97255bdf, "strlen" },
	{ 0x52809ea7, "dm_get_device" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x74b6281f, "dm_path_uevent" },
	{ 0x924e6a3a, "dm_table_get_md" },
	{ 0x5332ed9a, "blk_put_request" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa46b383e, "dm_use_blk_mq" },
	{ 0x29195f6c, "dm_register_target" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xb7b89181, "scsi_dh_attached_handler_name" },
	{ 0x1c96a00b, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x5b84c432, "blk_lld_busy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb9051366, "scsi_dh_activate" },
	{ 0x44a01c7d, "dm_unregister_target" },
	{ 0x248e7818, "scsi_dh_attach" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x4deb7dc0, "dm_suspended" },
	{ 0xd38541dc, "generic_make_request" },
	{ 0x11c011b3, "up_write" },
	{ 0x4d663d13, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf92a8e77, "bio_endio" },
	{ 0xdf13ced, "module_put" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x386d5c87, "dm_mq_kick_requeue_list" },
	{ 0x404f16d6, "bdevname" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x89e47933, "dm_device_name" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2d551b4e, "dm_put_device" },
	{ 0x5057f7ed, "dm_per_bio_data" },
	{ 0x532fb035, "dm_noflush_suspending" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x37af3190, "dm_table_run_md_queue_async" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xa1c9e3b4, "blk_get_request" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0x47704d20, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

