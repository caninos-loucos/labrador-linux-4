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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x2e877a04, "__sbitmap_queue_get" },
	{ 0xfa4667d1, "fc_seq_release" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xa8c41a32, "target_put_sess_cmd" },
	{ 0xb504cc7f, "core_tpg_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc808a613, "fc_fc4_register_provider" },
	{ 0x31fd4af0, "fc_lport_iterate" },
	{ 0xe8e85a19, "transport_generic_free_cmd" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xbf2574e4, "target_register_template" },
	{ 0x1e7a9244, "target_sess_cmd_list_set_waiting" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xe1e3878f, "core_tpg_deregister" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xaabd6f5b, "target_submit_cmd" },
	{ 0xa4069368, "blocking_notifier_chain_unregister" },
	{ 0x91715312, "sprintf" },
	{ 0xa50fc05c, "fc_seq_assign" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x11089ac7, "_ctype" },
	{ 0x142146d4, "_fc_frame_alloc" },
	{ 0xed967a74, "fc_fill_reply_hdr" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x811811e0, "fc_exch_done" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c3b90c1, "core_tpg_set_initiator_node_tag" },
	{ 0x346bfb72, "sbitmap_queue_clear" },
	{ 0x84b183ae, "strncmp" },
	{ 0x3807b058, "fc_fc4_deregister_provider" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9273586, "target_remove_session" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2e091d64, "fc_frame_alloc_fill" },
	{ 0xbd5d044b, "fc_seq_set_resp" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x159867c6, "target_setup_session" },
	{ 0x1d3ddb40, "target_unregister_template" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xb7f3007e, "blocking_notifier_chain_register" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7f3407a7, "fc_seq_start_next" },
	{ 0xab8aecf0, "fc_lport_notifier_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd84d7a38, "target_wait_for_sess_cmds" },
	{ 0xade711b2, "target_submit_tmr" },
	{ 0xd0b411b0, "fc_seq_send" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd6b14178, "target_execute_cmd" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfc,target_core_mod";

