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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x609c5e2e, "get_net_ns_by_fd" },
	{ 0xf93c478e, "register_pernet_device" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xa1b56311, "genl_register_family" },
	{ 0x4a07c33b, "debugfs_create_dir" },
	{ 0x8752b44d, "mem_map" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x1e0b28f, "bpf_trace_run7" },
	{ 0x97255bdf, "strlen" },
	{ 0xea124bd1, "gcd" },
	{ 0x951c87f9, "page_address" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8fe7eae6, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x553e20e, "dev_change_net_namespace" },
	{ 0xc0e2e056, "sock_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa7c08ed7, "trace_event_buffer_reserve" },
	{ 0x3653ec7a, "platform_device_register_full" },
	{ 0x776f4f26, "debugfs_rename" },
	{ 0xaf6670df, "get_net_ns_by_pid" },
	{ 0x91715312, "sprintf" },
	{ 0xece092ff, "debugfs_remove_recursive" },
	{ 0x46618a3f, "__put_net" },
	{ 0x32a4f18b, "bpf_trace_run3" },
	{ 0x911ee79e, "of_prop_next_u32" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfbe557c5, "bpf_trace_run10" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0xc0056063, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xecff0c17, "netif_rx_ni" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x26483214, "device_del" },
	{ 0x82a56cdf, "bpf_trace_run1" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x3eabe18f, "unregister_pernet_device" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xcdf24eed, "class_unregister" },
	{ 0x15f4401a, "of_find_property" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x388b1b90, "trace_event_reg" },
	{ 0x6ecedfb7, "nla_put" },
	{ 0x3e73e5f4, "wireless_send_event" },
	{ 0x93fccabe, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5996410, "dev_close" },
	{ 0xc11b2ce7, "bpf_trace_run5" },
	{ 0x9cf875d8, "dev_get_by_index" },
	{ 0x77ea5a4a, "netlink_unicast" },
	{ 0xa7156b9, "platform_device_unregister" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xda78b63e, "init_uts_ns" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x66fd3e05, "sysfs_remove_link" },
	{ 0x5694be65, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x79e51169, "init_net" },
	{ 0xc0592b2b, "__class_register" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x33086156, "perf_trace_run_bpf_submit" },
	{ 0x7ceee7ec, "__dev_get_by_index" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb5026e7a, "kobject_uevent_env" },
	{ 0xdb00a715, "inet_csk_get_port" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x157500f7, "sysfs_create_link" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0xc53ee5b5, "net_ns_type_operations" },
	{ 0xe4d93bcb, "netlink_broadcast" },
	{ 0x4ac7104a, "trace_event_ignore_this_pid" },
	{ 0x38c9845a, "put_device" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x1e8fac8e, "wireless_nlevent_flush" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x57f40b24, "genl_family_attrbuf" },
	{ 0x30d0338d, "trace_event_buffer_commit" },
	{ 0x202bfe35, "device_rename" },
	{ 0xaa8853, "netdev_err" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb8bdf932, "event_triggers_call" },
	{ 0xf24d1ae0, "genlmsg_multicast_allns" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xd06b5212, "bpf_trace_run2" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5be49619, "trace_event_raw_init" },
	{ 0xdfd41198, "genlmsg_put" },
	{ 0x7072b279, "skb_add_rx_frag" },
	{ 0xd7019203, "device_initialize" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7a4497db, "kzfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3568aecf, "bpf_trace_run6" },
	{ 0x5b026fd7, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32fad96, "trace_raw_output_prep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xde59b935, "nla_reserve" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0xec161146, "skb_copy_bits" },
	{ 0x98d7aa57, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa00e166c, "__sock_create" },
	{ 0x20205f64, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
