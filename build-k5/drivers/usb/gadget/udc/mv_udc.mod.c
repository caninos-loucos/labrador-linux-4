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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x676b9185, "usb_gadget_map_request" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x3373adb2, "dma_release_from_dev_coherent" },
	{ 0x815588a6, "clk_enable" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x8752b44d, "mem_map" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x7a7231b0, "arm_dma_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xaa5d0dae, "usb_del_gadget_udc" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xe34ef59f, "__platform_driver_register" },
	{ 0xd1f33136, "dma_alloc_from_dev_coherent" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xde0ff11a, "usb_gadget_unmap_request" },
	{ 0xd06c58bc, "usb_gadget_udc_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x328a05f1, "strncpy" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc8a1a3d9, "platform_get_resource" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3cad28, "_dev_info" },
	{ 0xd77e5208, "devm_usb_get_phy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0xbda89544, "dma_pool_alloc" },
	{ 0x792f2fa0, "devm_clk_get" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xaaeab9d5, "platform_get_resource_byname" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x518676c4, "usb_add_gadget_udc_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xa787dc87, "devm_ioremap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe9e6cddd, "platform_driver_unregister" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x2cf325a7, "dma_pool_create" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

