/****************************************************************************/
/*
 * FILE          : cpurtt_common.h
 * DESCRIPTION   : CPU Runtime Test driver
 * CREATED       : 2021.02.15
 * MODIFIED      : 2021.07.27
 * AUTHOR        : Renesas Electronics Corporation
 * TARGET DEVICE : R-Car V3Hv2
 * TARGET OS     : BareMetal
 * HISTORY       :
 *                 2021.02.15 Create New File corresponding to BareMetal
 *                 2021.03.12 Fix for beta2 release
 *                 2021.04.15 Fix for beta3 release
 *                 2021.05.28 Fix for beta4 release
 *                 2021.07.27 Fix for FC release
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

#ifndef CPURTT_COMMON_H
#define CPURTT_COMMON_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "cpurtt_common_userdef.h"

/* TraceabilityID: V3X_RTT_CD_040304_structure_001 */
/* for smoni_api parameter */
typedef struct {
    uint32_t Index;
    uint32_t CpuId;
    uint32_t RetArg;
    void*    Arg;
} drvCPURTT_SmoniParam_t;
/* Covers: V3X_RTT_UD_040304_structure_001 */

/* TraceabilityID: V3X_RTT_CD_040304_structure_002 */
typedef struct {
    uint32_t Rttex;
} drvCPURTT_A1rttParam_t;
/* Covers: V3X_RTT_UD_040304_structure_002 */

/* TraceabilityID: V3X_RTT_CD_040304_structure_003 */
typedef struct {
    uint32_t Rttex;
    uint32_t Sgi;
} drvCPURTT_A2rttParam_t;
/* Covers: V3X_RTT_UD_040304_structure_003 */

/* TraceabilityID: V3X_RTT_CD_040304_structure_004 */
typedef struct {
    uintptr_t AddrBuf;
    uintptr_t DataBuf;
    uint32_t RegCount;
} drvCPURTT_FbaWriteParam_t;
/* Covers: V3X_RTT_UD_040304_structure_004 */

/* TraceabilityID: V3X_RTT_CD_040304_structure_005 */
typedef struct {
    uintptr_t AddrBuf;
    uintptr_t DataBuf;
    uint32_t RegCount;
} drvCPURTT_FbaReadParam_t;
/* Covers: V3X_RTT_UD_040304_structure_005 */

/* TraceabilityID: V3X_RTT_CD_040304_structure_006 */
typedef struct {
    uint32_t Setting;
    uint32_t TargetReg;
} drvCPURTT_ConfigRegCheckParam_t;
/* Covers: V3X_RTT_UD_040304_structure_006 */

/* TraceabilityID: V3X_RTT_CD_040304_structure_007 */
typedef struct {
    uint32_t Target;
    uint32_t MicroSec;
} drvCPURTT_SetTimeoutParam_t;
/* Covers: V3X_RTT_UD_040304_structure_007 */

/* TraceabilityID: V3X_RTT_CD_040304_structure_008 */
typedef struct {
    uint32_t Rttex;
    uint32_t TargetHierarchy;
} drvCPURTT_SelfCheckParam_t;
/* Covers: V3X_RTT_UD_040304_structure_008 */

/* TraceabilityID: V3X_RTT_CD_040408_enumeration_001 */
/* index for smoni api */
typedef enum
{
    DRV_CPURTT_SMONIAPI_SETTIMEOUT,
    DRV_CPURTT_SMONIAPI_CFGREGCHECK,
    DRV_CPURTT_SMONIAPI_LOCKACQUIRE,
    DRV_CPURTT_SMONIAPI_LOCKRELEASE,
    DRV_CPURTT_SMONIAPI_A1EXE,
    DRV_CPURTT_SMONIAPI_A2EXE,
    DRV_CPURTT_SMONIAPI_FBAWRITE,
    DRV_CPURTT_SMONIAPI_FBAREAD,
    DRV_CPURTT_SMONIAPI_SELFCHECK,
    DRV_CPURTT_SMONIAPI_SMONITABLE_MAX
} drvCPURTT_SmoniTable_t;
/* Covers: V3X_RTT_UD_040408_enumeration_001 */

/* TraceabilityID: V3X_RTT_CD_040305_structure_001 */
typedef struct {
    uint32_t FbistCbRequest;
    uint32_t BusCheckCbRequest;
    uint32_t RfsoOutputPinRequest;
} drvCPURTT_CallbackInfo_t;
/* Covers: V3X_RTT_UD_040305_structure_001 */

/* TraceabilityID: V3X_RTT_CD_040506_definition_001 */
/* Definition for callback control information */
#define DRV_CPURTT_CB_REQ_NON           (0x00000000U)
#define DRV_CPURTT_CB_REQ_CALLBACK      (0x00000001U)
#define DRV_CPURTT_CB_REQ_SETOUTPUT     (0x00000001U)
/* Covers: V3X_RTT_UD_040506_definition_001 */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif/* CPURTT_COMMON_H */

