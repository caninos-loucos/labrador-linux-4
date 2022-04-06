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
	{ 0x619de8c5, "release_sock" },
	{ 0x9c657a00, "dev_load" },
	{ 0x299aac4a, "sock_init_data" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xa4574bbe, "dev_getbyhwaddr_rcu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x92703a3c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x6407b5a8, "skb_clone" },
	{ 0xeb0c3cb2, "dev_get_by_name" },
	{ 0x66594370, "sock_no_getname" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb6855e2, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xfbd82c39, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x2187d15c, "sk_common_release" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x6e06c3a8, "sock_common_recvmsg" },
	{ 0x581a2126, "sock_no_sendpage" },
	{ 0x4d13427, "sock_get_timestamp" },
	{ 0x375049d8, "sock_no_mmap" },
	{ 0x5a7b2af7, "ieee802154_hdr_pull" },
	{ 0x5f754e5a, "memset" },
	{ 0x91aaac4b, "sock_no_socketpair" },
	{ 0xc85f19ba, "sk_alloc" },
	{ 0x5f671506, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2b312437, "sock_no_bind" },
	{ 0xc74757b0, "lock_sock_nested" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0xd7d35dd8, "_raw_read_unlock" },
	{ 0x508fa2f2, "sock_prot_inuse_add" },
	{ 0xd4c20845, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0xf9c14a88, "sock_no_accept" },
	{ 0x9cf875d8, "dev_get_by_index" },
	{ 0xe761e15c, "dev_remove_pack" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x79e51169, "init_net" },
	{ 0xa275ed1c, "sock_no_shutdown" },
	{ 0x584685ee, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9306300, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x3a4d5b7b, "sock_get_timestampns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d594711, "datagram_poll" },
	{ 0x7df4ca81, "sock_register" },
	{ 0xa4821b99, "dev_getfirstbyhwtype" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xbce3bf33, "proto_unregister" },
	{ 0xf6305cbf, "_copy_from_iter_full" },
	{ 0x4e23ef52, "sock_alloc_send_skb" },
	{ 0x49335e39, "put_cmsg" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xe68d7d40, "sock_common_setsockopt" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x115a4c21, "sock_common_getsockopt" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x33480231, "dev_add_pack" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xcd4051e8, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x70d885ab, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

