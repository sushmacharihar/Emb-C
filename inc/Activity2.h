#ifndef __Activity2_H__
#define __Activity2_H__
/**
 * @file Activity2.h
 * @author Sushma harihar (sushmaharihar1839@gmail.com)
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL

#include <avr/io.h>

/**
 * @brief Configuration init function initializes the values for ports
 * 
 */

void Init();
  
/**
 * @brief Configuration this helps in conversion
 * 
 */
  uint16_t ReadADC(uint8_t ch);

/**
 * @brief calls the function
 * 
 */ 
 int main2();

/**
 * @brief unsigned 16-bit integer that contains the converted value which is stored in parts in ADCH & ADCL
 * 
 */
uint16_t volatile OCR1A;

/**
 * @brief unsigned 8-bit integer that contains the converted value 
 * 
 */
uint8_t volatile OCR1A;


/**
 * @brief 
 * 
 */

#endif // ACTIVITY2_H_
