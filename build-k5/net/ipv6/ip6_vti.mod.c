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
	{ 0xb0c311f1, "ip6_tnl_get_link_net" },
	{ 0x358e441d, "ip6_tnl_get_iflink" },
	{ 0x2f4f698c, "ip_tunnel_get_stats64" },
	{ 0x6c6f0952, "rtnl_link_unregister" },
	{ 0x3eabe18f, "unregister_pernet_device" },
	{ 0x1a59dcc, "xfrm6_protocol_deregister" },
	{ 0x122f88f2, "rtnl_link_register" },
	{ 0xc7e89677, "xfrm6_protocol_register" },
	{ 0xf93c478e, "register_pernet_device" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0xdc2011c2, "xfrm6_rcv_tnl" },
	{ 0x4bb9492b, "ip6_tnl_rcv_ctl" },
	{ 0xeef72cca, "ip6_redirect" },
	{ 0xe27c61be, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x3d528609, "ip6_update_pmtu" },
	{ 0x8650a348, "make_kuid" },
	{ 0x14fbb0c1, "xfrm_state_lookup" },
	{ 0x871ee235, "netdev_state_change" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x9d669763, "memcpy" },
	{ 0x91715312, "sprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x753bb058, "register_netdevice" },
	{ 0x8742e562, "free_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x222c50cd, "register_netdev" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x79e51169, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbc84349f, "__xfrm_policy_check" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x27806940, "icmpv6_send" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xea241209, "skb_scrub_packet" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xf955bbef, "__icmp_send" },
	{ 0xf2cbf079, "ip6_tnl_xmit_ctl" },
	{ 0x2b4ed74c, "xfrm_lookup" },
	{ 0x78aa44d, "__xfrm_decode_session" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x92703a3c, "dst_release" },
	{ 0x5c2aea3b, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x7ceee7ec, "__dev_get_by_index" },
	{ 0x4b41cdfc, "ip6_tnl_get_cap" },
	{ 0xf1db1704, "nla_memcpy" },
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
"depends=ip6_tunnel";

