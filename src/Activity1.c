#include <avr/io.h>
#include "Activity1.h"
#define F_CPU 16000000UL 

void init()
{
DDRB|=(1<<PB0); //Set B0 pin to 1 

DDRD&=~(1<<PD0); //Clear Bit of D0pin
PORTD|=(1<<PD0); //Set D0 pin to 1
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
            change_led_state(LED_ON); 
        }
        else
        {
            change_led_state(LED_OFF); 
        }

    }

    return 0;
}
