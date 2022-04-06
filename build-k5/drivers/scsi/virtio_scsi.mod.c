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
	{ 0x7e9b8e16, "unregister_virtio_driver" },
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0xf6d707a0, "mempool_destroy" },
	{ 0xeeb21b0, "register_virtio_driver" },
	{ 0xe1422a46, "mempool_create" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0xe6c12171, "complete" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x3015f583, "sdev_prefix_printk" },
	{ 0x5f754e5a, "memset" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0x278606ec, "mempool_free" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa12dd9d4, "scsi_remove_host" },
	{ 0x12f99b3e, "blk_mq_unique_tag" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xe4c80508, "scsi_add_host_with_dma" },
	{ 0x46e4cfa1, "virtio_check_driver_offered_feature" },
	{ 0x116c72d1, "virtqueue_get_vring_size" },
	{ 0x704da50c, "scsi_host_put" },
	{ 0xe8c2fa42, "scsi_host_alloc" },
	{ 0xa2223c1c, "virtqueue_notify" },
	{ 0x3730925a, "virtqueue_kick_prepare" },
	{ 0xd43926cd, "virtqueue_add_sgs" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xd0d9df41, "scsi_is_host_device" },
	{ 0x3f0e7b94, "scsi_change_queue_depth" },
	{ 0xd946999e, "blk_mq_virtio_map_queues" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6c44447, "scsi_rescan_device" },
	{ 0x3ad2fb3d, "scsi_add_device" },
	{ 0xc35ece1e, "scsi_scan_host" },
	{ 0x30b13509, "scsi_remove_device" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x7adf2b4a, "scsi_device_lookup" },
	{ 0x619b344a, "virtqueue_kick" },
	{ 0x99fce861, "virtqueue_add_inbuf" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3646e843, "virtqueue_enable_cb" },
	{ 0x6520be59, "virtqueue_is_broken" },
	{ 0x1722f0c8, "virtqueue_get_buf" },
	{ 0x634d687d, "virtqueue_disable_cb" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9d669763, "memcpy" },
	{ 0x84d6ebc7, "scmd_printk" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("virtio:d00000008v*");
