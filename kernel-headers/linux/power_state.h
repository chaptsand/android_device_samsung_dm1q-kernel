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
#ifndef LINUX_POWERSTATE_H
#define LINUX_POWERSTATE_H
#include <linux/types.h>
#define POWER_STATE_LPM_ACTIVE 0
#define POWER_STATE_ENTER_DEEPSLEEP 1
#define POWER_STATE_ENTER_HIBERNATE 2
#define POWER_STATE_MODEM_SUSPEND 3
#define POWER_STATE_ADSP_SUSPEND 4
#define POWER_STATE_CDSP_SUSPEND 5
#define POWER_STATE_MODEM_EXIT 6
#define POWER_STATE_ADSP_EXIT 7
#define POWER_STATE_CDSP_EXIT 8
#define POWER_STATE_EXIT_DEEPSLEEP_STATE 9
#define POWER_STATE_EXIT_HIBERNATE_STATE 10
#define EXCHANGE_CODE 'V'
enum ps_event_type {
  EXIT_DEEP_SLEEP = 1,
  EXIT_HIBERNATE,
  MDSP_BEFORE_POWERDOWN,
  MDSP_AFTER_POWERUP,
  ADSP_BEFORE_POWERDOWN,
  ADSP_AFTER_POWERUP,
  CDSP_BEFORE_POWERDOWN,
  CDSP_AFTER_POWERUP,
  PREPARE_FOR_HIBERNATION,
};
enum subsys_transition {
  SUBSYS_DEEPSLEEP = 1,
  SUBSYS_HIBERNATE,
};
#define LPM_ACTIVE _IOWR(EXCHANGE_CODE, POWER_STATE_LPM_ACTIVE, __u32 *)
#define ENTER_DEEPSLEEP _IOWR(EXCHANGE_CODE, POWER_STATE_ENTER_DEEPSLEEP, __u32 *)
#define ENTER_HIBERNATE _IOWR(EXCHANGE_CODE, POWER_STATE_ENTER_HIBERNATE, __u32 *)
#define MODEM_SUSPEND _IOWR(EXCHANGE_CODE, POWER_STATE_MODEM_SUSPEND, __u32 *)
#define ADSP_SUSPEND _IOWR(EXCHANGE_CODE, POWER_STATE_ADSP_SUSPEND, __u32 *)
#define CDSP_SUSPEND _IOWR(EXCHANGE_CODE, POWER_STATE_CDSP_SUSPEND, __u32 *)
#define MODEM_EXIT _IOWR(EXCHANGE_CODE, POWER_STATE_MODEM_EXIT, __u32 *)
#define ADSP_EXIT _IOWR(EXCHANGE_CODE, POWER_STATE_ADSP_EXIT, __u32 *)
#define CDSP_EXIT _IOWR(EXCHANGE_CODE, POWER_STATE_CDSP_EXIT, __u32 *)
#define EXIT_DEEPSLEEP_STATE _IOWR(EXCHANGE_CODE, POWER_STATE_EXIT_DEEPSLEEP_STATE, __u32 *)
#define EXIT_HIBERNATE_STATE _IOWR(EXCHANGE_CODE, POWER_STATE_EXIT_HIBERNATE_STATE, __u32 *)
#endif
