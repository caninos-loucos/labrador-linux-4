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
	{ 0x20e3f774, "passthrough_attrib_attrs" },
	{ 0x6f9f9a42, "target_backend_unregister" },
	{ 0x4e5f8d92, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xfb124194, "blkdev_get_by_path" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x3a72ac28, "scsi_device_get" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x9407888d, "__scsi_execute" },
	{ 0x74a0aef2, "passthrough_parse_cdb" },
	{ 0xea1cecd3, "scsi_host_lookup" },
	{ 0x70b7ad03, "scsi_device_put" },
	{ 0xd5a96075, "blkdev_put" },
	{ 0x704da50c, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x91715312, "sprintf" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x5332ed9a, "blk_put_request" },
	{ 0x5a9e8ef5, "blk_execute_rq_nowait" },
	{ 0xfffa3100, "sg_next" },
	{ 0xab1b699b, "bio_alloc_bioset" },
	{ 0x6558361, "blk_rq_append_bio" },
	{ 0xeaee6160, "bio_add_pc_page" },
	{ 0xa1c9e3b4, "blk_get_request" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xaf39b614, "bio_put" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1c756a4e, "transport_kunmap_data_sg" },
	{ 0x20eace6b, "transport_kmap_data_sg" },
	{ 0x951c87f9, "page_address" },
	{ 0x36f0d450, "target_lun_is_rdonly" },
	{ 0x5ae4c888, "transport_copy_sense_to_cmd" },
	{ 0x6b3adf0a, "target_complete_cmd_with_length" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0x3b04e5e5, "__blk_put_request" },
	{ 0x4331e153, "target_complete_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,scsi_mod";

