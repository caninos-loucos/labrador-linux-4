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
	{ 0xcf47e66f, "rt2x00usb_resume" },
	{ 0xdf816121, "rt2x00usb_suspend" },
	{ 0x80c73acf, "rt2x00usb_disconnect" },
	{ 0x32da4303, "rt2x00mac_tx_frames_pending" },
	{ 0x7e931ace, "rt2x00mac_get_ringparam" },
	{ 0xfde3daa4, "rt2x00mac_get_antenna" },
	{ 0x2fb68d23, "rt2x00mac_set_antenna" },
	{ 0x5f454858, "rt2x00mac_flush" },
	{ 0x3fd2d35, "rt2x00mac_rfkill_poll" },
	{ 0x50827f55, "rt2x00mac_conf_tx" },
	{ 0xf3c7005c, "rt2x00mac_get_stats" },
	{ 0x7e8ea422, "rt2x00mac_sw_scan_complete" },
	{ 0x1461bd8d, "rt2x00mac_sw_scan_start" },
	{ 0x43bee239, "rt2x00mac_set_key" },
	{ 0xa3697f05, "rt2x00mac_set_tim" },
	{ 0x71e9d66, "rt2x00mac_configure_filter" },
	{ 0xa5848bd7, "rt2x00mac_bss_info_changed" },
	{ 0xf4c26a17, "rt2x00mac_config" },
	{ 0x5a8bf5cd, "rt2x00mac_remove_interface" },
	{ 0xbea5409f, "rt2x00mac_add_interface" },
	{ 0xee804cd8, "rt2x00mac_stop" },
	{ 0x2f7f7e8c, "rt2x00mac_start" },
	{ 0x7f7a5eeb, "rt2x00mac_tx" },
	{ 0x6ade3587, "rt2x00usb_flush_queue" },
	{ 0x4876ff27, "rt2x00usb_kick_queue" },
	{ 0x80ad2887, "rt2x00usb_watchdog" },
	{ 0xd1f34570, "rt2x00usb_clear_entry" },
	{ 0xbedd47da, "rt2x00usb_uninitialize" },
	{ 0x9a90c701, "rt2x00usb_initialize" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0xb3286e29, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3cad28, "_dev_info" },
	{ 0x4fb7b4cd, "rt2x00lib_set_mac_address" },
	{ 0x630e11bf, "rt2x00usb_vendor_request" },
	{ 0x101f6d13, "skb_push" },
	{ 0xeebccee9, "rt2x00usb_vendor_request_buff" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x5138ae70, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb8a05899, "usb_submit_urb" },
	{ 0xdf992dd7, "consume_skb" },
	{ 0xdd27aeb3, "skb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0xdfa1397, "rt2x00usb_probe" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E9CB96CDF70A6DFF03D504B");
