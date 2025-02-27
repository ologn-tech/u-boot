/* SPDX-License-Identifier:     GPL-2.0+ */
/*
 * Copyright (C) 2018 Rockchip Electronics Co., Ltd
 */

#ifndef _ASM_ARCH_SDRAM_PCTL_PX30_H
#define _ASM_ARCH_SDRAM_PCTL_PX30_H
#include <asm/arch/sdram_common.h>

struct ddr_pctl_regs {
	u32 pctl[35][2];
};

/* ddr pctl registers define */
#define DDR_PCTL2_MSTR			0x0
#define DDR_PCTL2_STAT			0x4
#define DDR_PCTL2_MSTR1			0x8
#define DDR_PCTL2_MRCTRL0		0x10
#define DDR_PCTL2_MRCTRL1		0x14
#define DDR_PCTL2_MRSTAT		0x18
#define DDR_PCTL2_MRCTRL2		0x1c
#define DDR_PCTL2_DERATEEN		0x20
#define DDR_PCTL2_DERATEINT		0x24
#define DDR_PCTL2_MSTR2			0x28
#define DDR_PCTL2_PWRCTL		0x30
#define DDR_PCTL2_PWRTMG		0x34
#define DDR_PCTL2_HWLPCTL		0x38
#define DDR_PCTL2_RFSHCTL0		0x50
#define DDR_PCTL2_RFSHCTL1		0x54
#define DDR_PCTL2_RFSHCTL2		0x58
#define DDR_PCTL2_RFSHCTL4		0x5c
#define DDR_PCTL2_RFSHCTL3		0x60
#define DDR_PCTL2_RFSHTMG		0x64
#define DDR_PCTL2_RFSHTMG1		0x68
#define DDR_PCTL2_RFSHCTL5		0x6c
#define DDR_PCTL2_ECCCFG0		0x70
#define DDR_PCTL2_ECCCFG1		0x74
#define DDR_PCTL2_ECCSTAT		0x78
#define DDR_PCTL2_ECCCTL		0x7c
#define DDR_PCTL2_ECCERRCNT		0x80
#define DDR_PCTL2_ECCCADDR0		0x84
#define DDR_PCTL2_ECCCADDR1		0x88
#define DDR_PCTL2_ECCCSYN0		0x8c
#define DDR_PCTL2_ECCCSYN1		0x90
#define DDR_PCTL2_ECCCSYN2		0x94
#define DDR_PCTL2_ECCBITMASK0		0x98
#define DDR_PCTL2_ECCBITMASK1		0x9c
#define DDR_PCTL2_ECCBITMASK2		0xa0
#define DDR_PCTL2_ECCUADR0		0xa4
#define DDR_PCTL2_ECCUADR1		0xa8
#define DDR_PCTL2_ECCUSYNC0		0xac
#define DDR_PCTL2_ECCUSYNC1		0xb0
#define DDR_PCTL2_ECCUSYNC2		0xb4
#define DDR_PCTL2_ECCPOSISONADDR0	0xb8
#define DDR_PCTL2_ECCPOSISONADDR1	0xbc
#define DDR_PCTL2_INIT0			0xd0
#define DDR_PCTL2_INIT1			0xd4
#define DDR_PCTL2_INIT2			0xd8
#define DDR_PCTL2_INIT3			0xdc
#define DDR_PCTL2_INIT4			0xe0
#define DDR_PCTL2_INIT5			0xe4
#define DDR_PCTL2_INIT6			0xe8
#define DDR_PCTL2_INIT7			0xec
#define DDR_PCTL2_DIMMCTL		0xf0
#define DDR_PCTL2_RANKCTL		0xf4
#define DDR_PCTL2_CHCTL			0xfc
#define DDR_PCTL2_DRAMTMG0		0x100
#define DDR_PCTL2_DRAMTMG1		0x104
#define DDR_PCTL2_DRAMTMG2		0x108
#define DDR_PCTL2_DRAMTMG3		0x10c
#define DDR_PCTL2_DRAMTMG4		0x110
#define DDR_PCTL2_DRAMTMG5		0x114
#define DDR_PCTL2_DRAMTMG6		0x118
#define DDR_PCTL2_DRAMTMG7		0x11c
#define DDR_PCTL2_DRAMTMG8		0x120
#define DDR_PCTL2_DRAMTMG9		0x124
#define DDR_PCTL2_DRAMTMG10		0x128
#define DDR_PCTL2_DRAMTMG11		0x12c
#define DDR_PCTL2_DRAMTMG12		0x130
#define DDR_PCTL2_DRAMTMG13		0x134
#define DDR_PCTL2_DRAMTMG14		0x138
#define DDR_PCTL2_DRAMTMG15		0x13c
#define DDR_PCTL2_DRAMTMG16		0x140
#define DDR_PCTL2_ZQCTL0		0x180
#define DDR_PCTL2_ZQCTL1		0x184
#define DDR_PCTL2_ZQCTL2		0x188
#define DDR_PCTL2_ZQSTAT		0x18c
#define DDR_PCTL2_DFITMG0		0x190
#define DDR_PCTL2_DFITMG1		0x194
#define DDR_PCTL2_DFILPCFG0		0x198
#define DDR_PCTL2_DFILPCFG1		0x19c
#define DDR_PCTL2_DFIUPD0		0x1a0
#define DDR_PCTL2_DFIUPD1		0x1a4
#define DDR_PCTL2_DFIUPD2		0x1a8
#define DDR_PCTL2_DFIMISC		0x1b0
#define DDR_PCTL2_DFITMG2		0x1b4
#define DDR_PCTL2_DFITMG3		0x1b8
#define DDR_PCTL2_DFISTAT		0x1bc
#define DDR_PCTL2_DBICTL		0x1c0
#define DDR_PCTL2_ADDRMAP0		0x200
#define DDR_PCTL2_ADDRMAP1		0x204
#define DDR_PCTL2_ADDRMAP2		0x208
#define DDR_PCTL2_ADDRMAP3		0x20c
#define DDR_PCTL2_ADDRMAP4		0x210
#define DDR_PCTL2_ADDRMAP5		0x214
#define DDR_PCTL2_ADDRMAP6		0x218
#define DDR_PCTL2_ADDRMAP7		0x21c
#define DDR_PCTL2_ADDRMAP8		0x220
#define DDR_PCTL2_ADDRMAP9		0x224
#define DDR_PCTL2_ADDRMAP10		0x228
#define DDR_PCTL2_ADDRMAP11		0x22c
#define DDR_PCTL2_ODTCFG		0x240
#define DDR_PCTL2_ODTMAP		0x244
#define DDR_PCTL2_SCHED			0x250
#define DDR_PCTL2_SCHED1		0x254
#define DDR_PCTL2_PERFHPR1		0x25c
#define DDR_PCTL2_PERFLPR1		0x264
#define DDR_PCTL2_PERFWR1		0x26c
#define DDR_PCTL2_DQMAP0		0x280
#define DDR_PCTL2_DQMAP1		0x284
#define DDR_PCTL2_DQMAP2		0x288
#define DDR_PCTL2_DQMAP3		0x28c
#define DDR_PCTL2_DQMAP4		0x290
#define DDR_PCTL2_DQMAP5		0x294
#define DDR_PCTL2_DBG0			0x300
#define DDR_PCTL2_DBG1			0x304
#define DDR_PCTL2_DBGCAM		0x308
#define DDR_PCTL2_DBGCMD		0x30c
#define DDR_PCTL2_DBGSTAT		0x310
#define DDR_PCTL2_SWCTL			0x320
#define DDR_PCTL2_SWSTAT		0x324
#define DDR_PCTL2_POISONCFG		0x36c
#define DDR_PCTL2_POISONSTAT		0x370
#define DDR_PCTL2_ADVECCINDEX		0x374
#define DDR_PCTL2_ADVECCSTAT		0x378
#define DDR_PCTL2_PSTAT			0x3fc
#define DDR_PCTL2_PCCFG			0x400
#define DDR_PCTL2_PCFGR_n		0x404
#define DDR_PCTL2_PCFGW_n		0x408
#define DDR_PCTL2_PCTRL_n		0x490

