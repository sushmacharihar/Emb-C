#ifndef __BLINKY_H_
#define __BLINKY_H_
/**
 * @file blinky.h
 * @author Sushma Harihar(sushmaharihar1839@gmail.com)
 * @brief Project to Blink an LED only when heat button is on and passenger is seated connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME (1000)
#define LED_OFF_TIME (500)

#define SWITCH_PRESS       /**< When switch is pressed then LED is on  */
#define SWITCH_RELEASE     /**< When switch is released then LED is off */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);


#endif /** __BLINKY_H_ */
