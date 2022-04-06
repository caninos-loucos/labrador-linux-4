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
	{ 0xb9bf202d, "transport_class_register" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfc21080c, "scsi_remove_target" },
	{ 0x518c41a8, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb483c93d, "scsi_flush_work" },
	{ 0xf4697ff2, "blk_cleanup_queue" },
	{ 0xe92b96e1, "blk_queue_prep_rq" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xfd272e01, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x84bd84aa, "transport_destroy_device" },
	{ 0xe5ae0a11, "bsg_job_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x63123342, "attribute_container_unregister" },
	{ 0x38e98daf, "__blk_complete_request" },
	{ 0xf26330e2, "scsi_scan_target" },
	{ 0x91715312, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0x2f04bce5, "bsg_job_get" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x26483214, "device_del" },
	{ 0x5154aebc, "scsi_queue_work" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe681d6f0, "transport_add_device" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3f3ceef8, "transport_configure_device" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8b061479, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x66fd3e05, "sysfs_remove_link" },
	{ 0x5694be65, "device_add" },
	{ 0xdb1a8bcc, "transport_class_unregister" },
	{ 0x704da50c, "scsi_host_put" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x157500f7, "sysfs_create_link" },
	{ 0x7183eaf4, "scsi_target_unblock" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x1bbd6828, "scsi_host_get" },
	{ 0xe4d93bcb, "netlink_broadcast" },
	{ 0x38c9845a, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2e2da0d1, "transport_setup_device" },
	{ 0x31c44f06, "bsg_unregister_queue" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3fcb38d6, "get_device" },
	{ 0x62aaf245, "__scsi_init_queue" },
	{ 0x99e31aba, "blk_run_queue_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd7019203, "device_initialize" },
	{ 0x33743708, "scsi_is_target_device" },
	{ 0x45df6b73, "scsi_nl_sock" },
	{ 0xde44e4a1, "transport_remove_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb54a4c0f, "scsi_target_block" },
	{ 0xfb36d70c, "bsg_job_done" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0x4ef2ee6b, "bsg_setup_queue" },
	{ 0xd773e4cc, "param_ops_uint" },
	{ 0xd12c34d0, "__nlmsg_put" },
	{ 0x6da85669, "blk_queue_rq_timed_out" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

