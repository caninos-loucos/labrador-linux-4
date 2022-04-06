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
	{ 0xc9e1c5f7, "deregister_mtd_blktrans" },
	{ 0x9ee323c0, "register_mtd_blktrans" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xfbccee22, "mtd_read" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x999e8297, "vfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8aa5d4ab, "mtd_write" },
	{ 0x11c3d47b, "mtd_erase" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c996bab, "add_mtd_blktrans_dev" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf0dc39ef, "del_mtd_blktrans_dev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd_blkdevs";

