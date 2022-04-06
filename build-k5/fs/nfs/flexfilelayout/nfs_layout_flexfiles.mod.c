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
	{ 0x72e5ac25, "pnfs_unregister_layoutdriver" },
	{ 0x8c3fff24, "nfs4_schedule_session_recovery" },
	{ 0x2919ceda, "pnfs_nfs_generic_sync" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xe3a763c9, "xdr_init_encode" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x52d0326c, "nfs4_pnfs_ds_connect" },
	{ 0x4f4f5811, "pnfs_generic_clear_request_commit" },
	{ 0x5b614cfc, "nfs4_setup_sequence" },
	{ 0x951c87f9, "page_address" },
	{ 0x6d8579bd, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x54f65c38, "nfs_initiate_commit" },
	{ 0x6c4002f9, "pnfs_error_mark_layout_for_return" },
	{ 0x5dde95a1, "nfs4_pnfs_ds_put" },
	{ 0x5c450a35, "put_rpccred" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0xc172c15a, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x525979f8, "init_user_ns" },
	{ 0x643d9ba1, "groups_free" },
	{ 0x53cda404, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0x1d4947e, "nfs4_decode_mp_ds_addr" },
	{ 0x1a51069e, "nfs_initiate_pgio" },
	{ 0x16ae976e, "pnfs_generic_commit_pagelist" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0x633b0b14, "pnfs_generic_recover_commit_reqs" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x5e3efb12, "nfs4_sequence_done" },
	{ 0x69eb2900, "xdr_reserve_space" },
	{ 0x92339983, "pnfs_generic_pg_test" },
	{ 0xeb05b225, "pnfs_update_layout" },
	{ 0x62a0543b, "make_kgid" },
	{ 0xa59084e9, "rpc_exit" },
	{ 0xef864221, "pnfs_generic_pg_cleanup" },
	{ 0xc1f10b57, "pnfs_generic_write_commit_done" },
	{ 0xf2ce69c9, "rpc_delay" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xf90560e1, "pnfs_generic_layout_insert_lseg" },
	{ 0x5f754e5a, "memset" },
	{ 0x6f178b10, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x1448e592, "from_kuid" },
	{ 0xa1fff9f2, "rpc_call_start" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x78629a42, "pnfs_read_resend_pnfs" },
	{ 0x7b0f72a1, "nfs4_find_get_deviceid" },
	{ 0x807fa640, "from_kgid" },
	{ 0x422565b5, "nfs4_find_or_create_ds_client" },
	{ 0xe1b258d5, "rpc_max_payload" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfbf8c855, "nfs_pageio_reset_write_mds" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd709e767, "pnfs_layout_mark_request_commit" },
	{ 0x69756b69, "pnfs_destroy_layout" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf1c3c3bb, "nfs4_pnfs_ds_add" },
	{ 0x9832e79, "pnfs_layoutcommit_inode" },
	{ 0xcda7a69e, "pnfs_put_lseg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x30f0b18b, "nfs4_put_deviceid_node" },
	{ 0x19716ef9, "pnfs_report_layoutstat" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0xcd8b6295, "pnfs_set_layoutcommit" },
	{ 0x368a962b, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0xdf473a0e, "__free_pages" },
	{ 0x8650a348, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x22ec1e05, "nfs4_test_deviceid_unavailable" },
	{ 0xa02df320, "nfs_map_string_to_numeric" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0x69950194, "pnfs_generic_pg_readpages" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa96911f8, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x5fb4946f, "rpc_restart_call_prepare" },
	{ 0x3e2b0ba6, "groups_alloc" },
	{ 0x6d6396c9, "pnfs_generic_pg_writepages" },
	{ 0x7e11f081, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf7474ba, "pnfs_generic_pg_check_layout" },
	{ 0x9d669763, "memcpy" },
	{ 0x503fa0e1, "__tracepoint_nfs4_pnfs_read" },
	{ 0x4f2a7807, "pnfs_write_done_resend_to_mds" },
	{ 0x91d99a92, "rpc_wake_up" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xfc566bfa, "rpc_count_iostats_metrics" },
	{ 0x1d690b7a, "xdr_inline_decode" },
	{ 0xe8a0c8f5, "__tracepoint_nfs4_pnfs_write" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xc340270a, "rpc_lookup_generic_cred" },
	{ 0x930d8282, "xdr_write_pages" },
	{ 0x2012243d, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x54c0b571, "nfs4_init_deviceid_node" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xec3ad134, "xdr_set_scratch_buffer" },
	{ 0xf9cf3cc0, "nfs_writeback_update_inode" },
	{ 0x712743b2, "__put_page" },
	{ 0xbb1ccbb8, "pnfs_register_layoutdriver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

