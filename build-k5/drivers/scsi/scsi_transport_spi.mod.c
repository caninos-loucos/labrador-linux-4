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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0xb9bf202d, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x97255bdf, "strlen" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xb25db51a, "scsi_get_device_flags_keyed" },
	{ 0xa5a3e6a5, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb35ed4fe, "anon_transport_class_register" },
	{ 0x63123342, "attribute_container_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x91715312, "sprintf" },
	{ 0x983a533a, "scsi_device_quiesce" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0x5f754e5a, "memset" },
	{ 0x726379e3, "sysfs_chmod_file" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x9407888d, "__scsi_execute" },
	{ 0x84b183ae, "strncmp" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x8b061479, "attribute_container_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb1a8bcc, "transport_class_unregister" },
	{ 0xe96f8f95, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x3cad28, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92159c8b, "scsi_device_set_state" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xae29642e, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x162ec5a8, "scsi_target_quiesce" },
	{ 0x33743708, "scsi_is_target_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0x26cd5480, "anon_transport_class_unregister" },
	{ 0x5500d433, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

