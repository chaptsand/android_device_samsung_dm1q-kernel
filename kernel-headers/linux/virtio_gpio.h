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
#ifndef _LINUX_VIRTIO_GPIO_H
#define _LINUX_VIRTIO_GPIO_H
#include <linux/types.h>
#define VIRTIO_GPIO_MSG_GET_NAMES 0x0001
#define VIRTIO_GPIO_MSG_GET_DIRECTION 0x0002
#define VIRTIO_GPIO_MSG_SET_DIRECTION 0x0003
#define VIRTIO_GPIO_MSG_GET_VALUE 0x0004
#define VIRTIO_GPIO_MSG_SET_VALUE 0x0005
#define VIRTIO_GPIO_STATUS_OK 0x0
#define VIRTIO_GPIO_STATUS_ERR 0x1
#define VIRTIO_GPIO_DIRECTION_NONE 0x00
#define VIRTIO_GPIO_DIRECTION_OUT 0x01
#define VIRTIO_GPIO_DIRECTION_IN 0x02
struct virtio_gpio_config {
  __le16 ngpio;
  __u8 padding[2];
  __le32 gpio_names_size;
} __attribute__((packed));
struct virtio_gpio_request {
  __le16 type;
  __le16 gpio;
  __le32 value;
};
struct virtio_gpio_response {
  __u8 status;
  __u8 value;
};
struct virtio_gpio_response_get_names {
  __u8 status;
  __u8 value[];
};
#endif
