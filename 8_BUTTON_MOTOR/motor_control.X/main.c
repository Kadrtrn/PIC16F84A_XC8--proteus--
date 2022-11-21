/*
 * File:   main.c
 * Author: kadir
 *
 * Created on 21 Kas?m 2022 Pazartesi, 21:04
 */


#include <xc.h>

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000
void main(void) {
    
    TRISB &= ~(2<<1);//
    while(1)
    {
        if(RB1 == 0){
            PORTB |=(2<<1);
        }
        else{
            PORTB &=~(2<<1);
        }
    }
    
}
