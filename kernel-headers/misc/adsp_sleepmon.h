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
#ifndef __QCOM_ADSPSLEEPMON_H__
#define __QCOM_ADSPSLEEPMON_H__
#include <linux/types.h>
#define ADSPSLEEPMON_DEVICE_NAME "/dev/msm_adsp_sleepmon"
#define ADSPSLEEPMON_IOCTL_AUDIO_ACTIVITY _IOWR('R', 1, struct adspsleepmon_ioctl_audio)
#define ADSPSLEEPMON_IOCTL_CONFIGURE_PANIC _IOWR('R', 2, struct adspsleepmon_ioctl_panic)
#define ADSPSLEEPMON_IOCTL_AUDIO_VER_1 1
#define ADSPSLEEPMON_IOCTL_CONFIG_PANIC_VER_1 1
#define ADSPSLEEPMON_IOCTL_AUDIO_NUM_RES 3
enum adspsleepmon_ioctl_audio_cmd {
  ADSPSLEEPMON_AUDIO_ACTIVITY_START = 1,
  ADSPSLEEPMON_AUDIO_ACTIVITY_STOP,
  ADSPSLEEPMON_AUDIO_ACTIVITY_LPI_START,
  ADSPSLEEPMON_AUDIO_ACTIVITY_LPI_STOP,
  ADSPSLEEPMON_AUDIO_ACTIVITY_RESET,
  ADSPSLEEPMON_AUDIO_ACTIVITY_MAX,
};
enum adspsleepmon_ioctl_panic_cmd {
  ADSPSLEEPMON_DISABLE_PANIC_LPM = 1,
  ADSPSLEEPMON_DISABLE_PANIC_LPI,
  ADSPSLEEPMON_RESET_PANIC_LPM,
  ADSPSLEEPMON_RESET_PANIC_LPI,
  ADSPSLEEPMON_RESET_PANIC_MAX,
};
struct adspsleepmon_ioctl_audio {
  __u32 version;
  __u32 command;
  __u32 reserved[ADSPSLEEPMON_IOCTL_AUDIO_NUM_RES];
};
struct adspsleepmon_ioctl_panic {
  __u32 version;
  __u32 command;
};
#endif
