/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Device Configurator: 2.0.0.1483
* Device Support Library (../../../psoc6pdl): 1.3.1.1499
*
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

cy_stc_csd_context_t cy_csd_0_context = 
{
	.lockKey = CY_CSD_NONE_KEY,
};
const cy_stc_sysanalog_config_t AREF_config = 
{
	.startup = CY_SYSANALOG_STARTUP_FAST,
	.iztat = CY_SYSANALOG_IZTAT_SOURCE_LOCAL,
	.vref = CY_SYSANALOG_VREF_SOURCE_LOCAL_1_2V,
	.deepSleep = CY_SYSANALOG_DEEPSLEEP_DISABLE,
};
const cy_stc_sar_config_t SAR_config = 
{
	.ctrl = (uint32_t) SAR_CTRL,
	.sampleCtrl = (uint32_t) SAR_SAMPLE,
	.sampleTime01 = (403UL << CY_SAR_SAMPLE_TIME0_SHIFT) | (2UL << CY_SAR_SAMPLE_TIME1_SHIFT),
	.sampleTime23 = (2UL << CY_SAR_SAMPLE_TIME2_SHIFT) | (2UL << CY_SAR_SAMPLE_TIME3_SHIFT),
	.rangeThres = (0UL << CY_SAR_RANGE_HIGH_SHIFT) | (0UL << CY_SAR_RANGE_LOW_SHIFT),
	.rangeCond = CY_SAR_RANGE_COND_BELOW,
	.chanEn = 1UL,
	.chanConfig = {(uint32_t) SAR_CH0_CONFIG, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL},
	.intrMask = (uint32_t) CY_SAR_INTR_EOS_MASK,
	.satIntrMask = 1UL,
	.rangeIntrMask = 1UL,
	.muxSwitch = SAR_MUX_SWITCH,
	.muxSwitchSqCtrl = SAR_MUX_SWITCH_HW_CTRL,
	.configRouting = true,
	.vrefMvValue = SAR_VREF_MV,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t SAR_obj = 
	{
		.type = CYHAL_RSC_ADC,
		.block_num = 0,
		.channel_num = 0,
	};
#endif //defined (CY_USING_HAL)
cy_en_sd_host_card_capacity_t sdhc_1_cardCapacity = CY_SD_HOST_SDSC;
cy_en_sd_host_card_type_t sdhc_1_cardType = CY_SD_HOST_EMMC;
uint32_t sdhc_1_rca = 0u;
const cy_stc_sd_host_init_config_t sdhc_1_config = 
{
	.emmc = true,
	.dmaType = CY_SD_HOST_DMA_SDMA,
	.enableLedControl = true,
};
cy_stc_sd_host_sd_card_config_t sdhc_1_card_cfg = 
{
	.lowVoltageSignaling = true,
	.busWidth = CY_SD_HOST_BUS_WIDTH_4_BIT,
	.cardType = &sdhc_1_cardType,
	.rca = &sdhc_1_rca,
	.cardCapacity = &sdhc_1_cardCapacity,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t sdhc_1_obj = 
	{
		.type = CYHAL_RSC_SDHC,
		.block_num = 1U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_rtc_config_t RTC_config = 
{
	.sec = 0U,
	.min = 58U,
	.hour = 12U,
	.amPm = CY_RTC_AM,
	.hrFormat = CY_RTC_24_HOURS,
	.dayOfWeek = CY_RTC_SUNDAY,
	.date = 10U,
	.month = CY_RTC_NOVEMBER,
	.year = 19U,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t RTC_obj = 
	{
		.type = CYHAL_RSC_RTC,
		.block_num = 0U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)


void init_cycfg_peripherals(void)
{
	Cy_SysClk_PeriphAssignDivider(PCLK_CSD_CLOCK, CY_SYSCLK_DIV_8_BIT, 0U);

	Cy_SysClk_PeriphAssignDivider(PCLK_PASS_CLOCK_SAR, CY_SYSCLK_DIV_8_BIT, 1U);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&SAR_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&sdhc_1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&RTC_obj);
#endif //defined (CY_USING_HAL)
}
