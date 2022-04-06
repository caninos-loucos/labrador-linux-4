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
	{ 0x3f0e7b94, "scsi_change_queue_depth" },
	{ 0x1d3ddb40, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcf8e396, "kmem_cache_destroy" },
	{ 0xbf2574e4, "target_register_template" },
	{ 0x60e98796, "driver_register" },
	{ 0xe3e6e4b0, "bus_register" },
	{ 0x61d28797, "__root_device_register" },
	{ 0x6310e958, "kmem_cache_create" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xb13febe9, "root_device_unregister" },
	{ 0x22b5d74c, "bus_unregister" },
	{ 0x9d4e225a, "driver_unregister" },
	{ 0xe8e85a19, "transport_generic_free_cmd" },
	{ 0xd6b14178, "target_execute_cmd" },
	{ 0x9d669763, "memcpy" },
	{ 0xe6c12171, "complete" },
	{ 0xe4c80508, "scsi_add_host_with_dma" },
	{ 0xe8c2fa42, "scsi_host_alloc" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x84d6ebc7, "scmd_printk" },
	{ 0x4f19bde1, "target_submit_cmd_map_sgls" },
	{ 0xa8c41a32, "target_put_sess_cmd" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xade711b2, "target_submit_tmr" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb9e5e042, "kmem_cache_alloc" },
	{ 0xd8203492, "kmem_cache_free" },
	{ 0xf1364d9d, "blk_queue_flag_set" },
	{ 0xc8db1dd3, "seq_puts" },
	{ 0x704da50c, "scsi_host_put" },
	{ 0xa12dd9d4, "scsi_remove_host" },
	{ 0xc2e3b2a2, "device_register" },
	{ 0x9e9c7bc7, "dev_set_name" },
	{ 0xa2ed8ccb, "device_unregister" },
	{ 0xb504cc7f, "core_tpg_register" },
	{ 0xe1e3878f, "core_tpg_deregister" },
	{ 0x3ad2fb3d, "scsi_add_device" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0x30b13509, "scsi_remove_device" },
	{ 0x7adf2b4a, "scsi_device_lookup" },
	{ 0x159867c6, "target_setup_session" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x97255bdf, "strlen" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9273586, "target_remove_session" },
	{ 0xafbde0dd, "core_allocate_nexus_loss_ua" },
	{ 0x84b183ae, "strncmp" },
	{ 0xb81960ca, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,target_core_mod";

