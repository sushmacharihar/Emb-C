#include <avr/io.h>
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"
#define F_CPU 16000000UL 

//temp1 is variable that contains temperature value
unsigned volatile temp1;

void Change()
{
// using 16-bit timer and counter1    
TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
//64 Prescaler
TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);

DDRB|=(1<<PB1);
}
int main3()
{
Change();
OCR1A=ADCR;
    //temperature conditions as given in table
    if(ADCR>=0 && ADCR<=200)
    {
        temp1=20;
        main4(temp1);
    }
    else if(ADCR>210 && ADCR<500)
    {
        temp1=25;
        main4(temp1);
    }
    else if(ADCR>510 && ADCR<700)
    {
        temp1=29;
        main4(temp1);
    }
    else if(ADCR>710 && ADCR<1024)
    {
        temp1=33;
        main4(temp1);
    }
    return 0;
}
