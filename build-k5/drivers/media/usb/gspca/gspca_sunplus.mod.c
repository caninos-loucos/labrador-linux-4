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
	{ 0xf9a482f9, "msleep" },
	{ 0xed9caf03, "gspca_suspend" },
	{ 0xa6eed98, "gspca_dev_probe" },
	{ 0x748a4297, "gspca_resume" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x70f7d410, "gspca_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d792ddc, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc478068f, "usb_control_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f517289, "gspca_frame_add" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x85fbea7, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v041Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0461p0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0960d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p300Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp500Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp504Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp504Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp5330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp5360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCpFFFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3273d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC430d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC440d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC520d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp1018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p1311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p1314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p2221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p3261d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p3281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0303d*dc*dsc*dp*ic*isc*ip*in*");
