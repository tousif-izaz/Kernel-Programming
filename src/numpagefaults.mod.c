#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x382f4bcd, "proc_create_single_data" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7278d328, "all_vm_events" },
	{ 0xe0fd6307, "seq_printf" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0x3af52c88, "remove_proc_entry" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2e7d2612, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C23F3657474E5DAAA2C7FEA");
