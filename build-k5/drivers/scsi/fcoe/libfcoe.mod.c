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
	{ 0xb36386ba, "fc_linkup" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3e6e4b0, "bus_register" },
	{ 0x20fc4e34, "fc_exch_init" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcb87625d, "fc_rport_create" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xb0ddd5a1, "fc_rport_flush_queue" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x55972925, "fc_seq_els_rsp_send" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0xeb0c3cb2, "dev_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x97965531, "__netdev_alloc_skb" },
	{ 0xd44063cc, "fc_fcp_init" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x11a997f3, "fc_disc_config" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x2e94b7a1, "fc_elsct_init" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x189738df, "fc_vport_id_lookup" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc2e3b2a2, "device_register" },
	{ 0x755283f8, "__ethtool_get_link_ksettings" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0x9dcdae80, "fc_exch_recv" },
	{ 0x6882b507, "fc_lport_set_local_id" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x79e51169, "init_net" },
	{ 0x22b5d74c, "bus_unregister" },
	{ 0x95beccd6, "fc_lport_reset" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x5f04fbed, "fc_linkdown" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xddfab0a7, "fc_rport_login" },
	{ 0xa5132092, "fc_disc_init" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x1ff5e704, "fc_rport_logoff" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0x9d50ed7e, "fc_rport_destroy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc2b8ea26, "fc_lport_init" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcd4051e8, "dev_queue_xmit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0x712743b2, "__put_page" },
	{ 0x4b2a322c, "dev_get_stats" },
	{ 0xa69fd00f, "fc_rport_lookup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfc";

