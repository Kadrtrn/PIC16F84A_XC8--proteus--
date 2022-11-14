/*
 * File:   led_yak.c
 * Author: kadir
 *
 * Created on 13 Kas?m 2022 Pazar, 21:54
 */


#include <xc.h>
//harici osilat�r kulland?g?m?z i�in HS se�ildi 
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)
//osilat�r�n de?erini tan?tal?m
#define _XTAL_FREQ 4000000
void main(void) {
    //TRISA = 0boooooooo;  A port u �IKI? olarak se�ildi a?ag?daki sat?rda ayn? i?lemi yaapar
    TRISA=0x00;
    PORTA=0x01; 

    while(1){
        
    }
    
    

}
