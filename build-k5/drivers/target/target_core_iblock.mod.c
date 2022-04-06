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
	{ 0xca977fde, "sbc_attrib_attrs" },
	{ 0xb886140c, "sbc_get_device_type" },
	{ 0x6f9f9a42, "target_backend_unregister" },
	{ 0x4e5f8d92, "transport_backend_register" },
	{ 0xf36afac5, "blkdev_issue_zeroout" },
	{ 0x4880aebb, "kunmap" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x2b821bc0, "kmap" },
	{ 0x3a5a959, "sbc_get_write_same_sectors" },
	{ 0x607c61a9, "bio_integrity_add_page" },
	{ 0x2abf3a90, "bio_integrity_alloc" },
	{ 0xfffa3100, "sg_next" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0xb79e605a, "bio_add_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x3d3300cb, "bioset_integrity_create" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x255c7413, "target_configure_unmap_from_queue" },
	{ 0xfb124194, "blkdev_get_by_path" },
	{ 0xa0663a5, "bioset_init" },
	{ 0x1622b786, "bioset_exit" },
	{ 0xd5a96075, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x462a2e75, "match_strlcpy" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91715312, "sprintf" },
	{ 0x404f16d6, "bdevname" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x9c40f33f, "submit_bio" },
	{ 0xc6d6da45, "fs_bio_set" },
	{ 0xab1b699b, "bio_alloc_bioset" },
	{ 0x4331e153, "target_complete_cmd" },
	{ 0xaf39b614, "bio_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf5b7e503, "blkdev_issue_discard" },
	{ 0x94422bf3, "target_to_linux_sector" },
	{ 0x70cca471, "sbc_parse_cdb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

