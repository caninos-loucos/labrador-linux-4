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
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x1f4c6fab, "i2c_del_driver" },
	{ 0x49807b12, "i2c_register_driver" },
	{ 0xcbf0bc36, "of_property_read_variable_u32_array" },
	{ 0x7cca9665, "of_property_read_string" },
	{ 0xecee9dc1, "of_get_next_available_child" },
	{ 0x7a7d03f4, "of_get_child_by_name" },
	{ 0x84f7d659, "v4l2_async_register_subdev" },
	{ 0xf5ca5694, "v4l2_ctrl_new_std_menu_items" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x3cad28, "_dev_info" },
	{ 0x57679fcb, "v4l2_i2c_subdev_init" },
	{ 0x121a4d36, "of_node_put" },
	{ 0x3212923c, "v4l2_fwnode_endpoint_parse" },
	{ 0xb4a15713, "of_graph_get_next_endpoint" },
	{ 0x4b7b6251, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x54924b08, "gpiod_set_value_cansleep" },
	{ 0x5d160f2, "devm_gpiod_get_optional" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0xfd873e17, "media_device_unregister_entity" },
	{ 0x76f340f, "media_create_pad_link" },
	{ 0xe2152d9d, "media_device_register_entity" },
	{ 0xf3fae23e, "media_entity_pads_init" },
	{ 0xd54d7ac, "i2c_smbus_read_byte_data" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0x67d1c3f8, "i2c_smbus_write_byte_data" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xbf511952, "v4l2_async_unregister_subdev" },
	{ 0xfd272e01, "dev_printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-fwnode";

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");
