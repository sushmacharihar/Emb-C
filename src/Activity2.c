#include <avr/io.h>
#include "Activity2.h"
#define F_CPU 16000000UL 


void Count()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
}

uint16_t ReadADC(uint8_t ch)
{
    //channel selection
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //coversion start
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    //clear ADIF
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
int main2(void)
{
    Count();
    ReadADC(0);
    return 0;
}