#define UMCTL2_REGS_FREQ(n)	\
	((0x1000 * (n) + (((n) > 0) ? 0x1000 : 0)))

/* PCTL2_MSTR */
#define PCTL2_FREQUENCY_MODE_MASK	(1)
#define PCTL2_FREQUENCY_MODE_SHIFT	(29)
#define PCTL2_DLL_OFF_MODE		BIT(15)
/* PCTL2_STAT */
#define PCTL2_SELFREF_TYPE_MASK		(3 << 4)
#define PCTL2_SELFREF_TYPE_SR_NOT_AUTO	(2 << 4)
#define PCTL2_OPERATING_MODE_MASK	(7)
#define PCTL2_OPERATING_MODE_INIT	(0)
#define PCTL2_OPERATING_MODE_NORMAL	(1)
#define PCTL2_OPERATING_MODE_PD		(2)
#define PCTL2_OPERATING_MODE_SR		(3)
/* PCTL2_MRCTRL0 */
#define PCTL2_MR_WR			BIT(31)
#define PCTL2_MR_ADDR_SHIFT		(12)
#define PCTL2_MR_RANK_SHIFT		(4)
#define PCTL2_MR_TYPE_WR		(0)
#define PCTL2_MR_TYPE_RD		(1)
/* PCTL2_MRCTRL1 */
#define PCTL2_MR_ADDRESS_SHIFT		(8)
#define PCTL2_MR_DATA_MASK		(0xff)
/* PCTL2_MRSTAT */
#define PCTL2_MR_WR_BUSY		BIT(0)
/* PCTL2_DERATEEN */
#define PCTL2_DERATE_ENABLE		(1)
/* PCTL2_PWRCTL */
#define PCTL2_SELFREF_SW		BIT(5)
#define PCTL2_POWERDOWN_EN		BIT(1)
#define PCTL2_SELFREF_EN		(1)
/* PCTL2_PWRTMG */
#define PCTL2_SELFREF_TO_X32_MASK	(0xFF)
#define PCTL2_SELFREF_TO_X32_SHIFT	(16)
#define PCTL2_POWERDOWN_TO_X32_MASK	(0x1F)
/* PCTL2_INIT3 */
#define PCTL2_DDR34_MR0_SHIFT		(16)
#define PCTL2_LPDDR234_MR1_SHIFT	(16)
#define PCTL2_DDR34_MR1_SHIFT		(0)
#define PCTL2_LPDDR234_MR2_SHIFT	(0)
/* PCTL2_INIT4 */
#define PCTL2_DDR34_MR2_SHIFT		(16)
#define PCTL2_LPDDR234_MR3_SHIFT	(16)
#define PCTL2_DDR34_MR3_SHIFT		(0)
#define PCTL2_LPDDR4_MR13_SHIFT		(0)

