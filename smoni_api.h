/*******************************************************************************
 * Copyright (c) 2018-2021 Renesas Electronics Corporation. All rights reserved.
 *
 * DESCRIPTION   : The source code of Secure Monitor.
 * CREATED       : 2018.06.13
 * MODIFIED      : 2021.02.08
 * TARGET OS     : OS agnostic.
 ******************************************************************************/

#ifndef SMONI_API_H
#define SMONI_API_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <linux/types.h>

uint32_t Smoni_SetTimeout(uint32_t LuiTargetTimeout, uint32_t LuiMicroSecond);
uint32_t Smoni_ConfigurationRegisterCheck(uint32_t LuiSetting, uint32_t LuiTarget);
uint32_t Smoni_RuntimeTestLockAcquire(void);
uint32_t Smoni_RuntimeTestLockAcquire(void);
uint32_t Smoni_RuntimeTestLockRelease(void);
uint32_t Smoni_RuntimeTestA1Execute(uint32_t LuiRttex);
uint32_t Smoni_RuntimeTestA2Execute(uint32_t LuiRttex, uint32_t LuiWakeupSgi);
uint32_t Smoni_RuntimeTestFbaRead(uint32_t *LpRegTargets, uint32_t *LpRegValues, uint32_t LuiRegCount);
uint32_t Smoni_RuntimeTestFbaWrite(uint32_t *LpRegTargets, uint32_t *LpRegValues, uint32_t LuiRegCount);
uint32_t Smoni_SelfCheckExecute(uint32_t LuiRttex, uint32_t LuiTargetHierarchy);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* SMONI_API_H */
