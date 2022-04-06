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
	{ 0x9fed6986, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6379ab4d, "rtl_fw_cb" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x9cb219fb, "rtl_cam_get_free_entry" },
	{ 0xa947824d, "rtl92c_phy_set_rfpath_switch" },
	{ 0xecc5dd49, "rtl_usb_disconnect" },
	{ 0x5f8e0b89, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x94e6db03, "rtl92c_phy_set_txpower_level" },
	{ 0x22d0f291, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x1bcf197, "rtl92c_dm_check_txpower_tracking" },
	{ 0x43bc71db, "rtl_ps_disable_nic" },
	{ 0xba756dd2, "rtl92c_dm_watchdog" },
	{ 0x3dde211a, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x5d1a93c0, "_rtl92c_phy_rf_serial_write" },
	{ 0x9cda0239, "rtl_get_tcb_desc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6ee45a07, "_rtl92c_phy_rf_serial_read" },
	{ 0x9a4e97df, "rtl92c_phy_set_bw_mode" },
	{ 0xb01e2efe, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7fa8f480, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7d6c17d1, "rtl_phy_scan_operation_backup" },
	{ 0x37035651, "rtl92c_dm_init_edca_turbo" },
	{ 0xd3f54cb1, "rtl92c_phy_iq_calibrate" },
	{ 0xac815e99, "rtl92c_dm_init" },
	{ 0x42b27ed5, "rtl_usb_probe" },
	{ 0xdc8d92fc, "_rtl_dbg_trace" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8b9fc71a, "rtl92c_phy_set_bb_reg" },
	{ 0x5f754e5a, "memset" },
	{ 0xffaaf867, "rtl_ps_enable_nic" },
	{ 0x8fd73ed3, "rtl_get_hwinfo" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9e027309, "rtl92c_dm_rf_saving" },
	{ 0x4b0eb021, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb691b10e, "dm_writepowerindex" },
	{ 0x101f6d13, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa7882679, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0xd0cf8703, "_rtl_dbg_print_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x82e8b8be, "skb_pull" },
	{ 0xcd44805d, "_rtl92c_phy_set_rf_sleep" },
	{ 0x661392c2, "request_firmware_nowait" },
	{ 0x380ce8bc, "rtlwifi_rate_mapping" },
	{ 0x76d462d, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0xa1d01d3d, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb9a7357c, "rtl_rfreg_delay" },
	{ 0x90955285, "rtl92c_phy_set_io_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0xe2afc894, "_rtl_dbg_print" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdbf9c837, "rtl_cam_mark_invalid" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xcc5b45aa, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x88d4fd45, "rtl_cam_del_entry" },
	{ 0xc94b2692, "rtl_cam_empty_entry" },
	{ 0x3afae252, "rtl92ce_phy_set_rf_on" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8a0cc362, "rtl92c_phy_query_bb_reg" },
	{ 0x9ec0ab46, "_rtl92c_store_pwrIndex_diffrate_offset" },
	{ 0xd356e7b6, "skb_dequeue" },
	{ 0x336868ce, "rtl_cam_reset_all_entry" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4fd5d5c4, "rtl_process_phyinfo" },
	{ 0x60e0a77f, "dm_restorepowerindex" },
	{ 0x4123841b, "efuse_read_1byte" },
	{ 0xb32f3a24, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x4fc25f8f, "rtl92c_fill_h2c_cmd" },
	{ 0x6799eb9b, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x47321480, "param_ops_ullong" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi,rtl8192c-common,rtl_usb";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");
