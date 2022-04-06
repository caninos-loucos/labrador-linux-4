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
	{ 0x820b8ed, "param_array_ops" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x6cea701, "noop_llseek" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0x52ecd6fd, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8eb3512b, "scsi_register_driver" },
	{ 0xf724d33e, "__register_chrdev" },
	{ 0xf1958b66, "__class_create" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc4a1cc2d, "scsi_ioctl" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xb1335583, "scsi_ioctl_block_when_processing_errors" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7adf2b4a, "scsi_device_lookup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa36da8fd, "device_create" },
	{ 0x91715312, "sprintf" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5c3a141d, "scsi_print_sense_hdr" },
	{ 0x9407888d, "__scsi_execute" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0xaf38e081, "idr_find" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xb2062b2f, "device_destroy" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x61275678, "idr_remove" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

