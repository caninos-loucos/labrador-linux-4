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
	{ 0x2d3385d3, "system_wq" },
	{ 0x63a49532, "device_remove_file" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x13142d50, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x119af839, "generic_file_llseek" },
	{ 0x230408f6, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf89db10c, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0x64938fea, "framebuffer_release" },
	{ 0xe35c1c18, "single_release" },
	{ 0x349d462f, "fb_sys_read" },
	{ 0x2ce46c06, "backlight_device_register" },
	{ 0x219fd890, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf83c969, "__hid_request" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5109164d, "debugfs_create_file" },
	{ 0x63c6df65, "sys_copyarea" },
	{ 0x46e29c5a, "seq_read" },
	{ 0xe6e562c8, "rc_allocate_device" },
	{ 0xa9fff1ec, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x70473684, "of_led_classdev_register" },
	{ 0xc7a34a36, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb36b25b5, "rc_free_device" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd63583f, "hid_hw_close" },
	{ 0x761f0e8e, "register_framebuffer" },
	{ 0x84b183ae, "strncmp" },
	{ 0x93fccabe, "debugfs_remove" },
	{ 0xae5c589, "rc_register_device" },
	{ 0xd71c87fa, "hid_hw_open" },
	{ 0xded641fa, "input_set_capability" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe10ec9df, "hid_set_field" },
	{ 0x712c331b, "simple_open" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0x72ecf935, "hid_alloc_report_buf" },
	{ 0x3cad28, "_dev_info" },
	{ 0x544d827c, "sys_fillrect" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7a5172c0, "input_register_device" },
	{ 0x5638c125, "sys_imageblit" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xf1f6466f, "fb_sys_write" },
	{ 0x8d16786a, "input_free_device" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x25601b9e, "framebuffer_alloc" },
	{ 0x6528028b, "fb_deferred_io_cleanup" },
	{ 0x42d9014c, "fb_deferred_io_init" },
	{ 0xb8fdac6b, "led_classdev_unregister" },
	{ 0xd75a2c88, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeab619f5, "input_unregister_device" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0x5017dc34, "ir_raw_event_store" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x6505df7b, "backlight_device_unregister" },
	{ 0xa217919e, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4b903b6e, "hid_output_report" },
	{ 0x712ffc59, "input_allocate_device" },
	{ 0x24e562b4, "unregister_framebuffer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");
