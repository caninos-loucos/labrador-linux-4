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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9d004b0, "up_read" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x48cb057c, "register_sysctl_table" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x75ecd84d, "proc_create_single_data" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc8db1dd3, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0x1bc4846b, "kobject_uevent" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x219fd890, "seq_printf" },
	{ 0xdc16b903, "remove_proc_entry" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xa26d9b4f, "workqueue_congested" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc0749b7b, "pagevec_lookup_range" },
	{ 0xa7c08ed7, "trace_event_buffer_reserve" },
	{ 0xe8d35612, "radix_tree_tag_get" },
	{ 0x32a4f18b, "bpf_trace_run3" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1c96a00b, "down_read" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd8ded085, "radix_tree_maybe_preload" },
	{ 0xc0056063, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xcb533055, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x82a56cdf, "bpf_trace_run1" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x7c32d0f0, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf31b3fd1, "workqueue_set_max_active" },
	{ 0x328a05f1, "strncpy" },
	{ 0x388b1b90, "trace_event_reg" },
	{ 0xd8203492, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc11b2ce7, "bpf_trace_run5" },
	{ 0x3d0dee3f, "radix_tree_gang_lookup_tag" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x11c011b3, "up_write" },
	{ 0x4d663d13, "down_write" },
	{ 0x33086156, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc2da13b, "radix_tree_delete" },
	{ 0xa0aefe3e, "bit_waitqueue" },
	{ 0x58fad869, "__var_waitqueue" },
	{ 0xf5b666ef, "__cond_resched_lock" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0xb9e5e042, "kmem_cache_alloc" },
	{ 0x7d36317c, "radix_tree_tag_set" },
	{ 0x4ac7104a, "trace_event_ignore_this_pid" },
	{ 0x3d52fb7f, "unregister_sysctl_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x30d0338d, "trace_event_buffer_commit" },
	{ 0x1ec180f5, "__radix_tree_insert" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x226adcb2, "radix_tree_tag_clear" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0xc2c5b2b6, "vsnprintf" },
	{ 0xb8bdf932, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x29084bd2, "__pagevec_release" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xd06b5212, "bpf_trace_run2" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x7942d0a2, "kernel_kobj" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x5be49619, "trace_event_raw_init" },
	{ 0xcd00abbc, "add_wait_queue_exclusive" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6b9c2433, "radix_tree_lookup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32fad96, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0x98d7aa57, "bpf_trace_run4" },
	{ 0x712743b2, "__put_page" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

