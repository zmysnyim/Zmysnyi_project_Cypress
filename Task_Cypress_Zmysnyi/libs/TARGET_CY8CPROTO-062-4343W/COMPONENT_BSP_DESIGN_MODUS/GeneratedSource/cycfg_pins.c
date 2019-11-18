/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t CYBSP_WCO_IN_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_WCO_IN_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_WCO_IN_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_WCO_IN_PORT_NUM,
		.channel_num = CYBSP_WCO_IN_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_WCO_OUT_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_WCO_OUT_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_WCO_OUT_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_WCO_OUT_PORT_NUM,
		.channel_num = CYBSP_WCO_OUT_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t BUTTON_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLUP,
	.hsiom = BUTTON_HSIOM,
	.intEdge = CY_GPIO_INTR_RISING,
	.intMask = 1UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t BUTTON_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = BUTTON_PORT_NUM,
		.channel_num = BUTTON_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_10_pin_0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ioss_0_port_10_pin_0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_10_pin_0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_10_pin_0_PORT_NUM,
		.channel_num = ioss_0_port_10_pin_0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_10_pin_2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ioss_0_port_10_pin_2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_10_pin_2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_10_pin_2_PORT_NUM,
		.channel_num = ioss_0_port_10_pin_2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_10_pin_3_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ioss_0_port_10_pin_3_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_10_pin_3_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_10_pin_3_PORT_NUM,
		.channel_num = ioss_0_port_10_pin_3_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_10_pin_6_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ioss_0_port_10_pin_6_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_10_pin_6_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_10_pin_6_PORT_NUM,
		.channel_num = ioss_0_port_10_pin_6_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ioss_0_port_12_pin_0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_0_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ioss_0_port_12_pin_1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_1_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ioss_0_port_12_pin_2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_2_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_3_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ioss_0_port_12_pin_3_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_3_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_3_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_3_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_4_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = ioss_0_port_12_pin_4_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_4_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_4_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_4_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_5_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = ioss_0_port_12_pin_5_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_5_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_5_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_5_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_6_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ioss_0_port_12_pin_6_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_6_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_6_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_6_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_12_pin_7_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ioss_0_port_12_pin_7_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_12_pin_7_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_12_pin_7_PORT_NUM,
		.channel_num = ioss_0_port_12_pin_7_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_13_pin_0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = ioss_0_port_13_pin_0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_13_pin_0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_13_pin_0_PORT_NUM,
		.channel_num = ioss_0_port_13_pin_0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_13_pin_1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = ioss_0_port_13_pin_1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_13_pin_1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_13_pin_1_PORT_NUM,
		.channel_num = ioss_0_port_13_pin_1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_13_pin_2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = ioss_0_port_13_pin_2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_13_pin_2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_13_pin_2_PORT_NUM,
		.channel_num = ioss_0_port_13_pin_2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_13_pin_3_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = ioss_0_port_13_pin_3_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_13_pin_3_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_13_pin_3_PORT_NUM,
		.channel_num = ioss_0_port_13_pin_3_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_TX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_TX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_TX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_TX_PORT_NUM,
		.channel_num = CYBSP_CSD_TX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = CYBSP_SWO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWO_PORT_NUM,
		.channel_num = CYBSP_SWO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLUP,
	.hsiom = CYBSP_SWDIO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWDIO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWDIO_PORT_NUM,
		.channel_num = CYBSP_SWDIO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLDOWN,
	.hsiom = CYBSP_SWDCK_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWDCK_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWDCK_PORT_NUM,
		.channel_num = CYBSP_SWDCK_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CINA_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CINA_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CINA_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CINA_PORT_NUM,
		.channel_num = CYBSP_CINA_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CINB_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CINB_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CINB_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CINB_PORT_NUM,
		.channel_num = CYBSP_CINB_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CMOD_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CMOD_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CMOD_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CMOD_PORT_NUM,
		.channel_num = CYBSP_CMOD_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_BTN0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_BTN0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_BTN0_PORT_NUM,
		.channel_num = CYBSP_CSD_BTN0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_BTN1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_BTN1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_BTN1_PORT_NUM,
		.channel_num = CYBSP_CSD_BTN1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD0_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD1_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD2_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD3_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD3_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD3_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD3_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD3_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD4_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD4_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD4_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD4_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD4_PIN,
	};
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
	Cy_GPIO_Pin_Init(CYBSP_WCO_IN_PORT, CYBSP_WCO_IN_PIN, &CYBSP_WCO_IN_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_WCO_IN_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_WCO_OUT_PORT, CYBSP_WCO_OUT_PIN, &CYBSP_WCO_OUT_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_WCO_OUT_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(BUTTON_PORT, BUTTON_PIN, &BUTTON_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&BUTTON_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_10_pin_0_PORT, ioss_0_port_10_pin_0_PIN, &ioss_0_port_10_pin_0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_10_pin_0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_10_pin_2_PORT, ioss_0_port_10_pin_2_PIN, &ioss_0_port_10_pin_2_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_10_pin_2_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_10_pin_3_PORT, ioss_0_port_10_pin_3_PIN, &ioss_0_port_10_pin_3_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_10_pin_3_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_10_pin_6_PORT, ioss_0_port_10_pin_6_PIN, &ioss_0_port_10_pin_6_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_10_pin_6_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_0_PORT, ioss_0_port_12_pin_0_PIN, &ioss_0_port_12_pin_0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_1_PORT, ioss_0_port_12_pin_1_PIN, &ioss_0_port_12_pin_1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_2_PORT, ioss_0_port_12_pin_2_PIN, &ioss_0_port_12_pin_2_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_2_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_3_PORT, ioss_0_port_12_pin_3_PIN, &ioss_0_port_12_pin_3_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_3_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_4_PORT, ioss_0_port_12_pin_4_PIN, &ioss_0_port_12_pin_4_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_4_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_5_PORT, ioss_0_port_12_pin_5_PIN, &ioss_0_port_12_pin_5_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_5_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_6_PORT, ioss_0_port_12_pin_6_PIN, &ioss_0_port_12_pin_6_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_6_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_12_pin_7_PORT, ioss_0_port_12_pin_7_PIN, &ioss_0_port_12_pin_7_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_12_pin_7_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_13_pin_0_PORT, ioss_0_port_13_pin_0_PIN, &ioss_0_port_13_pin_0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_13_pin_0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_13_pin_1_PORT, ioss_0_port_13_pin_1_PIN, &ioss_0_port_13_pin_1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_13_pin_1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_13_pin_2_PORT, ioss_0_port_13_pin_2_PIN, &ioss_0_port_13_pin_2_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_13_pin_2_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_13_pin_3_PORT, ioss_0_port_13_pin_3_PIN, &ioss_0_port_13_pin_3_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_13_pin_3_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_TX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWO_PORT, CYBSP_SWO_PIN, &CYBSP_SWO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CINA_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CINB_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CMOD_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_BTN0_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_BTN1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD0_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD3_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD4_obj);
#endif //defined (CY_USING_HAL)
}
