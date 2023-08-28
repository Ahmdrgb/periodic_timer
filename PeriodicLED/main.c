
#include "4.LIB/Bit_Math.h"
#include "4.LIB/Platform_Types.h"
#include "4.LIB/Std_Types.h"
#include "4.LIB/TM4C123xx.h"
#include "4.LIB/hw_gpio.h"

#include "1.MCAL/GPIO/INC/GPIO_Interface.h"
#include "1.MCAL/EXTI/INC/EXTI_Interface.h"

#include "1.MCAL/Timer/Timer.h"


extern volatile u8 LED_TOGLLE;


int main(void)
{
    void timer_Init( TIMER0,periodic,up,concatenated, 8000000,none);

    const GPIO_Config_t Config ={GPIO_PORTF,GPIO_PIN1,GPIO_PIN_OUTPUT,GPIO_PIN_DIGITAL,GPIO_PIN_PUSHPULL,GPIO_PIN_FLOATING,GPIO_2MA_DRIVE,GPIO_ALTFUNC0};

    GPIO_Init(&Config, 1);

    while(1)
    {
        if(LED_TOGLLE==1)
        {
            LED_TOGLLE=0;
            TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        }
    }
	return 0;
}
