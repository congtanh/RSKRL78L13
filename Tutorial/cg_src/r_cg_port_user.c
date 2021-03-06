/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only 
* intended for use with Renesas products. No other uses are authorized. This 
* software is owned by Renesas Electronics Corporation and is protected under 
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING 
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT 
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE 
* AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS 
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE 
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR 
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE 
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software 
* and to discontinue the availability of this software.  By using this software, 
* you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2013 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_cg_port_user.c
* Version      : Applilet4 for RL78/L13 V1.00.00.02 [10 May 2013]
* Device(s)    : R5F10WMG
* Tool-Chain   : CA78K0R
* Description  : This file implements device driver for Port module.
* Creation Date: 4/18/2021
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_port.h"
/* Start user code for include. Do not edit comment generated here */
#include "rskrl78l13def.h"
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */


/* Start user code for adding. Do not edit comment generated here */
/*******************************************************************************
* Function Name : Toggle_LED
* Description   : Function used to toggle the output of all user LEDs
* Argument      : none
* Return value  : none
*******************************************************************************/
void Toggle_LED (void)
{
    /* Toggle the state of the user LEDs */
    static uint8_t leds_on = FALSE;

    if (FALSE == leds_on)
    {
        LED0 = LED_ON;
        LED1 = LED_ON;
        LED2 = LED_ON;
        LED3 = LED_ON;
        leds_on = TRUE;
    }
    else
    {
        LED0 = LED_OFF;
        LED1 = LED_OFF;
        LED2 = LED_OFF;
        LED3 = LED_OFF;
        leds_on = FALSE;
    }
}
/*******************************************************************************
* End of function Toggle_LED
*******************************************************************************/

/* End user code. Do not edit comment generated here */
