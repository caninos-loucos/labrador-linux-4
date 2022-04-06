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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x676b9185, "usb_gadget_map_request" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xde0ff11a, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xd06c58bc, "usb_gadget_udc_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3cad28, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0xbda89544, "dma_pool_alloc" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x518676c4, "usb_add_gadget_udc_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x2cf325a7, "dma_pool_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

