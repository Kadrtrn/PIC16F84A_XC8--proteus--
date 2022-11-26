/*
 * File:   main.c
 * Author: kadir
 *
 * Created on 26 Kas?m 2022 Cumartesi, 21:49
 */


#include <xc.h>


// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)
int counter=0;
#define _XTAL_FREQ 4000000
void __interrupt() TMR0_KESMESI(void){
    if(INTCON & 0x04){ // Timer0 ta?mas? gerçekle?ti mi ? //T0IF=1 M?
        counter+=1;
        if(counter==50){ //500ms oldu mu
            counter=0;
            RB0=RB0^1;//RB0 TERSLERN?R 
        }
        TMR0=217;
        T0IF=0;
    }
    
}
void main(void) {
   
    INTCON |=(1<<7); //GIE=1 Global Interrupt Enable
    INTCON |=(1<<5); //TOIE=1 Timer0 Overflow Interrupt Enable
    TRISB &=~(1<<0); //TRISB0=0
    OPTION_REG |=(7<<0); //PRESCALER 256 VER?LD? (7 hex kar??l???)
    OPTION_REG &=~(1<<3); //Prescaler is assigned to the Timer0 module
    OPTION_REG &=~(1<<5); //Dahili saat kullan?l?yor
    TMR0=217;
    PORTB &=~(1<<0);
    
    while(1){
        
    }
    
    
    
}
