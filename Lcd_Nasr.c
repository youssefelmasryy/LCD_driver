/*
 * Lcd_Nasr.c
 *
 * Created: 9/6/2019 11:30:09 AM
 *  Author: Dell
 */ 
#include "Lcd.h"

void LCD_INIT(void){
	
	LCD_RW(0);
	lcd_init();
	
	// command 0x2
	LCD_SEND_COMMAND(0x02);
	//command 0x28
	LCD_SEND_COMMAND(0x28);
	// command 0x01
	_delay_ms(2);
	LCD_SEND_COMMAND(0x01);
	// command 0x0C
	
	LCD_SEND_COMMAND(0x0C);
	 //command 0x06
	LCD_SEND_COMMAND(0x06);
	// command 0x80
	LCD_SEND_COMMAND(0x80);
	
}


void LCD_WRITE_CHAR(uint8_t car)
{	
	PORTA=(PORTA&0x0f)|(car&0xf0);
	// Put data on ports 4 bits
	LCD_D7((car>>7)&1);
	LCD_D6((car>>6)&1);
	LCD_D5((car>>5)&1);
	LCD_D4((car>>4)&1);
	// Set RS to zero
	LCD_RS(0);

	// Enable = 1
	LCD_EN(1);
	_delay_ms(3);
	//enable khaleha zero
	LCD_EN(0);
	// delay 1ms
	_delay_ms(3);
	// Put data on ports 4 bits
	LCD_D7((car>>3)&1);
	LCD_D6((car>>2)&1);
	LCD_D5((car>>1)&1);
	LCD_D4((car>>0)&1);
	// Enable = 1
	LCD_EN(1);
	// delay 2ms
	_delay_ms(3);
	//enable khaleha zero
	LCD_EN(0);
	// delay 1.5ms
	_delay_ms(3);
	
	
}


void LCD_WRITE_STRING(uint8_t* data)
{	while (*data!='/0')
{LCD_WRITE_CHAR(*data);
	data++;
}
	
	
	
	
}


void LCD_WRITE_NUMBER(uint8_t data)
{
	
	
	
	
}


void LCD_SEND_COMMAND(uint8_t cmd)
{
	// Put data on ports 4 bits
	LCD_D7((cmd>>7)&1);
	LCD_D6((cmd>>6)&1);
	LCD_D5((cmd>>5)&1);
	LCD_D4((cmd>>4)&1);
	// Set RS to zero
	LCD_RS(0);

	// Enable = 1
	LCD_EN(1);
	_delay_ms(3);
	//enable khaleha zero
	LCD_EN(0);
	// delay 1ms
	_delay_ms(3);
	// Put data on ports 4 bits
	LCD_D7((cmd>>3)&1);
	LCD_D6((cmd>>2)&1);
	LCD_D5((cmd>>1)&1);
	LCD_D4((cmd>>0)&1);
	// Enable = 1
	LCD_EN(1);
	// delay 2ms
	_delay_ms(3);
	//enable khaleha zero
	LCD_EN(0);
	// delay 1.5ms
	_delay_ms(3);
	
	
}