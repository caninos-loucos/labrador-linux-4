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
	{ 0xa800a4d1, "vfs_create" },
	{ 0x978a142, "set_create_files_as" },
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x84a0167a, "set_security_override_from_ctx" },
	{ 0x5b38e0f5, "security_path_rename" },
	{ 0xd7c51c5d, "security_inode_mkdir" },
	{ 0x9d004b0, "up_read" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0x45845242, "fscache_object_mark_killed" },
	{ 0xc8718b9e, "prepare_kernel_cred" },
	{ 0x1518ca2a, "dget_parent" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf02d382a, "pagecache_get_page" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb6823fdd, "touch_atime" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x5fcb2238, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xaad1b308, "dentry_open" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x9963a507, "add_to_page_cache_lru" },
	{ 0x6e03a9de, "fscache_object_init" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa7c08ed7, "trace_event_buffer_reserve" },
	{ 0x28ee02, "fscache_object_lookup_negative" },
	{ 0xe74c42eb, "path_get" },
	{ 0x91715312, "sprintf" },
	{ 0xa22c3309, "fscache_add_cache" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x82540bc9, "fscache_check_aux" },
	{ 0x784fffda, "override_creds" },
	{ 0x32a4f18b, "bpf_trace_run3" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0x12eba70e, "security_inode_create" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf93517b2, "security_path_unlink" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1c96a00b, "down_read" },
	{ 0x8b25ad59, "unlock_rename" },
	{ 0x59a00d2, "fscache_cache_cleared_wq" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0xebf5493b, "misc_register" },
	{ 0xc0056063, "trace_define_field" },
	{ 0x46798934, "kern_path" },
	{ 0x5f754e5a, "memset" },
	{ 0xbfc30dc6, "security_path_mkdir" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe4ae758e, "fscache_obtained_object" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x4489be9a, "_raw_write_unlock" },
	{ 0xd7d35dd8, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4880aebb, "kunmap" },
	{ 0xa3bc4630, "vfs_getxattr" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x388b1b90, "trace_event_reg" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xd8203492, "kmem_cache_free" },
	{ 0xa1acee6a, "lock_rename" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x6cea701, "noop_llseek" },
	{ 0x8b48e728, "fscache_withdraw_cache" },
	{ 0xdd27fa87, "memchr" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa689dd50, "unlock_page" },
	{ 0x11c011b3, "up_write" },
	{ 0x4d663d13, "down_write" },
	{ 0xbf152b58, "fput" },
	{ 0x33086156, "perf_trace_run_bpf_submit" },
	{ 0xd1cbb143, "fscache_mark_pages_cached" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xc469e5b9, "fscache_mark_page_cached" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x81698fdc, "prepare_creds" },
	{ 0xa0aefe3e, "bit_waitqueue" },
	{ 0x632780, "work_busy" },
	{ 0x868c59cc, "mntput" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb9e5e042, "kmem_cache_alloc" },
	{ 0x4d0d163d, "copy_page" },
	{ 0xd885375f, "fscache_fsdef_index" },
	{ 0x2b821bc0, "kmap" },
	{ 0x739d3d24, "fscache_init_cache" },
	{ 0x4ac7104a, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x48827f71, "fscache_object_destroy" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x3a5b245, "vfs_statfs" },
	{ 0x30d0338d, "trace_event_buffer_commit" },
	{ 0xa11502e3, "vfs_mkdir" },
	{ 0x6f613b52, "__put_cred" },
	{ 0xf44e27e6, "path_put" },
	{ 0xf2752c05, "vfs_truncate" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x3a8ee5d4, "security_path_mknod" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xd3b5ec83, "fscache_put_operation" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x266a5a31, "vfs_unlink" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb8bdf932, "event_triggers_call" },
	{ 0xd06b5212, "bpf_trace_run2" },
	{ 0xd719e7ca, "add_page_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x5be49619, "trace_event_raw_init" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x721b1851, "skip_spaces" },
	{ 0x8813c84d, "sync_filesystem" },
	{ 0xb9d28c5b, "fscache_io_error" },
	{ 0x998b61e5, "abort_creds" },
	{ 0x27bcfdbc, "__kernel_write" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32fad96, "trace_raw_output_prep" },
	{ 0x92cf98e, "fscache_object_sleep_till_congested" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x369c0f98, "fscache_enqueue_operation" },
	{ 0x89441f46, "lookup_one_len" },
	{ 0x611cfa96, "vfs_rename" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc5a63a12, "fscache_object_retrying_stale" },
	{ 0x212f77f1, "fscache_op_complete" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0x98d7aa57, "bpf_trace_run4" },
	{ 0x5a132163, "notify_change" },
	{ 0xa8f08796, "vfs_setxattr" },
	{ 0x1cc6920d, "misc_deregister" },
	{ 0xb8961d86, "revert_creds" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x712743b2, "__put_page" },
	{ 0x888f37e1, "vfs_removexattr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscache";

