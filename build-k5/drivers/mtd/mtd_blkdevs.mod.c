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
	{ 0xd2bcb413, "blk_init_queue" },
	{ 0xf4697ff2, "blk_cleanup_queue" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x771838b8, "mtd_table_mutex" },
	{ 0x8a194e11, "rq_flush_dcache_pages" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x50df0cbb, "__put_mtd_device" },
	{ 0xd638bdd7, "blk_start_queue" },
	{ 0x588cc1d3, "__get_mtd_device" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x1fcc2405, "__alloc_disk_node" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x59a3002f, "blk_queue_max_discard_sectors" },
	{ 0x40d3f54a, "del_gendisk" },
	{ 0x76e32e1c, "register_mtd_user" },
	{ 0x4880aebb, "kunmap" },
	{ 0x11ee6ea7, "__mtd_next_device" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7db819c5, "unregister_mtd_user" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x890d129f, "blk_queue_flag_clear" },
	{ 0xdf13ced, "module_put" },
	{ 0xf1364d9d, "blk_queue_flag_set" },
	{ 0x2b821bc0, "kmap" },
	{ 0x32e6b353, "put_disk" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa5cce395, "__blk_end_request_cur" },
	{ 0xc452814a, "blk_fetch_request" },
	{ 0x45e24e0e, "__blk_end_request_all" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5db1c990, "__module_get" },
	{ 0x9271cad3, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb69c9776, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x1c5329b6, "blk_queue_logical_block_size" },
	{ 0xeaa09a82, "set_disk_ro" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

