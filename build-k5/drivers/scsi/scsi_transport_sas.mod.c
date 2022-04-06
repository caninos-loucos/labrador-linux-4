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
	{ 0xb9bf202d, "transport_class_register" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xfc21080c, "scsi_remove_target" },
	{ 0xf4697ff2, "blk_cleanup_queue" },
	{ 0x97255bdf, "strlen" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x84bd84aa, "transport_destroy_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x63123342, "attribute_container_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf26330e2, "scsi_scan_target" },
	{ 0x91715312, "sprintf" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x26483214, "device_del" },
	{ 0xe681d6f0, "transport_add_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3f3ceef8, "transport_configure_device" },
	{ 0x84b183ae, "strncmp" },
	{ 0x8b061479, "attribute_container_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x66fd3e05, "sysfs_remove_link" },
	{ 0x5694be65, "device_add" },
	{ 0xdb1a8bcc, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x157500f7, "sysfs_create_link" },
	{ 0xf1364d9d, "blk_queue_flag_set" },
	{ 0x38c9845a, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2e2da0d1, "transport_setup_device" },
	{ 0x31c44f06, "bsg_unregister_queue" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x3fcb38d6, "get_device" },
	{ 0xae29642e, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7019203, "device_initialize" },
	{ 0x7b0bf519, "scsi_get_vpd_page" },
	{ 0xde44e4a1, "transport_remove_device" },
	{ 0xa12dd9d4, "scsi_remove_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xfb36d70c, "bsg_job_done" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x4ef2ee6b, "bsg_setup_queue" },
	{ 0x4fa1326b, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

