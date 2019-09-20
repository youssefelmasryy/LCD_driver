/*
 * GccApplication7.c
 *
 * Created: 9/6/2019 11:29:10 AM
 * Author : Dell
 */ 

#include <avr/io.h>
#include "Lcd.h"
#define F_CPU 10000000

int main(void)
{	LCD_INIT();
	_delay_ms(1000);
	LCD_WRITE_CHAR(0x22);
    /* Replace with your application code */
    while (1) 
    {
				
		
    }
}

