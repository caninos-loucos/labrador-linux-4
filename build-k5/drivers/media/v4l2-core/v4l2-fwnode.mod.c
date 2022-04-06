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
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x84f7d659, "v4l2_async_register_subdev" },
	{ 0x434a9b71, "fwnode_graph_get_remote_port_parent" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x6f67568a, "fwnode_handle_put" },
	{ 0x67d15195, "v4l2_async_subdev_notifier_register" },
	{ 0xb2bdaefe, "v4l2_async_notifier_cleanup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7900adc, "fwnode_get_next_parent" },
	{ 0x9a7b2d6e, "fwnode_device_is_available" },
	{ 0xe782df19, "fwnode_property_present" },
	{ 0x648b4baa, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2b3eacf1, "fwnode_property_read_u64_array" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xf7759b55, "fwnode_property_read_u32_array" },
	{ 0xca9dc5a2, "fwnode_graph_parse_endpoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x5ddb23b1, "fwnode_get_parent" },
	{ 0x4a4523e9, "__dynamic_dev_dbg" },
	{ 0xc4436e41, "fwnode_property_get_reference_args" },
	{ 0x92b8c3c, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc7f3306f, "fwnode_graph_get_next_endpoint" },
	{ 0x7fde1ea2, "dev_fwnode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xacd1ac40, "fwnode_graph_get_remote_endpoint" },
	{ 0x2fa31380, "v4l2_async_notifier_unregister" },
	{ 0x2487c77, "of_fwnode_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

