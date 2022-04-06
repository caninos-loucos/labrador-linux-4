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
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xe1234cb0, "btintel_set_event_mask" },
	{ 0xb0b49f74, "btintel_load_ddc_config" },
	{ 0x4cb8239a, "btintel_send_intel_reset" },
	{ 0x14742fb3, "btintel_download_firmware" },
	{ 0x3f34440, "btintel_read_boot_params" },
	{ 0xe66c9ec7, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xca4b18d2, "usb_enable_autosuspend" },
	{ 0xe78e76a, "of_property_read_variable_u16_array" },
	{ 0xeca250f8, "btintel_set_diag" },
	{ 0x70de6a75, "btintel_hw_error" },
	{ 0x3a2a8cc7, "btintel_set_bdaddr" },
	{ 0xf3bfa667, "btintel_set_diag_mfg" },
	{ 0x20046b40, "btbcm_setup_apple" },
	{ 0xf9efbf22, "usb_ifnum_to_if" },
	{ 0xb43c89ea, "btbcm_set_bdaddr" },
	{ 0xd9cff919, "btbcm_setup_patchram" },
	{ 0x559eca6d, "hci_register_dev" },
	{ 0x67de74ce, "usb_match_id" },
	{ 0xd721cf28, "usb_driver_claim_interface" },
	{ 0x25c54d47, "btrtl_shutdown_realtek" },
	{ 0x8f4d16a6, "btrtl_setup_realtek" },
	{ 0xab1b6f78, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x6d93955a, "of_irq_get_byname" },
	{ 0x90d9311a, "of_match_device" },
	{ 0x6900bfc4, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x7a462eea, "pm_wakeup_dev_event" },
	{ 0x42be2410, "hci_recv_diag" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x422eaca8, "usb_set_interface" },
	{ 0x793d9a92, "usb_autopm_put_interface" },
	{ 0xb02d9452, "usb_autopm_get_interface" },
	{ 0x317395e9, "btintel_exit_mfg" },
	{ 0x95879fa8, "btintel_check_bdaddr" },
	{ 0xe40a5916, "btintel_set_event_mask_mfg" },
	{ 0x71c90087, "memcmp" },
	{ 0xb69913c5, "__hci_cmd_sync_ev" },
	{ 0x6795446b, "btintel_enter_mfg" },
	{ 0xd1c32a9a, "btintel_read_version" },
	{ 0xbd1857b, "release_firmware" },
	{ 0xd7442057, "bt_info" },
	{ 0xcb29a101, "request_firmware" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbf681a5a, "usb_bulk_msg" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x42b35679, "__hci_cmd_sync" },
	{ 0x6af15773, "usb_driver_release_interface" },
	{ 0x78703483, "device_init_wakeup" },
	{ 0x2a3ea407, "hci_free_dev" },
	{ 0x165b68a4, "hci_unregister_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0x59bda5f9, "_raw_spin_unlock_irq" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x77e58a3a, "usb_get_from_anchor" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2be2833, "hci_recv_frame" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x234c0524, "usb_free_urb" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x1278d4a4, "kfree_skb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xd5e4332d, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x3fbc8ee8, "skb_put" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xbb3b4d01, "usb_unanchor_urb" },
	{ 0x47022514, "bt_err" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd73e233, "usb_anchor_urb" },
	{ 0x1f423cb0, "__dynamic_pr_debug" },
	{ 0xa6b664a5, "usb_alloc_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btintel,btbcm,btrtl";

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1248BD0A9030CBDB832F7F");
