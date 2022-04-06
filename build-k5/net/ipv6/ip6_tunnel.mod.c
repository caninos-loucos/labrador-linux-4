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
	{ 0x753bb058, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x27806940, "icmpv6_send" },
	{ 0xe778700e, "xfrm6_tunnel_deregister" },
	{ 0xf93c478e, "register_pernet_device" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x92703a3c, "dst_release" },
	{ 0x71088385, "metadata_dst_alloc" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x8b32db2d, "dst_cache_set_ip6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x4e030490, "skb_set_owner_w" },
	{ 0x1a9047c2, "neigh_destroy" },
	{ 0xf955bbef, "__icmp_send" },
	{ 0x91715312, "sprintf" },
	{ 0x9803ee29, "skb_realloc_headroom" },
	{ 0xea241209, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xeef72cca, "ip6_redirect" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0xe2a30447, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3eabe18f, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x8742e562, "free_netdev" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x6ecedfb7, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x3bf576b3, "dst_cache_get" },
	{ 0x101f6d13, "skb_push" },
	{ 0x7fafcb5e, "gro_cells_receive" },
	{ 0xca51717f, "dev_get_by_index_rcu" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x79e51169, "init_net" },
	{ 0x6c6f0952, "rtnl_link_unregister" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xdfdb173b, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xa5be1ff9, "ip_route_input_noref" },
	{ 0xa48381dd, "ipv6_chk_addr_and_flags" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xf7ae81a0, "ip6_route_output_flags" },
	{ 0x8650a348, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0x4ec9b719, "__get_hash_from_flowi6" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x3d528609, "ip6_update_pmtu" },
	{ 0x871ee235, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x1721706d, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2b59860e, "unregister_netdevice_queue" },
	{ 0xd689b750, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x461eeaeb, "gro_cells_init" },
	{ 0xbc84349f, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x5c2aea3b, "rt6_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0x4f1eafac, "ip6tun_encaps" },
	{ 0x122f88f2, "rtnl_link_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x71305434, "ip6_local_out" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xde3aa119, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x36bac158, "xfrm6_tunnel_register" },
	{ 0x2b4ed74c, "xfrm_lookup" },
	{ 0x748dd7ef, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6";

