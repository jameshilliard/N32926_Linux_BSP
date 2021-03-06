/*
 * arch/arm/mach-w55fa92/include/mach/map.h
 *
 * Copyright (c) 2008 Nuvoton technology corporation.
 *
 * Based on arch/arm/mach-s3c2410/include/mach/map.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation;version 2 of the License.
 *
 */

#ifndef __ASM_ARCH_MAP_H
#define __ASM_ARCH_MAP_H

#ifndef __ASSEMBLY__
#define W55FA92_ADDR(x)		((void __iomem *)0xF0000000 + (x))
#else
#define W55FA92_ADDR(x)		(0xF0000000 + (x))
#endif


/* interrupt controller is the first thing we put in, to make
 * the assembly code for the irq detection easier
 */

/* GCR_BA */
#define W55FA92_VA_GCR		W55FA92_ADDR(0x08000000)
#define W55FA92_PA_GCR		(0xB0000000)
#define W55FA92_SZ_GCR		SZ_4K

/* AIC_BA */
#define W55FA92_VA_IRQ		W55FA92_ADDR(0x00000000)
#define W55FA92_PA_IRQ		(0xB8000000)
#define W55FA92_SZ_IRQ		SZ_4K

/* ROT_BA */
#define W55FA92_VA_ROT		W55FA92_ADDR(0x00002000)
#define W55FA92_PA_ROT		0xB0002000
#define W55FA92_SZ_ROT		SZ_4K

/* SDIC_BA */
#define W55FA92_VA_SDIC		W55FA92_ADDR(0x00003000)
#define W55FA92_PA_SDIC		0xB0003000
#define W55FA92_SZ_SDIC		SZ_4K

/* CRC_BA */
#define W55FA92_VA_CRC		W55FA92_ADDR(0x00004000)
#define W55FA92_PA_CRC		0xB0004000
#define W55FA92_SZ_CRC		SZ_4K

/* SDIO_BA */
#define W55FA92_VA_SDIO		W55FA92_ADDR(0x00005000)
#define W55FA92_PA_SDIO		0xB0005000
#define W55FA92_SZ_SDIO		SZ_4K

/* EDMA_BA */
#define W55FA92_VA_EDMA		W55FA92_ADDR(0x00008000)
#define W55FA92_PA_EDMA		0xB0008000
#define W55FA92_SZ_EDMA		SZ_4K

/* RF_BA */
#define W55FA92_VA_RF		W55FA92_ADDR(0x00009000)
#define W55FA92_PA_RF		0xB0009000
#define W55FA92_SZ_RF		SZ_4K

/* RSC_BA */
#define W55FA92_VA_RSC		W55FA92_ADDR(0x0000A000)
#define W55FA92_PA_RSC		0xB000A000
#define W55FA92_SZ_RSC		SZ_4K

/* SPU_BA */
#define W55FA92_VA_SPU		W55FA92_ADDR(0x01000000)
#define W55FA92_PA_SPU		0xB1000000
#define W55FA92_SZ_SPU		SZ_4K

/* I2S_BA */
#define W55FA92_VA_I2SM		W55FA92_ADDR(0x01001000)
#define W55FA92_PA_I2SM		0xB1001000
#define W55FA92_SZ_I2SM		SZ_4K

/* LCD_BA */
#define W55FA92_VA_VPOST	W55FA92_ADDR(0x01002000)
#define W55FA92_PA_VPOST	0xB1002000
#define W55FA92_SZ_VPOST	SZ_4K

/* CAP_BA */
#define W55FA92_VA_VIDEOIN	W55FA92_ADDR(0x01003000)
#define W55FA92_PA_VIDEOIN	0xB1003000
#define W55FA92_SZ_VIDEOIN	SZ_4K

/* MDCT_BA */
#define W55FA92_VA_MDCT		W55FA92_ADDR(0x01004000)
#define W55FA92_PA_MDCT		0xB1004000
#define W55FA92_SZ_MDCT		SZ_4K

/* UOHCI20_BA */
#define W55FA92_VA_UOHCI20	W55FA92_ADDR(0x01005000)
#define W55FA92_PA_UOHCI20	0xB1005000
#define W55FA92_SZ_UOHCI20	SZ_4K

/* SIC_BA */
#define W55FA92_VA_SIC		W55FA92_ADDR(0x01006000)
#define W55FA92_PA_SIC		0xB1006000
#define W55FA92_SZ_SIC		SZ_4K

/* VDE_BA */
#define W55FA92_VA_VDE		W55FA92_ADDR(0x01007000)
#define W55FA92_PA_VDE		0xB1007000
#define W55FA92_SZ_VDE		SZ_4K

