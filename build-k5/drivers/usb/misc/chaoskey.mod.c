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
	{ 0xa6c641e8, "default_llseek" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xca4b18d2, "usb_enable_autosuspend" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0x3f1be133, "usb_register_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2b337151, "usb_get_intf" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9d669763, "memcpy" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0x63d921fd, "usb_poison_urb" },
	{ 0xb9cdca9d, "usb_deregister_dev" },
	{ 0x3ddc56f3, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x793d9a92, "usb_autopm_put_interface" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x969c605a, "usb_find_interface" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1D50p60C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D8p0001d*dc*dsc*dp*ic*isc*ip*in*");
