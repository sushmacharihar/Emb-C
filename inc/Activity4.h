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
void USARTReadChar();

/**
 * @brief writes the data to UDR Resistor
 * 
 */
void USARTWriteChar(char data);


#endif /** __Activity4_H_ */
