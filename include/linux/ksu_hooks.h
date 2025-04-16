/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_KSU_HOOKS_H
#define _LINUX_KSU_HOOKS_H

#include <linux/types.h>
#include <linux/kprobes.h>

/* KernelSU hooks */
extern bool ksu_devpts_hook;

/* KernelSU KProbes */
#ifdef KSU_HOOK_WITH_KPROBES
extern struct kprobe execve_kp;
extern struct kprobe newfstatat_kp;
extern struct kprobe faccessat_kp;
extern struct kprobe pts_unix98_lookup_kp;
#endif

#endif /* _LINUX_KSU_HOOKS_H */ 