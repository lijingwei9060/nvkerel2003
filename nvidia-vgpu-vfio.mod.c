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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5c9f3c39, "module_layout" },
	{ 0xe8eebd5b, "cdev_del" },
	{ 0xe737c19e, "kmalloc_caches" },
	{ 0xb168180, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xeac97218, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d96525b, "pci_free_irq_vectors" },
	{ 0x14e03501, "pci_write_config_word" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0x12a97a4, "pci_read_config_byte" },
	{ 0x8b75e91, "remap_vmalloc_range" },
	{ 0x382ee6af, "mdev_set_drvdata" },
	{ 0x84f15016, "boot_cpu_data" },
	{ 0xc5efcb8d, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x35e89b21, "vfio_unregister_notifier" },
	{ 0x793586e7, "mdev_uuid" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbcfd46cc, "pcie_capability_read_dword" },
	{ 0x1eea6a90, "mdev_unregister_device" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8f568f5c, "mdev_dev" },
	{ 0x979a04d5, "pci_write_config_byte" },
	{ 0xcd4911da, "pcie_capability_clear_and_set_word" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xc473b5f6, "mdev_register_device" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x27645069, "mdev_get_drvdata" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0x913f2eff, "vfio_register_notifier" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8f7d71c4, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x656c14e2, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x53a2c5ef, "current_task" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8559f346, "pci_read_config_word" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x37a26aa0, "pci_wait_for_pending_transaction" },
	{ 0xcebbee7c, "vfio_unpin_pages" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x6626afca, "down" },
	{ 0xe223c639, "mdev_parent_dev" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7f98740c, "cdev_add" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1ec6f2b9, "module_put" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd940c0e0, "pci_read_config_dword" },
	{ 0x4459ece3, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69e4662d, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6cf7b101, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2ece9e1c, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa9bd2676, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xee3c84a5, "remap_pfn_range" },
	{ 0xaecdd515, "unmap_mapping_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5e1a57e, "send_sig_info" },
	{ 0xcf2a6966, "up" },
	{ 0x64fd6eec, "mdev_from_dev" },
	{ 0x141c48be, "sg_alloc_table_from_pages" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28318305, "snprintf" },
	{ 0xadc044b7, "vfio_set_irqs_validate_and_prepare" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x77dd012b, "vfio_pin_pages" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8143411b, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xcf873b52, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc9e2000f, "pci_save_state" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdev,vfio";

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc00i00*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc02i00*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc06sc80i00*");

MODULE_INFO(srcversion, "263AD0A57DC57D5C5415254");
