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
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"
#define F_CPU 16000000UL 

int main(void)
{
	Activity1();
	Activity2();
	Activity3();
	Activity4();
	return 0;
}
