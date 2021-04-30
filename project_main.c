/**
 * @file project_main.c
 * @author Sushma harihar (sushmaharihar1839@gmail.com)
 * @brief This file calls the function defined
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"
#include <util/delay.h>
#define F_CPU 16000000UL 

unsigned volatile temp1;
int main(void)
{
	//it calls the function to change the LED state
	main1();
	//it calls the function to convert Analog to digital
	main2();
	//it calls function that gives temperature values as given in table
	main3();
	//it calls functio that displays temperature values
	main4(temp1);
	return 0;
}