/* PCTL2_INIT6 */
#define PCTL2_DDR4_MR4_SHIFT		(16)
#define PCTL2_LPDDR4_MR11_SHIFT		(16)
#define PCTL2_DDR4_MR5_SHIFT		(0)
#define PCTL2_LPDDR4_MR12_SHIFT		(0)

/* PCTL2_INIT7 */
#define PCTL2_LPDDR4_MR22_SHIFT		(16)
#define PCTL2_DDR4_MR6_SHIFT		(0)
#define PCTL2_LPDDR4_MR14_SHIFT		(0)

#define PCTL2_MR_MASK			(0xffff)

/* PCTL2_RFSHCTL3 */
#define PCTL2_DIS_AUTO_REFRESH		(1)
/* PCTL2_ZQCTL0 */
#define PCTL2_DIS_AUTO_ZQ		BIT(31)
#define PCTL2_DIS_SRX_ZQCL		BIT(30)
/* PCTL2_DFILPCFG0 */
#define PCTL2_DFI_LP_EN_SR		BIT(8)
#define PCTL2_DFI_LP_EN_SR_MASK		BIT(8)
#define PCTL2_DFI_LP_EN_SR_SHIFT	(8)
/* PCTL2_DFIMISC */
#define PCTL2_DFI_INIT_COMPLETE_EN	(1)
/* PCTL2_DFISTAT */
#define PCTL2_DFI_LP_ACK		BIT(1)
#define PCTL2_DFI_INIT_COMPLETE		(1)
/* PCTL2_DBG1 */
#define PCTL2_DIS_HIF			BIT(1)
/* PCTL2_DBGCAM */
#define PCTL2_DBG_WR_Q_EMPTY		BIT(26)
#define PCTL2_DBG_RD_Q_EMPTY		BIT(25)
#define PCTL2_DBG_LPR_Q_DEPTH_MASK	(0xffff << 8)
#define PCTL2_DBG_LPR_Q_DEPTH_EMPTY	(0x0 << 8)
/* PCTL2_DBGCMD */
#define PCTL2_RANK1_REFRESH		BIT(1)
#define PCTL2_RANK0_REFRESH		(1)
/* PCTL2_DBGSTAT */
#define PCTL2_RANK1_REFRESH_BUSY	BIT(1)
#define PCTL2_RANK0_REFRESH_BUSY	(1)
/* PCTL2_SWCTL */
#define PCTL2_SW_DONE			(1)
#define PCTL2_SW_DONE_CLEAR		(0)
/* PCTL2_SWSTAT */
#define PCTL2_SW_DONE_ACK		(1)
/* PCTL2_PSTAT */
#define PCTL2_WR_PORT_BUSY_0		BIT(16)
#define PCTL2_RD_PORT_BUSY_0		(1)
/* PCTL2_PCTRLn */
#define PCTL2_PORT_EN			(1)

/* PCTL2_ECCCFG0 */
#define ECC_MODE_MASK			(0x7)
#define ECC_MODE_DIS			(0)
#define ECC_MODE_SEC			(0x4)
#define ECC_MODE_ADV			(0x5)
#define ECC_MODE_SHIFT			(0)
#define ECC_TEST_MODE			BIT(3)
#define ECC_DIS_SCRUB			BIT(4)
#define ECC_TYPE_SIDEBAND		(0)
#define ECC_TYPE_INLINE			(1)
#define ECC_TYPE_MASK			(1)
#define ECC_TYPE_SHIFT			(5)

void pctl_read_mr(void __iomem *pctl_base, u32 rank, u32 mr_num);
int pctl_write_mr(void __iomem *pctl_base, u32 rank, u32 mr_num, u32 arg,
		  u32 dramtype);
int pctl_write_vrefdq(void __iomem *pctl_base, u32 rank, u32 vrefrate,
		      u32 dramtype);

u32 pctl_dis_zqcs_aref(void __iomem *pctl_base);
void pctl_rest_zqcs_aref(void __iomem *pctl_base, u32 dis_auto_zq);

u32 pctl_remodify_sdram_params(struct ddr_pctl_regs *pctl_regs,
			       struct sdram_cap_info *cap_info,
			       u32 dram_type);
int pctl_cfg(void __iomem *pctl_base, struct ddr_pctl_regs *pctl_regs,
	     u32 sr_idle, u32 pd_idle);

void send_a_refresh(void __iomem *pctl_base, u32 cs);

#endif
