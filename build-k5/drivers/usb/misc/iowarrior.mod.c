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
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x3f1be133, "usb_register_dev" },
	{ 0x97255bdf, "strlen" },
	{ 0x66ba57fc, "usb_string" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0x75aea49c, "usb_find_common_endpoints_reverse" },
	{ 0x5f754e5a, "memset" },
	{ 0x2b337151, "usb_get_intf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0x3ddc56f3, "usb_put_intf" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cad28, "_dev_info" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xb9cdca9d, "usb_deregister_dev" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x969c605a, "usb_find_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07C0p1500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1503d*dc*dsc*dp*ic*isc*ip*in*");
