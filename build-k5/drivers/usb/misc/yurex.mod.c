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
	{ 0x3f1be133, "usb_register_dev" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x2b337151, "usb_get_intf" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x3cad28, "_dev_info" },
	{ 0x63d921fd, "usb_poison_urb" },
	{ 0xb9cdca9d, "usb_deregister_dev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x676bde77, "kill_fasync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x7c32d0f0, "printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x969c605a, "usb_find_interface" },
	{ 0x52183b7d, "fasync_helper" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0x3ddc56f3, "usb_put_intf" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");
