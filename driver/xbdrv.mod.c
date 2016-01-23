#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xbf8d6d33, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf9da1636, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xb49d32f6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf57c1739, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x72f254e, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x99df33d4, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x10a03d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x877de68b, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x803861ed, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2c1dfca1, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xb8a3d73, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x702ddb3a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x52126700, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x381528cb, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x4b3515d9, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0xc964bd20, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1234p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "580AFFE48D1E03B1CF77DD1");
