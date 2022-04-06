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
	{ 0xfd272e01, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x84bd84aa, "transport_destroy_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x63123342, "attribute_container_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x26483214, "device_del" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe681d6f0, "transport_add_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3f3ceef8, "transport_configure_device" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8b061479, "attribute_container_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x373db350, "kstrtoint" },
	{ 0x5694be65, "device_add" },
	{ 0xdb1a8bcc, "transport_class_unregister" },
	{ 0x7183eaf4, "scsi_target_unblock" },
	{ 0x38c9845a, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2e2da0d1, "transport_setup_device" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x3fcb38d6, "get_device" },
	{ 0x28059001, "__scsi_iterate_devices" },
	{ 0xae29642e, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7019203, "device_initialize" },
	{ 0xde44e4a1, "transport_remove_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb54a4c0f, "scsi_target_block" },
	{ 0x9e9c7bc7, "dev_set_name" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

