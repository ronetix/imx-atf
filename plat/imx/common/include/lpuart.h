/*
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __IMX_LPUART_H__
#define __IMX_LPUART_H__

#define VERID	0x0
#define PARAM	0x4
#define GLOBAL	0x8
#define PINCFG	0xC
#define BAUD	0x10
#define STAT	0x14
#define CTRL	0x18
#define DATA	0x1C
#define MATCH	0x20
#define MODIR	0x24
#define FIFO	0x28
#define WATER	0x2C

#define CTRL_TE		(1 << 19)
#define CTRL_RE		(1 << 18)

#define FIFO_TXFE	0x80
#define FIFO_RXFE	0x40

#define WATER_TXWATER_OFF	1
#define WATER_RXWATER_OFF	16

#define LPUART_CTRL_PT_MASK	0x1
#define LPUART_CTRL_PE_MASK	0x2
#define LPUART_CTRL_M_MASK	0x10

#define LPUART_BAUD_OSR_MASK                     (0x1F000000U)
#define LPUART_BAUD_OSR_SHIFT                    (24U)
#define LPUART_BAUD_OSR(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_OSR_SHIFT)) & LPUART_BAUD_OSR_MASK)

#define LPUART_BAUD_SBR_MASK                     (0x1FFFU)
#define LPUART_BAUD_SBR_SHIFT                    (0U)
#define LPUART_BAUD_SBR(x)                       (((uint32_t)(((uint32_t)(x)) << LPUART_BAUD_SBR_SHIFT)) & LPUART_BAUD_SBR_MASK)

#define LPUART_BAUD_SBNS_MASK                    (0x2000U)
#define LPUART_BAUD_BOTHEDGE_MASK                (0x20000U)
#define LPUART_BAUD_M10_MASK                     (0x20000000U)

#endif  /* __IMX_LPUART_H__*/
