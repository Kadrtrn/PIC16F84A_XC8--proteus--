/*
 * File:   MA?N.c
 * Author: kadir
 *
 * Created on 16 Kas?m 2022 Çar?amba, 19:12
 */


#include <xc.h>

#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000

char rakamlar[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x6F};
void main(void) {
    TRISA=0x00;
    TRISB=0x00;
    PORTA=0;
    PORTB=0; 
    
    while(1){
        for(char i=0;i<=9;i++){
            for(char j=0;j<=9;j++){
                RA0=0;
                RA1=1;
                PORTB=rakamlar[j];
                __delay_ms(40);
                RA0=1;
                RA1=0;
                PORTB=rakamlar[i];
                __delay_ms(40);
                   }}}}
