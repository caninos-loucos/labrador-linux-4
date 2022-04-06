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
	{ 0x231a865d, "sbc_dif_verify" },
	{ 0x255c7413, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x462a2e75, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x91715312, "sprintf" },
	{ 0x6f3a7bad, "iov_iter_zero" },
	{ 0x3558bedd, "vfs_iter_read" },
	{ 0xfffa3100, "sg_next" },
	{ 0xda718492, "vfs_fsync_range" },
	{ 0xa9954ed6, "vfs_iter_write" },
	{ 0x9825171d, "iov_iter_bvec" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3a5a959, "sbc_get_write_same_sectors" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4331e153, "target_complete_cmd" },
	{ 0xf5b7e503, "blkdev_issue_discard" },
	{ 0x94422bf3, "target_to_linux_sector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x70cca471, "sbc_parse_cdb" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3c0e55aa, "filp_open" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x5f754e5a, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c335681, "kernel_write" },
	{ 0xa205f20c, "filp_close" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

