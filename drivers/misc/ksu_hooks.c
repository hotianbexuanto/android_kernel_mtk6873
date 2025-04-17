// SPDX-License-Identifier: GPL-2.0
/*
 * KernelSU hooks variable definitions
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kprobes.h>

/* 
 * Define the variables needed by KernelSU 
 * This prevents undefined symbol errors during linking
 */
bool ksu_devpts_hook = false;
struct kprobe execve_kp;
struct kprobe newfstatat_kp;
struct kprobe faccessat_kp;
struct kprobe pts_unix98_lookup_kp;

/* Export these symbols so they can be used by other modules */
EXPORT_SYMBOL(ksu_devpts_hook);
EXPORT_SYMBOL(execve_kp);
EXPORT_SYMBOL(newfstatat_kp);
EXPORT_SYMBOL(faccessat_kp);
EXPORT_SYMBOL(pts_unix98_lookup_kp); 