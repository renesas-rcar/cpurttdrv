/****************************************************************************/
/*
 * FILE          : cpurtt_common_userdef.h
 * DESCRIPTION   : CPU Runtime Test driver
 * CREATED       : 2021.07.07
 * MODIFIED      : 2021.08.20
 * AUTHOR        : Renesas Electronics Corporation
 * TARGET DEVICE : R-Car V3Hv2
 * TARGET OS     : BareMetal
 * HISTORY       :
 *                 2021.07.07 Separated user-specific defined values from cpurtt_common.h. 
 *                 2021.08.20 Fix for FC release
 */
/****************************************************************************/
/*
 * Copyright(C) 2021 Renesas Electronics Corporation. All Rights Reserved.
 * RENESAS ELECTRONICS CONFIDENTIAL AND PROPRIETARY
 * This program must be used solely for the purpose for which
 * it was furnished by Renesas Electronics Corporation.
 * No part of this program may be reproduced or disclosed to
 * others, in any form, without the prior written permission
 * of Renesas Electronics Corporation.
 *
 ****************************************************************************/

#ifndef CPURTT_COMMON_USERDEF_H
#define CPURTT_COMMON_USERDEF_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Command definition for ioctl */
#define DRV_CPURTT_IOCTL_MAGIC  (0x9AU)
#define DRV_CPURTT_CMD_CODE     (0x1000U)

#define DRV_CPURTT_IOCTL_DEVINIT    _IO( DRV_CPURTT_IOCTL_MAGIC, DRV_CPURTT_CMD_CODE )                                      /* ioctl command for drvCPURTT_UDF_DrvInitialize */
#define DRV_CPURTT_IOCTL_DEVDEINIT  _IO( DRV_CPURTT_IOCTL_MAGIC, DRV_CPURTT_CMD_CODE + 1U )                                  /* ioctl command for drvCPURTT_UDF_DrvDeInitialize */
#define DRV_CPURTT_IOCTL_SMONI      _IOWR( DRV_CPURTT_IOCTL_MAGIC, DRV_CPURTT_CMD_CODE + 2U, drvCPURTT_SmoniParam_t )        /* ioctl command for drvCPURTT_UDF_SmoniApiExecute */
#define DRV_CPURTT_IOCTL_DEVFBISTINIT    _IO( DRV_CPURTT_IOCTL_MAGIC, DRV_CPURTT_CMD_CODE + 3U )                             /* ioctl command for drvCPURTT_UDF_FbistInitialize */
#define DRV_CPURTT_IOCTL_DEVFBISTDEINIT  _IO( DRV_CPURTT_IOCTL_MAGIC, DRV_CPURTT_CMD_CODE + 4U )                             /* ioctl command for drvCPURTT_UDF_FbistDeInitialize */
#define DRV_CPURTT_IOCTL_WAIT_CALLBACK  _IOWR( DRV_CPURTT_IOCTL_MAGIC, DRV_CPURTT_CMD_CODE + 5U , drvCPURTT_CallbackInfo_t)  /* ioctl command for drvCPURTT_UDF_WaitCallback */

/* Definition of the kernel CPURTT device module name */
#define UDF_CPURTT_MODULE_NAME        "cpurttmod0"    /* cpurtt driver minor number */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif/* CPURTT_COMMON_USERDEF_H */

