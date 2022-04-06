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
	{ 0x8500b8ac, "xfrm6_rcv" },
	{ 0x98b8ef30, "xfrm6_find_1stfragopt" },
	{ 0x1a59dcc, "xfrm6_protocol_deregister" },
	{ 0x667ed560, "xfrm_unregister_type" },
	{ 0xc7e89677, "xfrm6_protocol_register" },
	{ 0xd026cc41, "xfrm_register_type" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xf12192e8, "crypto_ahash_setkey" },
	{ 0x12c26adb, "crypto_alloc_ahash" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xd82758db, "crypto_destroy_tfm" },
	{ 0xcba1d6f1, "xfrm_input_resume" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0xf1512f9d, "pskb_expand_head" },
	{ 0x6cddc758, "crypto_ahash_digest" },
	{ 0x8752b44d, "mem_map" },
	{ 0x96fc0eec, "skb_to_sgvec_nomark" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x101f6d13, "skb_push" },
	{ 0x50c299f, "skb_cow_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x99bb8806, "memmove" },
	{ 0x5f754e5a, "memset" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb701a8a7, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeef72cca, "ip6_redirect" },
	{ 0xe27c61be, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x3d528609, "ip6_update_pmtu" },
	{ 0x8650a348, "make_kuid" },
	{ 0x14fbb0c1, "xfrm_state_lookup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

