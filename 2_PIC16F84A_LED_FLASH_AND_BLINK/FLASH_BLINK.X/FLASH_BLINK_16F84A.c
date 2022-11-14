/*
 * File:   FLASH_BLINK_16F84A.c
 * Author: kadir
 *
 * Created on 13 Kas?m 2022 Pazar, 22:46
 */


#include <xc.h>

#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (Power-up Timer is enabled)
#pragma config CP = ON          // Code Protection bit (All program memory is code protected)

#define _XTAL_FREQ 4000000

void main(void) {

    
    TRISB= 0x00;
    

    while(1){
        PORTB=0x01;
        __delay_ms(500);//500 ms bekle
        PORTB=0x00;  
        __delay_ms(500);
    }


}
