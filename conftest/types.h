#define NV_DMA_OPS_PRESENT
#define NV_SWIOTLB_DMA_OPS_PRESENT
#undef NV_NONCOHERENT_SWIOTLB_DMA_OPS_PRESENT
#define NV_VM_FAULT_HAS_ADDRESS
#define NV_VM_INSERT_PFN_PROT_PRESENT
#undef NV_VMF_INSERT_PFN_PROT_PRESENT
#define NV_VM_OPS_FAULT_REMOVED_VMA_ARG
#define NV_VMBUS_CHANNEL_HAS_RING_BUFFER_PAGE
#define NV_KMEM_CACHE_HAS_KOBJ_REMOVE_WORK
#undef NV_SYSFS_SLAB_UNLINK_PRESENT
#undef NV_PROC_OPS_PRESENT
#define NV_TIMESPEC64_PRESENT
#define NV_VMALLOC_HAS_PGPROT_T_ARG
#undef NV_MM_HAS_MMAP_LOCK
#define NV_PCI_CHANNEL_STATE_PRESENT
#define NV_PCI_DEV_HAS_ATS_ENABLED
#undef NV_REMOVE_MEMORY_HAS_NID_ARG
#undef NV_ADD_MEMORY_DRIVER_MANAGED_HAS_MHP_FLAGS_ARG
#define NV_NUM_REGISTERED_FB_PRESENT
#undef NV_PCI_DRIVER_HAS_DRIVER_MANAGED_DMA
#define NV_MDEV_PARENT_OPS_STRUCT_PRESENT
#undef NV_VFIO_INFO_ADD_CAPABILITY_HAS_CAP_TYPE_ID_ARGS
#define NV_VFIO_DEVICE_GFX_PLANE_INFO_PRESENT
#define NV_VM_FAULT_T_IS_PRESENT
#undef NV_VFIO_DEVICE_MIGRATION_HAS_START_PFN
#undef NV_MDEV_PARENT_OPS_HAS_OPEN_DEVICE
#undef NV_MDEV_PARENT_OPS_HAS_DEVICE_DRIVER
#undef NV_VFIO_DEVICE_MIG_STATE_PRESENT
#undef NV_VFIO_MIGRATION_OPS_PRESENT
#undef NV_MDEV_DRIVER_HAS_SUPPORTED_TYPE_GROUPS
#undef NV_VFIO_DEVICE_OPS_HAS_DMA_UNMAP
// Kernel version:             "4.19.90-2106.3.0.0095.oe1.x86_64"