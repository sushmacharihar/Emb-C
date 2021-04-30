#include <avr/io.h>
#include <util/delay.h>
#include "Activity3.h"

unsigned volatile temp1;
void Init()
{
TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);

DDRB|=(1<<PB1);
}
int main3()
{
Init();

    if (OCR1A>=0 && OCR1A<=200)
    {
        temp1=20;
        activity4(temp1);
    }
    else if(OCR1A>210 && OCR1A<500)
    {
        temp1=25;
        activity4(temp1);
    }
    else if(OCR1A>510 && OCR1A<700)
    {
        temp1=29;
        activity4(temp1);
    }
    else if(OCR1A>710 && OCR1A<1024)
    {
        temp1=33;
        activity4(temp1);
    }
    return 0;
}
