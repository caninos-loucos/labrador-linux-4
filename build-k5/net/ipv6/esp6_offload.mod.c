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
	{ 0x67129e7, "inet6_del_offload" },
	{ 0x5376ae65, "xfrm_unregister_type_offload" },
	{ 0xd456dda7, "inet6_add_offload" },
	{ 0x7c32d0f0, "printk" },
	{ 0xcb950ee7, "xfrm_register_type_offload" },
	{ 0x7065554b, "esp6_input_done2" },
	{ 0x80aac656, "__secpath_destroy" },
	{ 0x49ecc993, "esp6_output_head" },
	{ 0x6fb428eb, "esp6_output_tail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0x101f6d13, "skb_push" },
	{ 0xe27c61be, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xb5227d9a, "xfrm_input" },
	{ 0x14fbb0c1, "xfrm_state_lookup" },
	{ 0xd803ac25, "secpath_set" },
	{ 0x8d58e46b, "xfrm_parse_spi" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=esp6";

