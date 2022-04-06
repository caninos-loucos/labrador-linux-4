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
	{ 0xb2f7c373, "param_ops_int" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0x34e11988, "param_ops_ushort" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x80cbad83, "usb_get_descriptor" },
	{ 0xccf9e241, "usb_clear_halt" },
	{ 0x4c3412e2, "usb_get_status" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0x4f22d6f9, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8752b44d, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x951c87f9, "page_address" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x3cad28, "_dev_info" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xa165c7ad, "usb_unlink_urb" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xe6c12171, "complete" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5f754e5a, "memset" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x37a0cba, "kfree" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x49240adf, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xef23798e, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x87972804, "usb_sg_cancel" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");
