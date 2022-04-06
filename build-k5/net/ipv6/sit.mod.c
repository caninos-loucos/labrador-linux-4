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
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x3c7a9300, "ip_tunnel_get_link_net" },
	{ 0x402e732, "ip_tunnel_get_iflink" },
	{ 0x2f4f698c, "ip_tunnel_get_stats64" },
	{ 0x122f88f2, "rtnl_link_register" },
	{ 0x7feffe34, "xfrm4_tunnel_register" },
	{ 0xf93c478e, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3eabe18f, "unregister_pernet_device" },
	{ 0xb05eb126, "xfrm4_tunnel_deregister" },
	{ 0x6c6f0952, "rtnl_link_unregister" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x871ee235, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x5eefc12d, "ip_tunnel_encap_setup" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x27806940, "icmpv6_send" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xd5d989c8, "iptunnel_xmit" },
	{ 0x424e92f9, "iptun_encaps" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x4e030490, "skb_set_owner_w" },
	{ 0x9803ee29, "skb_realloc_headroom" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0xa359211d, "ip_tunnel_xmit" },
	{ 0x1721706d, "iptunnel_handle_offloads" },
	{ 0x1a9047c2, "neigh_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8742e562, "free_netdev" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x79e51169, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3644b7ff, "ipv6_chk_prefix" },
	{ 0x56bcceaa, "ipv6_chk_custom_prefix" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaf30c919, "netif_rx" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbc84349f, "__xfrm_policy_check" },
	{ 0xc9f8f248, "ip_tunnel_rcv" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xe2a30447, "__iptunnel_pull_header" },
	{ 0xbeeffcf3, "ipv4_redirect" },
	{ 0x4959d464, "ipv4_update_pmtu" },
	{ 0x9dbc1089, "ip6_err_gen_icmpv6_unreach" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x7ceee7ec, "__dev_get_by_index" },
	{ 0x92703a3c, "dst_release" },
	{ 0xd689b750, "ip_route_output_flow" },
	{ 0x8650a348, "make_kuid" },
	{ 0x753bb058, "register_netdevice" },
	{ 0x5f754e5a, "memset" },
	{ 0x2b59860e, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6ecedfb7, "nla_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

