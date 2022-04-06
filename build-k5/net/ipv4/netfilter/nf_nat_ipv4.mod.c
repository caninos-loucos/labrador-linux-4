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
	{ 0x9133950b, "nf_nat_unregister_fn" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x6cf9aa6f, "nf_ct_nat_ext_add" },
	{ 0x92703a3c, "dst_release" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x31173c93, "nf_nat_used_tuple" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5e5a35d5, "nf_nat_l4proto_register" },
	{ 0x18f2172d, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x57f70547, "secure_ipv4_port_ephemeral" },
	{ 0xdb504071, "nf_ip_checksum" },
	{ 0x305dc052, "skb_checksum" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd966ef1e, "inet_select_addr" },
	{ 0x562283b1, "nf_nat_register_fn" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5ee2e53e, "ip_route_me_harder" },
	{ 0x66ad87d5, "nf_nat_l4proto_unregister" },
	{ 0xd3be860c, "nf_xfrm_me_harder" },
	{ 0xb8563c6d, "nf_nat_setup_info" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe9a931b0, "nf_ct_iterate_cleanup_net" },
	{ 0x7ef6747, "skb_make_writable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x89b90aa2, "nf_nat_l3proto_unregister" },
	{ 0xf12fb616, "nf_nat_inet_fn" },
	{ 0x397e710e, "nf_nat_l3proto_register" },
	{ 0xa6f96ecc, "__nf_nat_l4proto_find" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

