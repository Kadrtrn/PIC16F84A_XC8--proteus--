/*
 * File:   led_yak.c
 * Author: kadir
 *
 * Created on 13 Kas?m 2022 Pazar, 21:54
 */


#include <xc.h>
//harici osilatör kulland?g?m?z için HS seçildi 
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)
//osilatörün de?erini tan?tal?m
#define _XTAL_FREQ 4000000
void main(void) {
    //TRISA = 0boooooooo;  A port u ÇIKI? olarak seçildi a?ag?daki sat?rda ayn? i?lemi yaapar
    TRISA=0x00;
    PORTA=0x01; 

    while(1){
        
    }
    
    

}
