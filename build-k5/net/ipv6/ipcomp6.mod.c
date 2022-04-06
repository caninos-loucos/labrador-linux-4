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
	{ 0x5941d655, "ipcomp_output" },
	{ 0xd9d83044, "ipcomp_input" },
	{ 0x16004a92, "ipcomp_destroy" },
	{ 0x1a59dcc, "xfrm6_protocol_deregister" },
	{ 0x667ed560, "xfrm_unregister_type" },
	{ 0xc7e89677, "xfrm6_protocol_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd026cc41, "xfrm_register_type" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9a41b122, "xfrm_state_insert" },
	{ 0xc15302d6, "xfrm_init_state" },
	{ 0xa5ba4bdf, "xfrm6_tunnel_alloc_spi" },
	{ 0xf3dc9f0d, "xfrm_state_alloc" },
	{ 0x5c8dd499, "xfrm6_tunnel_spi_lookup" },
	{ 0x1437d731, "ipcomp_init_state" },
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
"depends=xfrm6_tunnel";

