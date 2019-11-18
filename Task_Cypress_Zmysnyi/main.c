/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for the Empty PSoC6 Application
*              for ModusToolbox.
*
* Related Document: See Readme.md
*
*
*******************************************************************************
* (c) 2019, Cypress Semiconductor Corporation. All rights reserved.
*******************************************************************************
* This software, including source code, documentation and related materials
* ("Software"), is owned by Cypress Semiconductor Corporation or one of its
* subsidiaries ("Cypress") and is protected by and subject to worldwide patent
* protection (United States and foreign), United States copyright laws and
* international treaty provisions. Therefore, you may use this Software only
* as provided in the license agreement accompanying the software package from
* which you obtained this Software ("EULA").
*
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software source
* code solely for use in connection with Cypress's integrated circuit products.
* Any reproduction, modification, translation, compilation, or representation
* of this Software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
* reserves the right to make changes to the Software without notice. Cypress
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer of such
* system or application assumes all risk of such use and in doing so agrees to
* indemnify Cypress against all liability.
*******************************************************************************/

#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"
#define GPIO_INTERRUPT_PRIORITY (7u)
#define CELSIUS_FORMAT 0u

static void gpio_interrupt_handler(void *handler_arg, cyhal_gpio_event_t event);

uint8_t tempformat = CELSIUS_FORMAT;
/**
*
*  Checks to see if a card is currently connected.
*
* \note You can use any GPIO custom pin for Card Detect. Add the SD Host driver
* Cy_SD_Host_IsCardConnected() function with the __WEAK type to your code.
* This function could read the value from any GPIO pin and return true when
* the card is connected.
*/


int main(void)
{
    uint32_t chan = 0UL;
    int16_t resultSAR;
    int32_t resultmV;
    float32_t resultCel;
    float32_t resultFahr;
    cy_rslt_t result;

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    /* Initialize retarget-io to use the debug UART port */
	result = cy_retarget_io_init(CYBSP_DEBUG_UART_TX, CYBSP_DEBUG_UART_RX, \
								 CY_RETARGET_IO_BAUDRATE);

	/* retarget-io init failed. Stop program execution */
	if (result != CY_RSLT_SUCCESS)
	{
		CY_ASSERT(0);
	}

	/*****Initialize and enable AREF******/
	   cy_en_sysanalog_status_t status_aref;

	   status_aref = Cy_SysAnalog_Init(&AREF_config);

	   if(CY_SYSANALOG_SUCCESS == status_aref)
	   {
	    /* Turn on the hardware block. */

	    Cy_SysAnalog_Enable();
	   }

	 /*****Initialize and enable SAR convert******/

    cy_en_sar_status_t status_sar;

	status_sar = Cy_SAR_Init(SAR, &SAR_config);
	if (CY_SAR_SUCCESS == status_sar)
	{
		/* Turn on the SAR hardware. */
		Cy_SAR_Enable(SAR);
		/* Begin continuous conversions. */
		Cy_SAR_StartConvert(SAR, CY_SAR_START_CONVERT_CONTINUOUS);
	}

	/***************Initialize of RTC********************/
	cy_stc_rtc_config_t current_time;
    Cy_RTC_Init(&RTC_config);

    /************ Configure GPIO interrupt **************/
    cyhal_gpio_register_callback((cyhal_gpio_t) BUTTON_PIN,
                                    gpio_interrupt_handler, NULL);
    cyhal_gpio_enable_event((cyhal_gpio_t)BUTTON_PIN, CYHAL_GPIO_IRQ_FALL,
                                    GPIO_INTERRUPT_PRIORITY, true);


    __enable_irq();

    for(;;)
    {

    	/*Get result from SAR and convert to mVolts*/
    	resultSAR = Cy_SAR_GetResult16(SAR, chan);
    	resultmV = Cy_SAR_CountsTo_mVolts(SAR, chan, resultSAR);

    	/*Get result from mVolts and convert to Celcius*/
    	resultCel = resultmV/37;

    	/*Get result from Celsius and convert to Fahrenheit*/
    	resultFahr = resultCel*1.8 + 32;

    	/****************Get Date and Time****************/
    	Cy_RTC_GetDateAndTime(&current_time);

    		/************ Clear screen *******************/
    	printf("\x1b[2J\x1b[;H");

    	/********* Print Temperature in Celsius or Fahrenheite *******/
    	if(tempformat == CELSIUS_FORMAT)
    	{
    		printf("resultCel: %0.1f\tC\r\n", resultCel);
    	}
    	else
    	{
    		printf("resultFar: %0.1f\tF\r\n", resultFahr);
    	}
  	    		/***************Print Date and Time***************/

    	printf("time - seconds: %d\r\n", current_time.sec);
    	printf("time - minutes: %d\r\n", current_time.min);
    	printf("time - hours: %d\r\n", current_time.hour);
    	printf("time - date: %d\r\n", current_time.date);
    	printf("time - month: %d\r\n", current_time.month);
    	printf("time - year: %d\r\n", current_time.year);

    	Cy_SysLib_Delay(500);

    }
}

static void gpio_interrupt_handler(void *handler_arg, cyhal_gpio_irq_event_t event)
{
    tempformat = !tempformat;
}

/* [] END OF FILE */
