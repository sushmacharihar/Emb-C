#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"

void init()
{
DDRB|=(1<<PB0); //Set B0=1 for LED

DDRD&=~(1<<PD0); //Clear Bit
PORTD|=(1<<PD0); //Set Bit
}

void change_led_state(uint8_t state)
{
    PORTB|=(state<<PB0);
}

int main1(){
    init();
    while(1)
    {
        if(!(PIND&(1<<PD0))) //switch press
        {
            change_led_state(LED_ON) //LED on
        }
        else
        {
            change_led_state(LED_OFF) //LED off
        }

    }

    return 0;
}
