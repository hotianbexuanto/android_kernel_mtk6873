// SPDX-License-Identifier: GPL-2.0
/*
 * KernelSU hooks variables declarations
 */

#include <linux/ksu_hooks.h>
#include <linux/kernel.h>
#include <linux/export.h>
#include <linux/init.h>

/* Define KernelSU hook flags */
bool ksu_devpts_hook;
EXPORT_SYMBOL(ksu_devpts_hook);

/* Define KProbe variables */
struct kprobe execve_kp;
EXPORT_SYMBOL(execve_kp);

struct kprobe newfstatat_kp;
EXPORT_SYMBOL(newfstatat_kp);

struct kprobe faccessat_kp;
EXPORT_SYMBOL(faccessat_kp);

struct kprobe pts_unix98_lookup_kp;
EXPORT_SYMBOL(pts_unix98_lookup_kp);

static int __init ksu_hooks_init(void)
{
    /* Initialize variables */
    ksu_devpts_hook = false;
    memset(&execve_kp, 0, sizeof(struct kprobe));
    memset(&newfstatat_kp, 0, sizeof(struct kprobe));
    memset(&faccessat_kp, 0, sizeof(struct kprobe));
    memset(&pts_unix98_lookup_kp, 0, sizeof(struct kprobe));
    
    pr_info("KernelSU hooks initialized\n");
    return 0;
}

early_initcall(ksu_hooks_init); 