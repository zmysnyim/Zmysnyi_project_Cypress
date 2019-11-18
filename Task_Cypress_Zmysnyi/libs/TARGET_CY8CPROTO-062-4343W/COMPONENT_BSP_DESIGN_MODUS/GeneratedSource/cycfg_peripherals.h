/*******************************************************************************
* File Name: cycfg_peripherals.h
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_csd.h"
#include "cy_sysanalog.h"
#include "cy_sar.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_sd_host.h"
#include "cy_rtc.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_CSD_ENABLED 1U
#define CY_CAPSENSE_CORE 4u
#define CY_CAPSENSE_CPU_CLK 100000000u
#define CY_CAPSENSE_PERI_CLK 50000000u
#define CY_CAPSENSE_VDDA_MV 3300u
#define CY_CAPSENSE_PERI_DIV_TYPE CY_SYSCLK_DIV_8_BIT
#define CY_CAPSENSE_PERI_DIV_INDEX 0u
#define Cmod_PORT GPIO_PRT7
#define CintA_PORT GPIO_PRT7
#define CintB_PORT GPIO_PRT7
#define Button0_Rx0_PORT GPIO_PRT8
#define Button0_Tx_PORT GPIO_PRT1
#define Button1_Rx0_PORT GPIO_PRT8
#define Button1_Tx_PORT GPIO_PRT1
#define LinearSlider0_Sns0_PORT GPIO_PRT8
#define LinearSlider0_Sns1_PORT GPIO_PRT8
#define LinearSlider0_Sns2_PORT GPIO_PRT8
#define LinearSlider0_Sns3_PORT GPIO_PRT8
#define LinearSlider0_Sns4_PORT GPIO_PRT8
#define Cmod_PIN 7u
#define CintA_PIN 1u
#define CintB_PIN 2u
#define Button0_Rx0_PIN 1u
#define Button0_Tx_PIN 0u
#define Button1_Rx0_PIN 2u
#define Button1_Tx_PIN 0u
#define LinearSlider0_Sns0_PIN 3u
#define LinearSlider0_Sns1_PIN 4u
#define LinearSlider0_Sns2_PIN 5u
#define LinearSlider0_Sns3_PIN 6u
#define LinearSlider0_Sns4_PIN 7u
#define Cmod_PORT_NUM 7u
#define CintA_PORT_NUM 7u
#define CintB_PORT_NUM 7u
#define CYBSP_CSD_HW CSD0
#define CYBSP_CSD_IRQ csd_interrupt_IRQn
#define AREF_ENABLED 1U
#define SAR_ENABLED 1U
#define SAR_HW SAR
#define SAR_IRQ pass_interrupt_sar_IRQn
#define SAR_CTRL (CY_SAR_VREF_PWR_100 | CY_SAR_VREF_SEL_BGR | CY_SAR_BYPASS_CAP_ENABLE | CY_SAR_NEG_SEL_VSSA_KELVIN | CY_SAR_CTRL_NEGVREF_HW | CY_SAR_CTRL_COMP_DLY_12 | CY_SAR_COMP_PWR_100 | CY_SAR_DEEPSLEEP_SARMUX_OFF | CY_SAR_SARSEQ_SWITCH_ENABLE)
#define SAR_SAMPLE (SAR_SAMPLE_CTRL_EOS_DSI_OUT_EN_Msk | CY_SAR_RIGHT_ALIGN | CY_SAR_DIFFERENTIAL_SIGNED | CY_SAR_SINGLE_ENDED_SIGNED | CY_SAR_AVG_CNT_2 | CY_SAR_AVG_MODE_SEQUENTIAL_FIXED | CY_SAR_TRIGGER_MODE_FW_ONLY)
#define SAR_CH0_CONFIG (CY_SAR_POS_PORT_ADDR_SARMUX | CY_SAR_CHAN_POS_PIN_ADDR_2 | CY_SAR_CHAN_SINGLE_ENDED | CY_SAR_CHAN_AVG_ENABLE | CY_SAR_CHAN_SAMPLE_TIME_0)
#define SAR_MUX_SWITCH (CY_SAR_MUX_FW_VSSA_VMINUS | CY_SAR_MUX_FW_P2_VPLUS)
#define SAR_MUX_SWITCH_HW_CTRL (CY_SAR_MUX_SQ_CTRL_VSSA  | CY_SAR_MUX_SQ_CTRL_P2)
#define SAR_VREF_MV 1200UL
#define sdhc_1_ENABLED 1U
#define sdhc_1_HW SDHC1
#define sdhc_1_IRQ sdhc_1_interrupt_general_IRQn
#define RTC_ENABLED 1U
#define RTC_10_MONTH_OFFSET (28U)
#define RTC_MONTH_OFFSET (24U)
#define RTC_10_DAY_OFFSET (20U)
#define RTC_DAY_OFFSET (16U)
#define RTC_1000_YEAR_OFFSET (12U)
#define RTC_100_YEAR_OFFSET (8U)
#define RTC_10_YEAR_OFFSET (4U)
#define RTC_YEAR_OFFSET (0U)

extern cy_stc_csd_context_t cy_csd_0_context;
extern const cy_stc_sysanalog_config_t AREF_config;
extern const cy_stc_sar_config_t SAR_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t SAR_obj;
#endif //defined (CY_USING_HAL)
extern cy_en_sd_host_card_capacity_t sdhc_1_cardCapacity;
extern cy_en_sd_host_card_type_t sdhc_1_cardType;
extern uint32_t sdhc_1_rca;
extern const cy_stc_sd_host_init_config_t sdhc_1_config;
extern cy_stc_sd_host_sd_card_config_t sdhc_1_card_cfg;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t sdhc_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_rtc_config_t RTC_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t RTC_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