/* UDC_BA */
#define W55FA92_VA_USBD		W55FA92_ADDR(0x01008000)
#define W55FA92_PA_USBD		0xB1008000
#define W55FA92_SZ_USBD		SZ_4K

/* UHC_BA */
#define W55FA92_VA_USBH		W55FA92_ADDR(0x01009000)
#define W55FA92_PA_USBH		0xB1009000
#define W55FA92_SZ_USBH		SZ_4K

/* JPG_BA */
#define W55FA92_VA_JPEG		W55FA92_ADDR(0x0100A000)
#define W55FA92_PA_JPEG		0xB100A000
#define W55FA92_SZ_JPEG		SZ_4K

/* UEHCI20_BA */
#define W55FA92_VA_UEHCI20	W55FA92_ADDR(0x0100B000)
#define W55FA92_PA_UEHCI20	0xB100B000
#define W55FA92_SZ_UEHCI20	SZ_4K

/* GVE_BA */
#define W55FA92_VA_GVE		W55FA92_ADDR(0x0100C000)
#define W55FA92_PA_GVE		0xB100C000
#define W55FA92_SZ_GVE		SZ_4K

/* BLT_BA */
#define W55FA92_VA_BLT		W55FA92_ADDR(0x0100D000)
#define W55FA92_PA_BLT		0xB100D000
#define W55FA92_SZ_BLT		SZ_4K

/* EMAC_BA */
#define W55FA92_VA_EMC		W55FA92_ADDR(0x0100E000)
#define W55FA92_PA_EMC		0xB100E000
#define W55FA92_SZ_EMC		SZ_4K

/* AES_BA */
#define W55FA92_VA_AES		W55FA92_ADDR(0x0100F000)
#define W55FA92_PA_AES		0xB100F000
#define W55FA92_SZ_AES		SZ_4K

/* AES_BA */
#define W55FA92_VA_ENC		W55FA92_ADDR(0x01010000)
#define W55FA92_PA_ENC		0xB1010000
#define W55FA92_SZ_ENC		SZ_4K

/* GP_BA */
#define W55FA92_VA_GPIO		W55FA92_ADDR(0x08001000)
#define W55FA92_PA_GPIO		0xB8001000
#define W55FA92_SZ_GPIO		SZ_4K

/* TMR_BA */
#define W55FA92_VA_TIMER	W55FA92_ADDR(0x08002000)
#define W55FA92_PA_TIMER	0xB8002000
#define W55FA92_SZ_TIMER	SZ_4K

/* RTC_BA */
#define W55FA92_VA_RTC		W55FA92_ADDR(0x08003000)
#define W55FA92_PA_RTC		0xB8003000
#define W55FA92_SZ_RTC		SZ_4K

/* I2C_BA */
#define W55FA92_VA_I2C		W55FA92_ADDR(0x08004000)
#define W55FA92_PA_I2C		0xB8004000
#define W55FA92_SZ_I2C		SZ_4K

/* KPI_BA */
#define W55FA92_VA_KPI		W55FA92_ADDR(0x08005000)
#define W55FA92_PA_KPI		0xB8005000
#define W55FA92_SZ_KPI		SZ_4K

/* TMR2_BA */
#define W55FA92_VA_TIMER2	W55FA92_ADDR(0x08006000)
#define W55FA92_PA_TIMER2	0xB8006000
#define W55FA92_SZ_TIMER2	SZ_4K

/* PWM_BA */
#define W55FA92_VA_PWM		W55FA92_ADDR(0x08007000)
#define W55FA92_PA_PWM		0xB8007000
#define W55FA92_SZ_PWM		SZ_4K

/* UA_BA */
#define W55FA92_VA_UART		W55FA92_ADDR(0x08008000)
#define W55FA92_PA_UART		0xB8008000
#define W55FA92_SZ_UART		SZ_4K

/* SPIMS0_BA */
#define W55FA92_VA_SPI0		W55FA92_ADDR(0x0800C000)
#define W55FA92_PA_SPI0		0xB800C000
#define W55FA92_SZ_SPI0		SZ_4K

/* AudioADC_BA */
#define W55FA92_VA_ADC		W55FA92_ADDR(0x0800E000)
#define W55FA92_PA_ADC		0xB800E000
#define W55FA92_SZ_ADC		SZ_4K

/* TouchADC_BA */
#define W55FA92_VA_TP		W55FA92_ADDR(0x0800F000)
#define W55FA92_PA_TP		0xB800F000
#define W55FA92_SZ_TP		SZ_4K

#endif /* __ASM_ARCH_MAP_H */
