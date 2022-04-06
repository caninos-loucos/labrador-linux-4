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
	{ 0xe7627e01, "__platform_driver_probe" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xde0ff11a, "usb_gadget_unmap_request" },
	{ 0x676b9185, "usb_gadget_map_request" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x3cad28, "_dev_info" },
	{ 0x6e2eef47, "usb_add_gadget_udc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe97c4103, "ioremap" },
	{ 0xc8a1a3d9, "platform_get_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1174f419, "platform_get_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0xaa5d0dae, "usb_del_gadget_udc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

