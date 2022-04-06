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
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x440d94a3, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe29c2bee, "iscsi_requeue_task" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7ae28968, "iscsi_itt_to_ctask" },
	{ 0xdb45f955, "crypto_ahash_final" },
	{ 0x6cddc758, "crypto_ahash_digest" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0xfcfca66f, "skb_abort_seq_read" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x18baea29, "skb_prepare_seq_read" },
	{ 0x71c90087, "memcmp" },
	{ 0x4880aebb, "kunmap" },
	{ 0x49d7f6, "iscsi_conn_teardown" },
	{ 0x650700b9, "iscsi_put_task" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x2b821bc0, "kmap" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbb4eeef2, "iscsi_prep_data_out_pdu" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaa5663d0, "iscsi_complete_pdu" },
	{ 0x8e0ce3b0, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x9d669763, "memcpy" },
	{ 0x44f48aa2, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x1d3d1649, "iscsi_verify_itt" },
	{ 0xf9c2043c, "iscsi_conn_setup" },
	{ 0x30d6ea94, "iscsi_update_cmdsn" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";

