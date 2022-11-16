/*
 * File:   MA?N.c
 * Author: kadir
 *
 * Created on 16 Kas?m 2022 Çar?amba, 17:55
 */


#include <xc.h>

// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000
char dizi[]={0x3F,0x06,0x5B,0x4F,0x66,
            0x6D,0x7C,0x07,0x7F,0x6F};
void main(void) {
    TRISB =0x00;
            
    
    while(1){
        for(char i=0;i<=9;i++)
        {
            PORTB=dizi[i];
            __delay_ms(1000);
        }
    }





}
