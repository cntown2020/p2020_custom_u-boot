/*
 * Copyright (C) 2013 Imagination Technologies
 * Author: Paul Burton <paul.burton@mips.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __MSC01_H__
#define __MSC01_H__

/*
 * Bus Interface Unit
 */

#define MSC01_BIU_IP1BAS1L_OFS		0x0208
#define MSC01_BIU_IP1MSK1L_OFS		0x0218
#define MSC01_BIU_IP1BAS2L_OFS		0x0248
#define MSC01_BIU_IP1MSK2L_OFS		0x0258
#define MSC01_BIU_IP2BAS1L_OFS		0x0288
#define MSC01_BIU_IP2MSK1L_OFS		0x0298
#define MSC01_BIU_IP2BAS2L_OFS		0x02c8
#define MSC01_BIU_IP2MSK2L_OFS		0x02d8
#define MSC01_BIU_IP3BAS1L_OFS		0x0308
#define MSC01_BIU_IP3MSK1L_OFS		0x0318
#define MSC01_BIU_IP3BAS2L_OFS		0x0348
#define MSC01_BIU_IP3MSK2L_OFS		0x0358
#define MSC01_BIU_MCBAS1L_OFS		0x0388
#define MSC01_BIU_MCMSK1L_OFS		0x0398
#define MSC01_BIU_MCBAS2L_OFS		0x03c8
#define MSC01_BIU_MCMSK2L_OFS		0x03d8

/*
 * PCI Bridge
 */

#define MSC01_PCI_SC2PMBASL_OFS		0x0208
#define MSC01_PCI_SC2PMMSKL_OFS		0x0218
#define MSC01_PCI_SC2PMMAPL_OFS		0x0228
#define MSC01_PCI_SC2PIOBASL_OFS	0x0248
#define MSC01_PCI_SC2PIOMSKL_OFS	0x0258
#define MSC01_PCI_SC2PIOMAPL_OFS	0x0268
#define MSC01_PCI_P2SCMSKL_OFS		0x0308
#define MSC01_PCI_P2SCMAPL_OFS		0x0318
#define MSC01_PCI_INTSTAT_OFS		0x0608
#define MSC01_PCI_CFGADDR_OFS		0x0610
#define MSC01_PCI_CFGDATA_OFS		0x0618
#define MSC01_PCI_HEAD0_OFS		0x2000
#define MSC01_PCI_HEAD1_OFS		0x2008
#define MSC01_PCI_HEAD2_OFS		0x2010
#define MSC01_PCI_HEAD3_OFS		0x2018
#define MSC01_PCI_HEAD4_OFS		0x2020
#define MSC01_PCI_HEAD5_OFS		0x2028
#define MSC01_PCI_HEAD6_OFS		0x2030
#define MSC01_PCI_HEAD7_OFS		0x2038
#define MSC01_PCI_HEAD8_OFS		0x2040
#define MSC01_PCI_HEAD9_OFS		0x2048
#define MSC01_PCI_HEAD10_OFS		0x2050
#define MSC01_PCI_HEAD11_OFS		0x2058
#define MSC01_PCI_HEAD12_OFS		0x2060
#define MSC01_PCI_HEAD13_OFS		0x2068
#define MSC01_PCI_HEAD14_OFS		0x2070
#define MSC01_PCI_HEAD15_OFS		0x2078
#define MSC01_PCI_BAR0_OFS		0x2220
#define MSC01_PCI_CFG_OFS		0x2380
#define MSC01_PCI_SWAP_OFS		0x2388

#define MSC01_PCI_SC2PMMSKL_MSK_MSK	0xff000000
#define MSC01_PCI_SC2PIOMSKL_MSK_MSK	0xff000000

#define MSC01_PCI_INTSTAT_TA_SHF	6
#define MSC01_PCI_INTSTAT_TA_MSK	(0x1 << MSC01_PCI_INTSTAT_TA_SHF)
#define MSC01_PCI_INTSTAT_MA_SHF	7
#define MSC01_PCI_INTSTAT_MA_MSK	(0x1 << MSC01_PCI_INTSTAT_MA_SHF)

