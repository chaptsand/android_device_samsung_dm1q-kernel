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
#ifndef _LINUX_NEXTHOP_H
#define _LINUX_NEXTHOP_H
#include <linux/types.h>
struct nhmsg {
  unsigned char nh_family;
  unsigned char nh_scope;
  unsigned char nh_protocol;
  unsigned char resvd;
  unsigned int nh_flags;
};
struct nexthop_grp {
  __u32 id;
  __u8 weight;
  __u8 resvd1;
  __u16 resvd2;
};
enum {
  NEXTHOP_GRP_TYPE_MPATH,
  NEXTHOP_GRP_TYPE_RES,
  __NEXTHOP_GRP_TYPE_MAX,
};
#define NEXTHOP_GRP_TYPE_MAX (__NEXTHOP_GRP_TYPE_MAX - 1)
enum {
  NHA_UNSPEC,
  NHA_ID,
  NHA_GROUP,
  NHA_GROUP_TYPE,
  NHA_BLACKHOLE,
  NHA_OIF,
  NHA_GATEWAY,
  NHA_ENCAP_TYPE,
  NHA_ENCAP,
  NHA_GROUPS,
  NHA_MASTER,
  NHA_FDB,
  NHA_RES_GROUP,
  NHA_RES_BUCKET,
  __NHA_MAX,
};
#define NHA_MAX (__NHA_MAX - 1)
enum {
  NHA_RES_GROUP_UNSPEC,
  NHA_RES_GROUP_PAD = NHA_RES_GROUP_UNSPEC,
  NHA_RES_GROUP_BUCKETS,
  NHA_RES_GROUP_IDLE_TIMER,
  NHA_RES_GROUP_UNBALANCED_TIMER,
  NHA_RES_GROUP_UNBALANCED_TIME,
  __NHA_RES_GROUP_MAX,
};
#define NHA_RES_GROUP_MAX (__NHA_RES_GROUP_MAX - 1)
enum {
  NHA_RES_BUCKET_UNSPEC,
  NHA_RES_BUCKET_PAD = NHA_RES_BUCKET_UNSPEC,
  NHA_RES_BUCKET_INDEX,
  NHA_RES_BUCKET_IDLE_TIME,
  NHA_RES_BUCKET_NH_ID,
  __NHA_RES_BUCKET_MAX,
};
#define NHA_RES_BUCKET_MAX (__NHA_RES_BUCKET_MAX - 1)
#endif
