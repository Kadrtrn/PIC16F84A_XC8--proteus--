/*
 * File:   main.c
 * Author: kadir
 *
 * Created on 25 Kas?m 2022 Cuma, 19:36
 */


#include <xc.h>
// CONFIG
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000
void __interrupt() PORTB_KESME(void){

    if(INTCON &(1<<0)==1 & (RB4==1) | 
            (RB5==1) | 
            (RB6==1) | 
            (RB7==1) ){//RBIF ==1 ise ve kesme RB4,RB5,RB6,RB7 pinlerinden herhangi birindden mi gelmi? 
        
        PORTA |=(1<<0);
        __delay_ms(2000);//burda örnek olsun diye yap?yoruz fakat normalde hiçbir kesme fonksiyonu içinde gecikme ça?r?lmaz
        PORTA &=~(1<<0);
        
    }
        INTCON &=~(1<<0);//RBIF=0 yap 
}

void main(void) {
    //GLOBAL INTERRTEP ENABLE AKT?FLE?T?RME
    GIE=1; //INTCON |= 1<<7; VEYA INTCON=0x80; !!!!Son yaz?lan di?er bitleride de?i?tirece?i için  kullan?lmamal?
    //PORTB KESMES?N? AÇMA RBIE =1 
    INTCON |= 1<<3;
    TRISB=0xF0; //B portunun 4,5,6ve7. pinleri giri? olarak ayarland?
    TRISA &= ~(1<<0);// A PORTUNUN 0. P?N?  ÇIKI?
    PORTA=0; // PORTA'YI TEM?ZLED?K 
    
    while(1){
        PORTB |=1<<1;
        __delay_ms(100);
        PORTB &=~(1<<1);
        __delay_ms(100);
    }
}
