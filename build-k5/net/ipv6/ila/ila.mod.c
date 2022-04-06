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
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x7c5d4e9, "lwtunnel_encap_del_ops" },
	{ 0xf93c478e, "register_pernet_device" },
	{ 0x34a8b541, "rhashtable_walk_exit" },
	{ 0xffe34ebe, "rht_bucket_nested" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xa1b56311, "genl_register_family" },
	{ 0x20163108, "lwtunnel_encap_add_ops" },
	{ 0x8fe7eae6, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb81b1055, "rhashtable_walk_next" },
	{ 0x92703a3c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8b32db2d, "dst_cache_set_ip6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc3d579c5, "rhashtable_insert_slow" },
	{ 0xe8102c38, "lwtunnel_state_alloc" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1dc4fef7, "rht_bucket_nested_insert" },
	{ 0x5f754e5a, "memset" },
	{ 0x7d4d2be0, "rhashtable_free_and_destroy" },
	{ 0x7a2d1947, "rhashtable_walk_peek" },
	{ 0xef3f0b40, "rhashtable_walk_stop" },
	{ 0x3eabe18f, "unregister_pernet_device" },
	{ 0xa5854dd, "nf_unregister_net_hooks" },
	{ 0xa730242c, "rhashtable_walk_start_check" },
	{ 0x6ecedfb7, "nla_put" },
	{ 0x3bf576b3, "dst_cache_get" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9d06ac33, "free_bucket_spinlocks" },
	{ 0x77ea5a4a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0xf7ae81a0, "ip6_route_output_flags" },
	{ 0xaf85173d, "nf_register_net_hooks" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xb2c66c70, "__alloc_bucket_spinlocks" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x20c9060a, "rhashtable_walk_enter" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfd41198, "genlmsg_put" },
	{ 0xe7f04aaf, "inet_proto_csum_replace_by_diff" },
	{ 0x5b026fd7, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2b4ed74c, "xfrm_lookup" },
	{ 0x9a717656, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

