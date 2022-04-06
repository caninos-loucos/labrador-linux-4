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
	{ 0x20da465f, "ieee80211_rx_napi" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x12585e08, "_raw_spin_unlock" },
	{ 0x119af839, "generic_file_llseek" },
	{ 0x4a07c33b, "debugfs_create_dir" },
	{ 0xf89db10c, "single_open" },
	{ 0x18014b30, "debugfs_create_u8" },
	{ 0x951c87f9, "page_address" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x825c418c, "firmware_request_cache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe35c1c18, "single_release" },
	{ 0xc8db1dd3, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x219fd890, "seq_printf" },
	{ 0x6b50f924, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x92c9d6aa, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa7c08ed7, "trace_event_buffer_reserve" },
	{ 0x5109164d, "debugfs_create_file" },
	{ 0x46e29c5a, "seq_read" },
	{ 0x32a4f18b, "bpf_trace_run3" },
	{ 0xa4a3eeab, "__alloc_pages_nodemask" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0xcbfc0194, "ieee80211_stop_queues" },
	{ 0xd93fb87a, "simple_attr_read" },
	{ 0x7ec337cd, "ieee80211_stop_queue" },
	{ 0x65611c8, "ieee80211_tx_status" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x259f8da3, "debugfs_create_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc0056063, "trace_define_field" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x19425347, "bpf_trace_run9" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x6732738, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcf81bddc, "ieee80211_free_txskb" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x291afc6a, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x388b1b90, "trace_event_reg" },
	{ 0x63d921fd, "usb_poison_urb" },
	{ 0xf5d63742, "seq_putc" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf2b21839, "simple_attr_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x58103150, "usb_free_coherent" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x33086156, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x135aaa2a, "devm_kmemdup" },
	{ 0x9555fe58, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x3cad28, "_dev_info" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdf473a0e, "__free_pages" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x12a1106d, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4ac7104a, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x56766bb9, "usb_reset_device" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xf04c7621, "usb_put_dev" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf660a8c3, "ieee80211_send_bar" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x3ff582e7, "ieee80211_get_tx_rates" },
	{ 0x30d0338d, "trace_event_buffer_commit" },
	{ 0xf1512f9d, "pskb_expand_head" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3cec2af7, "ieee80211_wake_queue" },
	{ 0xb8bdf932, "event_triggers_call" },
	{ 0xc3167391, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd06b5212, "bpf_trace_run2" },
	{ 0x302cb88d, "ieee80211_register_hw" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xd75a2c88, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5be49619, "trace_event_raw_init" },
	{ 0x192d55c7, "ieee80211_tx_status_ext" },
	{ 0x7072b279, "skb_add_rx_frag" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xcb29a101, "request_firmware" },
	{ 0x2511866e, "ieee80211_free_hw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32fad96, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x557eeed6, "usb_alloc_coherent" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x98d7aa57, "bpf_trace_run4" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0x4c0bf32c, "simple_attr_open" },
	{ 0xbd1857b, "release_firmware" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x17ece8b4, "simple_attr_write" },
	{ 0x9e97dad1, "__skb_pad" },
	{ 0xa6b664a5, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");
