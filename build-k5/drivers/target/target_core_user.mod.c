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
	{ 0xb886140c, "sbc_get_device_type" },
	{ 0x6f9f9a42, "target_backend_unregister" },
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0xb13febe9, "root_device_unregister" },
	{ 0x8fe7eae6, "genl_unregister_family" },
	{ 0x4e5f8d92, "transport_backend_register" },
	{ 0x20e3f774, "passthrough_attrib_attrs" },
	{ 0xa1b56311, "genl_register_family" },
	{ 0x61d28797, "__root_device_register" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb9e5e042, "kmem_cache_alloc" },
	{ 0x1ec180f5, "__radix_tree_insert" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0x123fde4d, "uio_event_notify" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x4a82d41c, "unmap_mapping_range" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x4d4be347, "idr_for_each" },
	{ 0x6b3adf0a, "target_complete_cmd_with_length" },
	{ 0x5ae4c888, "transport_copy_sense_to_cmd" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x462a2e75, "match_strlcpy" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc0731e7b, "uio_unregister_device" },
	{ 0x1dd7137d, "__uio_register_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5b026fd7, "nla_put_64bit" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6ecedfb7, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0xdfd41198, "genlmsg_put" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xf24d1ae0, "genlmsg_multicast_allns" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xd9c3f128, "kstrtos8" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xff7866e3, "vmalloc_to_page" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x999e8297, "vfree" },
	{ 0xdf473a0e, "__free_pages" },
	{ 0xc2da13b, "radix_tree_delete" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x74a0aef2, "passthrough_parse_cdb" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb81960ca, "snprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6b9c2433, "radix_tree_lookup" },
	{ 0xfffa3100, "sg_next" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x9d669763, "memcpy" },
	{ 0xd510b439, "flush_dcache_page" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0x8752b44d, "mem_map" },
	{ 0xd8203492, "kmem_cache_free" },
	{ 0x61275678, "idr_remove" },
	{ 0x4331e153, "target_complete_cmd" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe6c12171, "complete" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x373db350, "kstrtoint" },
	{ 0x91715312, "sprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