#define MSC01_PCI_CFGADDR_BNUM_SHF	16
#define MSC01_PCI_CFGADDR_BNUM_MSK	(0xff << MSC01_PCI_CFGADDR_BNUM_SHF)
#define MSC01_PCI_CFGADDR_DNUM_SHF	11
#define MSC01_PCI_CFGADDR_DNUM_MSK	(0x1f << MSC01_PCI_CFGADDR_DNUM_SHF)
#define MSC01_PCI_CFGADDR_FNUM_SHF	8
#define MSC01_PCI_CFGADDR_FNUM_MSK	(0x3 << MSC01_PCI_CFGADDR_FNUM_SHF)
#define MSC01_PCI_CFGADDR_RNUM_SHF	2
#define MSC01_PCI_CFGADDR_RNUM_MSK	(0x3f << MSC01_PCI_CFGADDR_RNUM_SHF)

#define MSC01_PCI_HEAD0_VENDORID_SHF	0
#define MSC01_PCI_HEAD0_DEVICEID_SHF	16

#define MSC01_PCI_HEAD2_REV_SHF		0
#define MSC01_PCI_HEAD2_CLASS_SHF	16

#define MSC01_PCI_CFG_EN_SHF		15
#define MSC01_PCI_CFG_EN_MSK		(0x1 << MSC01_PCI_CFG_EN_SHF)
#define MSC01_PCI_CFG_G_SHF		16
#define MSC01_PCI_CFG_G_MSK		(0x1 << MSC01_PCI_CFG_G_SHF)
#define MSC01_PCI_CFG_RA_SHF		17
#define MSC01_PCI_CFG_RA_MSK		(0x1 << MSC01_PCI_CFG_RA_SHF)

#define MSC01_PCI_SWAP_BAR0_BSWAP_SHF	0
#define MSC01_PCI_SWAP_IO_BSWAP_SHF	18

/*
 * Peripheral Bus Controller
 */

#define MSC01_PBC_CLKCFG_OFS		0x0100
#define MSC01_PBC_CS0CFG_OFS		0x0400
#define MSC01_PBC_CS0TIM_OFS		0x0500
#define MSC01_PBC_CS0RW_OFS		0x0600

#define MSC01_PBC_CLKCFG_SHF		0
#define MSC01_PBC_CLKCFG_MSK		(0x1f << MSC01_PBC_CLKCFG_SHF)

#define MSC01_PBC_CS0CFG_WS_SHF		0
#define MSC01_PBC_CS0CFG_WS_MSK		(0x1f << MSC01_PBC_CS0CFG_WS_SHF)
#define MSC01_PBC_CS0CFG_WSIDLE_SHF	8
#define MSC01_PBC_CS0CFG_WSIDLE_MSK	(0x1f << MSC01_PBC_CS0CFG_WSIDLE_SHF)
#define MSC01_PBC_CS0CFG_DTYP_SHF	16
#define MSC01_PBC_CS0CFG_DTYP_MSK	(0x3 << MSC01_PBC_CS0CFG_DTYP_SHF)
#define MSC01_PBC_CS0CFG_ADM_SHF	20
#define MSC01_PBC_CS0CFG_ADM_MSK	(0x1 << MSC01_PBC_CS0CFG_ADM_SHF)

#define MSC01_PBC_CS0TIM_CAT_SHF	0
#define MSC01_PBC_CS0TIM_CAT_MSK	(0x1f << MSC01_PBC_CS0TIM_CAT_SHF)
#define MSC01_PBC_CS0TIM_CDT_SHF	8
#define MSC01_PBC_CS0TIM_CDT_MSK	(0x1f << MSC01_PBC_CS0TIM_CDT_SHF)

#define MSC01_PBC_CS0RW_WAT_SHF		0
#define MSC01_PBC_CS0RW_WAT_MSK		(0x1f << MSC01_PBC_CS0RW_WAT_SHF)
#define MSC01_PBC_CS0RW_WDT_SHF		8
#define MSC01_PBC_CS0RW_WDT_MSK		(0x1f << MSC01_PBC_CS0RW_WDT_SHF)
#define MSC01_PBC_CS0RW_RAT_SHF		16
#define MSC01_PBC_CS0RW_RAT_MSK		(0x1f << MSC01_PBC_CS0RW_RAT_SHF)
#define MSC01_PBC_CS0RW_RDT_SHF		24
#define MSC01_PBC_CS0RW_RDT_MSK		(0x1f << MSC01_PBC_CS0RW_RDT_SHF)

#endif /* __MSC01_H__ */
