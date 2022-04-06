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
	{ 0xa26ad5c5, "class_find_device" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xc9654c69, "cdev_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x55bc312b, "osd_sec_init_nosec_doall_caps" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x5ab072ce, "osd_dev_fini" },
	{ 0x1fcc2405, "__alloc_disk_node" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xcdf24eed, "class_unregister" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0x21af32f7, "ida_free" },
	{ 0x6cea701, "noop_llseek" },
	{ 0xc0592b2b, "__class_register" },
	{ 0x9541835b, "osd_dev_init" },
	{ 0xbf152b58, "fput" },
	{ 0x874bb633, "osd_auto_detect_ver" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x38c9845a, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfa953ae9, "cdev_device_add" },
	{ 0x32e6b353, "put_disk" },
	{ 0x8eb3512b, "scsi_register_driver" },
	{ 0xc393ab26, "scsi_test_unit_ready" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x3fcb38d6, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd7019203, "device_initialize" },
	{ 0x3e34cfdf, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x3c0e55aa, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,scsi_mod";

