#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa7672d5a, "module_layout" },
	{ 0x5846d6b9, "generic_file_llseek" },
	{ 0xd0d8621b, "strlen" },
	{ 0x3e64808c, "kill_anon_super" },
	{ 0x67053080, "current_kernel_time" },
	{ 0x744b6663, "generic_read_dir" },
	{ 0x36c00ab8, "inode_setattr" },
	{ 0x8d46b892, "get_sb_single" },
	{ 0xb72397d5, "printk" },
	{ 0xad75670b, "d_alloc_root" },
	{ 0xe52592a, "panic" },
	{ 0xb4390f9a, "mcount" },
	{ 0x21b0c2ea, "inode_change_ok" },
	{ 0x898e62b4, "register_filesystem" },
	{ 0x9d75c1b6, "iput" },
	{ 0x97e225b7, "d_splice_alias" },
	{ 0x211d751c, "generic_readlink" },
	{ 0xe4c62ce7, "unregister_filesystem" },
	{ 0xec3f1e8, "new_inode" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2E8806D21DE48D6F0E4C584");
