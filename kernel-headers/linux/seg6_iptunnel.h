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
#ifndef _LINUX_SEG6_IPTUNNEL_H
#define _LINUX_SEG6_IPTUNNEL_H
#include <linux/seg6.h>
enum {
  SEG6_IPTUNNEL_UNSPEC,
  SEG6_IPTUNNEL_SRH,
  __SEG6_IPTUNNEL_MAX,
};
#define SEG6_IPTUNNEL_MAX (__SEG6_IPTUNNEL_MAX - 1)
struct seg6_iptunnel_encap {
  int mode;
  struct ipv6_sr_hdr srh[0];
};
#define SEG6_IPTUN_ENCAP_SIZE(x) ((sizeof(* x)) + (((x)->srh->hdrlen + 1) << 3))
enum {
  SEG6_IPTUN_MODE_INLINE,
  SEG6_IPTUN_MODE_ENCAP,
  SEG6_IPTUN_MODE_L2ENCAP,
};
#endif
