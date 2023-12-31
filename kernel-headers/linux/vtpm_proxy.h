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
#ifndef _LINUX_VTPM_PROXY_H
#define _LINUX_VTPM_PROXY_H
#include <linux/types.h>
#include <linux/ioctl.h>
enum vtpm_proxy_flags {
  VTPM_PROXY_FLAG_TPM2 = 1,
};
struct vtpm_proxy_new_dev {
  __u32 flags;
  __u32 tpm_num;
  __u32 fd;
  __u32 major;
  __u32 minor;
};
#define VTPM_PROXY_IOC_NEW_DEV _IOWR(0xa1, 0x00, struct vtpm_proxy_new_dev)
#define TPM2_CC_SET_LOCALITY 0x20001000
#define TPM_ORD_SET_LOCALITY 0x20001000
#endif
