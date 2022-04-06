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
	{ 0xb637d921, "xfrm6_prepare_output" },
	{ 0xb13f90f6, "xfrm_prepare_input" },
	{ 0x8564b87e, "xfrm_unregister_mode" },
	{ 0x44091c32, "xfrm_register_mode" },
	{ 0x99bb8806, "memmove" },
	{ 0xf1512f9d, "pskb_expand_head" },
	{ 0xde3aa119, "ip6_dst_hoplimit" },
	{ 0x5a8ea0c3, "skb_mac_gso_segment" },
	{ 0xaee9240d, "__pskb_pull_tail" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

