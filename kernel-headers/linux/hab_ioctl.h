/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _HAB_IOCTL_H
#define _HAB_IOCTL_H
#include <linux/types.h>
struct hab_send {
  __u64 data;
  __s32 vcid;
  __u32 sizebytes;
  __u32 flags;
};
struct hab_recv {
  __u64 data;
  __s32 vcid;
  __u32 sizebytes;
  __u32 timeout;
  __u32 flags;
};
struct hab_open {
  __s32 vcid;
  __u32 mmid;
  __u32 timeout;
  __u32 flags;
};
struct hab_close {
  __s32 vcid;
  __u32 flags;
};
struct hab_export {
  __u64 buffer;
  __s32 vcid;
  __u32 sizebytes;
  __u32 exportid;
  __u32 flags;
};
struct hab_import {
  __u64 index;
  __u64 kva;
  __s32 vcid;
  __u32 sizebytes;
  __u32 exportid;
  __u32 flags;
};
struct hab_unexport {
  __s32 vcid;
  __u32 exportid;
  __u32 flags;
};
struct hab_unimport {
  __s32 vcid;
  __u32 exportid;
  __u64 kva;
  __u32 flags;
};
struct hab_info {
  __s32 vcid;
  __u64 ids;
  __u64 names;
  __u32 namesize;
  __u32 flags;
};
struct vhost_hab_config {
  __u8 vm_name[32];
};
#define HAB_IOC_TYPE 0x0A
#define IOCTL_HAB_SEND _IOW(HAB_IOC_TYPE, 0x2, struct hab_send)
#define IOCTL_HAB_RECV _IOWR(HAB_IOC_TYPE, 0x3, struct hab_recv)
#define IOCTL_HAB_VC_OPEN _IOWR(HAB_IOC_TYPE, 0x4, struct hab_open)
#define IOCTL_HAB_VC_CLOSE _IOW(HAB_IOC_TYPE, 0x5, struct hab_close)
#define IOCTL_HAB_VC_EXPORT _IOWR(HAB_IOC_TYPE, 0x6, struct hab_export)
#define IOCTL_HAB_VC_IMPORT _IOWR(HAB_IOC_TYPE, 0x7, struct hab_import)
#define IOCTL_HAB_VC_UNEXPORT _IOW(HAB_IOC_TYPE, 0x8, struct hab_unexport)
#define IOCTL_HAB_VC_UNIMPORT _IOW(HAB_IOC_TYPE, 0x9, struct hab_unimport)
#define IOCTL_HAB_VC_QUERY _IOWR(HAB_IOC_TYPE, 0xA, struct hab_info)
#endif
