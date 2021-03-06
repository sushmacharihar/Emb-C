#ifndef __Activity4_H_
#define __Activity4_H_
/**
 * @file Activity4.h
 * @author Sushma Harihar(sushmaharihar1839@gmail.com)
 * @brief Project to Blink an LED only when heat button is on and passenger is seated connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL 

/**
 * Function Definitions
 */
 

/**
 * @brief sets baud rate
 * 
 */
void USARTInit(uint16_t value);

/**
 * @brief reads the data from UDR Register of the Receiver 
 * 
 */
char USARTReadChar();

/**
 * @brief writes the data to UDR Resistor
 * 
 */
void USARTWriteChar(char data);

/**
 * @brief calls function passes the temp1 value
 * 
 */
int main4(uint16_t temp1);

#endif /** __Activity4_H_ */
