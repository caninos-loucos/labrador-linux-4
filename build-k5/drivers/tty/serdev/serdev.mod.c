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
	{ 0xe3e6e4b0, "bus_register" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xffc61cc3, "__pm_runtime_idle" },
	{ 0x60e98796, "driver_register" },
	{ 0x477a2f91, "__pm_runtime_disable" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8ad04752, "__pm_runtime_resume" },
	{ 0x229f6eaa, "devres_alloc_node" },
	{ 0x23d951cb, "pm_runtime_no_callbacks" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3d32f112, "of_device_uevent_modalias" },
	{ 0x26483214, "device_del" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x21af32f7, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5694be65, "device_add" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x22b5d74c, "bus_unregister" },
	{ 0x90d9311a, "of_match_device" },
	{ 0x971b1bf3, "dev_pm_domain_detach" },
	{ 0x3cee98c5, "pm_runtime_enable" },
	{ 0x38c9845a, "put_device" },
	{ 0xf231a449, "of_get_property" },
	{ 0x9db9aee9, "devres_add" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xecee9dc1, "of_get_next_available_child" },
	{ 0xae29642e, "device_for_each_child" },
	{ 0x1ee7c8bf, "dev_pm_domain_attach" },
	{ 0x880f2966, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7019203, "device_initialize" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0xe6c12171, "complete" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x445c816c, "ida_destroy" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

