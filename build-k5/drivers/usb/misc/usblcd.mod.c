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
	{ 0x6cea701, "noop_llseek" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x3f1be133, "usb_register_dev" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe52a3445, "__init_rwsem" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x3cad28, "_dev_info" },
	{ 0x11c011b3, "up_write" },
	{ 0x4d663d13, "down_write" },
	{ 0xb9cdca9d, "usb_deregister_dev" },
	{ 0x793d9a92, "usb_autopm_put_interface" },
	{ 0x7c32d0f0, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x969c605a, "usb_find_interface" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x9d004b0, "up_read" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0x1c96a00b, "down_read" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x581cde4e, "up" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x97255bdf, "strlen" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");
