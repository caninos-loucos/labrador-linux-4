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
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x74306dd4, "iscsi_session_recovery_timedout" },
	{ 0xc9c87601, "iscsi_tcp_cleanup_task" },
	{ 0x45040556, "iscsi_tcp_task_xmit" },
	{ 0xdae28160, "iscsi_tcp_task_init" },
	{ 0x762db45d, "iscsi_conn_send_pdu" },
	{ 0xcb89f58e, "iscsi_host_set_param" },
	{ 0x57545085, "iscsi_session_get_param" },
	{ 0xb2d4a200, "iscsi_conn_start" },
	{ 0x7a2fac2b, "iscsi_eh_cmd_timed_out" },
	{ 0x3f0e7b94, "scsi_change_queue_depth" },
	{ 0xb4a8b86f, "iscsi_target_alloc" },
	{ 0xa92a90b3, "iscsi_eh_recover_target" },
	{ 0xd71ea7a8, "iscsi_eh_device_reset" },
	{ 0x3dc822c9, "iscsi_eh_abort" },
	{ 0x2c87877e, "iscsi_queuecommand" },
	{ 0xba9e6371, "iscsi_unregister_transport" },
	{ 0x7aee2249, "iscsi_register_transport" },
	{ 0xf1364d9d, "blk_queue_flag_set" },
	{ 0x62783bb4, "blk_queue_dma_alignment" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdffe7c9b, "iscsi_tcp_r2tpool_alloc" },
	{ 0xd2e6949a, "iscsi_session_setup" },
	{ 0x45184351, "iscsi_host_add" },
	{ 0xd2651dc7, "iscsi_host_alloc" },
	{ 0x3eb046bc, "iscsi_host_free" },
	{ 0x438354f9, "iscsi_host_remove" },
	{ 0x60da0e1b, "iscsi_session_teardown" },
	{ 0xf9f27bce, "iscsi_tcp_r2tpool_free" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x12c26adb, "crypto_alloc_ahash" },
	{ 0xcf17392c, "iscsi_tcp_conn_setup" },
	{ 0x4f3cb126, "iscsi_tcp_recv_skb" },
	{ 0xf3051483, "tcp_read_sock" },
	{ 0x7b103b4a, "iscsi_conn_queue_work" },
	{ 0xf889dd1a, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8e8cd48f, "sk_set_memalloc" },
	{ 0x37bb3c5b, "iscsi_conn_bind" },
	{ 0x93d77447, "sockfd_lookup" },
	{ 0x1f731855, "iscsi_conn_stop" },
	{ 0xa8ea4b98, "iscsi_suspend_tx" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xacd1583e, "iscsi_tcp_conn_teardown" },
	{ 0xd82758db, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0xa76d8975, "sk_free" },
	{ 0xbf152b58, "fput" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8a9b838f, "iscsi_tcp_set_max_r2t" },
	{ 0x581a2126, "sock_no_sendpage" },
	{ 0x9fada64a, "iscsi_set_param" },
	{ 0xfb6e041b, "kernel_getpeername" },
	{ 0x4ccf3b3c, "iscsi_conn_get_param" },
	{ 0xde3d22c8, "iscsi_host_get_param" },
	{ 0xbf8c9136, "iscsi_conn_get_addr_param" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x1160a5fd, "kernel_getsockname" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x5c15be36, "iscsi_tcp_conn_get_stats" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xec625d9, "iscsi_tcp_segment_unmap" },
	{ 0x163d9223, "iscsi_tcp_segment_done" },
	{ 0x2f3a78cd, "kernel_sendmsg" },
	{ 0x8e0ce3b0, "iscsi_conn_failure" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x123b8be1, "iscsi_tcp_dgst_header" },
	{ 0xa0ae4f9a, "iscsi_segment_seek_sg" },
	{ 0xacc5f242, "iscsi_segment_init_linear" },
	{ 0x5f754e5a, "memset" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_mod,scsi_transport_iscsi";

