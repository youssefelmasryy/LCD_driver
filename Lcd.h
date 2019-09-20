/*
 * Lcd.h
 *
 * Created: 9/6/2019 11:29:53 AM
 *  Author: Dell
 */ 


#ifndef LCD_H_
#define LCD_H_
#include <avr/io.h>
#include <util/delay.h>
#define lcd_init() DDRB|=0b1110; DDRA|=0b11110000;
void LCD_INIT(void);
void LCD_WRITE_CHAR(uint8_t);
void LCD_WRITE_STRING(uint8_t*);
void LCD_WRITE_NUMBER(uint8_t);
void LCD_SEND_COMMAND(uint8_t);
#define LCD_RS(x) if(x==0) PORTB&=~(1<<1); else PORTB|=(1<<1);
#define LCD_RW(x) if(x==0) PORTB&=~(1<<2); else PORTB|=(1<<2);
#define LCD_EN(x) if(x==0) PORTB&=~(1<<3); else PORTB|=(1<<3);
#define LCD_D4(x) if(x==0) PORTA&=~(1<<4); else PORTB|=(1<<4);
#define LCD_D5(x) if(x==0) PORTA&=~(1<<5); else PORTB|=(1<<5);
#define LCD_D6(x) if(x==0) PORTA&=~(1<<6); else PORTB|=(1<<6);
#define LCD_D7(x) if(x==0) PORTA&=~(1<<7); else PORTB|=(1<<7);





#endif /* LCD_H_ */