#include <avr/io.h>
#include <util/delay.h>
#include <avr/io.h>
#include "Activity2.h"


void Init()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
}

uint16_t ReadADC(uint8_t ch)
{

    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
int main2(void)
{
    Init();
    ReadADC(0);
    _delay_ms(200);
    return 0;
}
