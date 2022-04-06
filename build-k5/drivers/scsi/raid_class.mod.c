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
	{ 0x6cd329a7, "attribute_container_classdev_to_container" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x63123342, "attribute_container_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8b061479, "attribute_container_register" },
	{ 0x5694be65, "device_add" },
	{ 0xdb1a8bcc, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb076e89a, "attribute_container_find_class_device" },
	{ 0x38c9845a, "put_device" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x3fcb38d6, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7019203, "device_initialize" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x5500d433, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

