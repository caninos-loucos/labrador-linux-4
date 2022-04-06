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
	{ 0xc7e89677, "xfrm6_protocol_register" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x229c8107, "skb_to_sgvec" },
	{ 0x39c02708, "xfrm_dev_resume" },
	{ 0x667ed560, "xfrm_unregister_type" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xfffa3100, "sg_next" },
	{ 0x50edf68e, "pskb_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7662189d, "skb_page_frag_refill" },
	{ 0x50c299f, "skb_cow_data" },
	{ 0xeef72cca, "ip6_redirect" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0xcba1d6f1, "xfrm_input_resume" },
	{ 0x50a32299, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0x305dc052, "skb_checksum" },
	{ 0x7c32d0f0, "printk" },
	{ 0x101f6d13, "skb_push" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xb0e82f31, "crypto_aead_setkey" },
	{ 0x80aac656, "__secpath_destroy" },
	{ 0xd026cc41, "xfrm_register_type" },
	{ 0x98b8ef30, "xfrm6_find_1stfragopt" },
	{ 0x8650a348, "make_kuid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xd82758db, "crypto_destroy_tfm" },
	{ 0xb701a8a7, "xfrm_output_resume" },
	{ 0x3d528609, "ip6_update_pmtu" },
	{ 0xb7b3765a, "skb_pull_rcsum" },
	{ 0xe27c61be, "__xfrm_state_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xef34dea, "crypto_aead_setauthsize" },
	{ 0x5da07c5f, "crypto_alloc_aead" },
	{ 0x14fbb0c1, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5e250234, "___pskb_trim" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xec161146, "skb_copy_bits" },
	{ 0x8500b8ac, "xfrm6_rcv" },
	{ 0x712743b2, "__put_page" },
	{ 0x1a59dcc, "xfrm6_protocol_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

