/**
 * @file project_main.c
 * @author Sushma harihar (sushmaharihar1839@gmail.com)
 * @brief Project to Blink an LED only when heat button is on and passenger is seated
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTD0 is in sink config. i.e when switch is pressed
 * @note PORTB0 is in sink config. i.e LED is turned ON
 * @note PORTD0 is in sink config. i.e when switch is released
 * @note PORTB0 is in sink config. i.e LED is turned OFF
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	for(;;)
	{
      if(!(PIND&(1<<PD0))) 
      {
           change_led_state(LED_ON);
		    delay_ms(LED_ON_TIME);
      }
  
  else
  {
        change_led_state(LED_OFF);
		delay_ms(LED_OFF_TIME);	
  }
  }
	return 0;
}
