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
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xf64be356, "scsi_unregister_device_handler" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6cfd0daa, "scsi_register_device_handler" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfa8f967d, "scsi_vpd_lun_id" },
	{ 0xed4c445a, "scsi_vpd_tpg_id" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x5c3a141d, "scsi_print_sense_hdr" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0xc393ab26, "scsi_test_unit_ready" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9407888d, "__scsi_execute" },
	{ 0x84b183ae, "strncmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "F33E04D2FBF15ACB301F8CE");
