/*
 * Copyright (c) 2015, ARM Limited and Contributors. All rights reserved.
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#define PLATFORM_LINKER_FORMAT		"elf64-littleaarch64"
#define PLATFORM_LINKER_ARCH		aarch64

#define PLATFORM_STACK_SIZE		0x400
/* Fix Me! A35 */
#define CACHE_WRITEBACK_GRANULE		64

#define PLAT_PRIMARY_CPU		0x0
#define PLATFORM_MAX_CPU_PER_CLUSTER	4
#define PLATFORM_CLUSTER_COUNT		1
#define PLATFORM_CORE_COUNT		4

#define IMX_PWR_LVL0		MPIDR_AFFLVL0
#define IMX_PWR_LVL1		MPIDR_AFFLVL1

#define PWR_DOMAIN_AT_MAX_LVL		1
#define PLAT_MAX_PWR_LVL		2
#define PLAT_MAX_OFF_STATE		2
#define PLAT_MAX_RET_STATE		1

#define BL31_BASE			0x80000000
#define BL31_LIMIT			0x80020000

#ifdef SPD_trusty
#define BL32_BASE			0xfe000000
#define BL32_SIZE			0x00200000
#define BL32_LIMIT			0x100000000
#define PLAT_TEE_IMAGE_OFFSET		0x84000000
#endif

/* non-secure uboot base */
#define PLAT_NS_IMAGE_OFFSET		0x80020000

/* GICv3 base address */
#define PLAT_GICD_BASE			0x51a00000
#define PLAT_GICR_BASE			0x51b00000

#define PLAT_FSL_ADDR_SPACE_SIZE	(1ull << 32)
#define PLAT_VIRT_ADDR_SPACE_SIZE	(1ull << 32)
#define PLAT_PHY_ADDR_SPACE_SIZE	(1ull << 32)

#define MAX_XLAT_TABLES			8
#define MAX_MMAP_REGIONS		9

#define IMX_WUP_IRQSTR			0x51090000
#define IMX_BOOT_UART_BASE		0x5a060000
#define IMX_BOOT_UART_BAUDRATE		115200
#define IMX_BOOT_UART_CLK_IN_HZ		24000000
#define PLAT_CRASH_UART_BASE		IMX_BOOT_UART_BASE
#define PLAT__CRASH_UART_CLK_IN_HZ	24000000
#define IMX_CONSOLE_BAUDRATE		115200

#define COUNTER_FREQUENCY		8000000 /* 8MHz */

#define DEBUG_CONSOLE			0
#ifdef SPD_trusty
#define DEBUG_CONSOLE_A35		1
#else
#define DEBUG_CONSOLE_A35		0
#endif
#define PLAT_IMX8QXP			1
