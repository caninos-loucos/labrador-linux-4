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
	{ 0x299aac4a, "sock_init_data" },
	{ 0x9d004b0, "up_read" },
	{ 0x2f3a78cd, "kernel_sendmsg" },
	{ 0x93d77447, "sockfd_lookup" },
	{ 0x6e873151, "sock_no_setsockopt" },
	{ 0x8183a4bb, "sock_no_getsockopt" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x66594370, "sock_no_getname" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x59369608, "bt_sock_register" },
	{ 0xfb4a0b26, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1c96a00b, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0x375049d8, "sock_no_mmap" },
	{ 0x7e4c601a, "sock_no_recvmsg" },
	{ 0xb9a5f567, "bt_sock_unlink" },
	{ 0x5f754e5a, "memset" },
	{ 0xecff0c17, "netif_rx_ni" },
	{ 0x91aaac4b, "sock_no_socketpair" },
	{ 0x1c85909a, "netif_tx_wake_queue" },
	{ 0xc85f19ba, "sk_alloc" },
	{ 0x40dccb75, "l2cap_is_socket" },
	{ 0x2b312437, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xd8e4198d, "baswap" },
	{ 0x8742e562, "free_netdev" },
	{ 0x222c50cd, "register_netdev" },
	{ 0xd4c20845, "sock_no_listen" },
	{ 0xf9c14a88, "sock_no_accept" },
	{ 0xa76d8975, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0x11c011b3, "up_write" },
	{ 0x79e51169, "init_net" },
	{ 0x4d663d13, "down_write" },
	{ 0xbf152b58, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa275ed1c, "sock_no_shutdown" },
	{ 0xf02cc61e, "bt_sock_link" },
	{ 0xdf13ced, "module_put" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9306300, "proto_register" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xbce3bf33, "proto_unregister" },
	{ 0x84de8603, "alloc_netdev_mqs" },
	{ 0xb2a168e9, "eth_type_trans" },
	{ 0x9c4757eb, "__module_put_and_exit" },
	{ 0x436d64f2, "wake_up_process" },
	{ 0x755b53e6, "ether_setup" },
	{ 0x5db1c990, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x11040bda, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x1b59ca75, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0x6d87b69, "crc32_be" },
	{ 0xcddeca1e, "sock_no_sendmsg" },
	{ 0xb7785836, "set_user_nice" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x2d1302b2, "bt_procfs_init" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x2fb39e09, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xae0501bd, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EE2904DC6B5F1151D5BBE0F");
