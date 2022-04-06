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
	{ 0x261aaaa9, "unregister_pernet_subsys" },
	{ 0x79e51169, "init_net" },
	{ 0xe18d0ca8, "register_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd57496a, "nf_nat_l3proto_ipv4_register_fn" },
	{ 0xa84ed84b, "ipt_register_table" },
	{ 0xc93ec252, "ipt_alloc_initial_table" },
	{ 0xa0d8e6c2, "ipt_unregister_table" },
	{ 0x20521e4, "nf_nat_l3proto_ipv4_unregister_fn" },
	{ 0x5b2264a7, "ipt_do_table" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_ipv4";

