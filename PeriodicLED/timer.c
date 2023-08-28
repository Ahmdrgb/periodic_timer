/*
 * timer.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Ahmed
 */


#include "timer.h"

volatile u8 LED_TOGLLE=0;


void timer_Init(void)
{

    SET_BIT(SYSCTL_RCGCTIMER_R,0);

    SET_BIT(NVIC_EN0_R,19);

    CLR_BIT(TIMER0_CTL_R,0);

    TIMER0_CFG_R = 0;

    SET_BIT(TIMER0_TAMR_R,1);

    TIMER0_TAILR_R =8000000;

    SET_BIT(TIMER0_IMR_R,0);

    SET_BIT(TIMER0_CTL_R,0);

}

void timerHandler(void)
{
    LED_TOGLLE=1;

    SET_BIT(TIMER0_ICR_R,0);

}

