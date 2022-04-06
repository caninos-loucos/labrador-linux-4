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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xab1b699b, "bio_alloc_bioset" },
	{ 0x8752b44d, "mem_map" },
	{ 0x5332ed9a, "blk_put_request" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5a9e8ef5, "blk_execute_rq_nowait" },
	{ 0xaf39b614, "bio_put" },
	{ 0x4cce30a, "blk_rq_map_kern" },
	{ 0xc2acc033, "hex_dump_to_buffer" },
	{ 0x3b04e5e5, "__blk_put_request" },
	{ 0x6db45984, "bio_map_kern" },
	{ 0xc2a7a5a4, "blk_execute_rq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x34be134b, "blk_end_request" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6558361, "blk_rq_append_bio" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeaee6160, "bio_add_pc_page" },
	{ 0xa1c9e3b4, "blk_get_request" },
	{ 0xb859f38b, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

