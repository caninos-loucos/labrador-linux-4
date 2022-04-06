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
	{ 0x2d3385d3, "system_wq" },
	{ 0x94f7a29, "skb_queue_head" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x42b35679, "__hci_cmd_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x559eca6d, "hci_register_dev" },
	{ 0xd9c4991a, "tty_unthrottle" },
	{ 0x948f17f3, "__percpu_down_read" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x86812242, "serdev_device_close" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2be2833, "hci_recv_frame" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x165b68a4, "hci_unregister_dev" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x6251421e, "serdev_device_write_buf" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x1f4772e2, "serdev_device_set_tiocm" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2df6d035, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3e4c82a6, "__percpu_init_rwsem" },
	{ 0xeb69d4f5, "tty_ldisc_flush" },
	{ 0x6bf21931, "n_tty_ioctl_helper" },
	{ 0x6900bfc4, "hci_alloc_dev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xaf98408, "serdev_device_write_flush" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xff895027, "percpu_up_write" },
	{ 0x5d2f984a, "skb_queue_tail" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x40a2498, "tty_driver_flush_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2b1ef447, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x5494825, "__percpu_up_read" },
	{ 0x9d669763, "memcpy" },
	{ 0x6acde4c7, "serdev_device_set_flow_control" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3ea407, "hci_free_dev" },
	{ 0x97b61906, "serdev_device_set_baudrate" },
	{ 0x447f2d29, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x94c3d24d, "percpu_down_write" },
	{ 0xa234f361, "tty_set_termios" },
	{ 0x7fb41c82, "percpu_free_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serdev";


MODULE_INFO(srcversion, "146F14BAE83B26BD351A871");
