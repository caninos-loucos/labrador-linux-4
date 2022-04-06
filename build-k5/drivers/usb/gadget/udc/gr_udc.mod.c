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
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9d669763, "memcpy" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0xde0ff11a, "usb_gadget_unmap_request" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3cad28, "_dev_info" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
	{ 0x1fb1e3be, "of_property_read_u32_index" },
	{ 0x6e2eef47, "usb_add_gadget_udc" },
	{ 0x2cf325a7, "dma_pool_create" },
	{ 0x1174f419, "platform_get_irq" },
	{ 0x71160775, "devm_ioremap_resource" },
	{ 0xc8a1a3d9, "platform_get_resource" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x676b9185, "usb_gadget_map_request" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd1f33136, "dma_alloc_from_dev_coherent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xaa5d0dae, "usb_del_gadget_udc" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x4c5939c0, "usb_gadget_set_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbda89544, "dma_pool_alloc" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7a7231b0, "arm_dma_ops" },
	{ 0x3373adb2, "dma_release_from_dev_coherent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:NGAISLER_USBDCT*");
MODULE_ALIAS("of:NGAISLER_USBDCT*C*");
MODULE_ALIAS("of:N01_021T*");
MODULE_ALIAS("of:N01_021T*C*");
