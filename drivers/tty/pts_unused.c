// SPDX-License-Identifier: GPL-2.0
/*
 * Stub definitions for KernelSU symbols
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kprobes.h>

#ifdef CONFIG_KSU
/* 为KernelSU未定义的符号提供弱符号存根定义 */
__weak struct kprobe execve_kp;
__weak struct kprobe newfstatat_kp;
__weak struct kprobe faccessat_kp;
__weak struct kprobe pts_unix98_lookup_kp;
__weak bool ksu_devpts_hook;
#endif

/* 为其他未定义的符号提供存根 */
int inotify_mark_user_mask;
int do_execveat_common; 