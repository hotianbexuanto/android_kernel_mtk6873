// SPDX-License-Identifier: GPL-2.0
/*
 * KernelSU hooks variables declarations
 */

#include <linux/ksu_hooks.h>
#include <linux/kernel.h>

/* Define KernelSU hook flags */
bool ksu_devpts_hook;

/* Define KProbe variables if needed */
#ifdef KSU_HOOK_WITH_KPROBES
struct kprobe execve_kp;
struct kprobe newfstatat_kp;
struct kprobe faccessat_kp;
struct kprobe pts_unix98_lookup_kp;
#endif 