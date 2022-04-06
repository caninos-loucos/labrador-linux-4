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
	{ 0x820b8ed, "param_array_ops" },
	{ 0xb2f7c373, "param_ops_int" },
	{ 0x75d3cbbc, "param_ops_charp" },
	{ 0xa30102ec, "param_ops_bool" },
	{ 0x3fd122e, "hid_unregister_driver" },
	{ 0x3f5e37ef, "__hid_register_driver" },
	{ 0xd0c854f6, "snd_card_free_when_closed" },
	{ 0xbdb0beb1, "snd_card_disconnect" },
	{ 0x3cad28, "_dev_info" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x63a49532, "device_remove_file" },
	{ 0xe8a842bf, "hid_hw_stop" },
	{ 0xeca82189, "snd_card_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4f227d1, "_dev_err" },
	{ 0xf3a5961f, "snd_card_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2ee0ae52, "device_create_file" },
	{ 0x56c7df0b, "snd_rawmidi_set_ops" },
	{ 0xfb9fd45b, "snd_rawmidi_new" },
	{ 0x328a05f1, "strncpy" },
	{ 0x7e78ccea, "snd_device_new" },
	{ 0x6604ab59, "snd_card_new" },
	{ 0xbd58422d, "hid_hw_start" },
	{ 0x230408f6, "hid_open_report" },
	{ 0xd3178f01, "kmem_cache_alloc_trace" },
	{ 0x7fcf349e, "kmalloc_caches" },
	{ 0x91715312, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc7a34a36, "input_event" },
	{ 0xf83c969, "__hid_request" },
	{ 0x998a5e2, "snd_rawmidi_receive" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");
