#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"
void init()
{
DDRB|=(1<<PB0); //Set B0=1 for LED

DDRD&=~(1<<PD0); //Clear Bit
PORTD|=(1<<PD0); //Set Bit
}

int main(){
    init();
    while(1)
    {
        if(!(PIND&(1<<PD0))) //switch press
        {
            PORTB|=(1<<PB0); //LED on
        }
        else
        {
            PORTB&=~(1<<PB0); //LED off
            _delay_ms(200);
        }

    }

    return 0;
}
