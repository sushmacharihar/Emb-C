#include <avr/io.h>
#include "Activity4.h"
#define F_CPU 16000000UL 

void USARTInit(uint16_t value)
{
    UBRR0L = value;
    UBRR0H = (value>>8)&0x00ff;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);


    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

char USARTReadChar()
{


    while(!(UCSR0A & (1<<RXC0)))
    {

    }

    return UDR0;
}

void USARTWriteChar(char data)
{


    while(!(UCSR0A & (1<<UDRE0)))
    {

    }

    UDR0 = data;
}


int main4(uint16_t temp1)
{
    USARTWriteChar(temp1);
    return 0;
}
