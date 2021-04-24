#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author Sushma harihar (sushmaharihar1839@gmail.com)
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL
#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */

#define SWITCH_PORT (PORTD)    /**< SWITCH Port Number */
#define SWITCH_PIN (PORTD0)    /**< SWITCH Pin Number */


#endif /* __PROJECT_CONFIG_H__ */
