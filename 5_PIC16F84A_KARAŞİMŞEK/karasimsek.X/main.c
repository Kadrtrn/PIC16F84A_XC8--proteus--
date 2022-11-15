/*
 * File:   main.c
 * Author: kadir
 *
 * Created on 15 Kas?m 2022 Sal?, 22:45
 */


#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000

#include <xc.h>

void main(void) {

    TRISB=0x00;
    PORTB=0x00;
    
    while(1){
        for(char i=0;i<=7;i++){
            PORTB =(1<<i);
            __delay_ms(100);
        }
        
        for(char i=6;i>0;i--){
            PORTB = (1<<i);
            __delay_ms(100);
        }   
    }
}
