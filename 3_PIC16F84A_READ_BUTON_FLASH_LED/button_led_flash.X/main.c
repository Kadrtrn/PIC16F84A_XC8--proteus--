/*
 * File:   main.c
 * Author: kadir
 *
 * Created on 14 Kas?m 2022 Pazartesi, 19:18
 */


#include <xc.h>

#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000

void main(void) {
    
    TRISA = (2<<0); //0. B?TTEN ?T?BAREN 2 B?T KAYDIR VE ONU 0 YAP 
    //yada e?ittir yapmak di?er ayarlar? bozmadan sadece ilgili ppin �zerinde i?lem yapar 
    //TRISA ?�?N yukarda yada e?ittir |= kullansayd?k TRISA varsay?lan de?eri 1 oldu?u i�in 0 yapamazd?k yada i?lemi y�z�nden
    //PORTA |= (2<<1); //2.bit'i 1 yap 0x04 yazmak ile ayn? ?ey 

    while(1){
        if(RB1 == 1){
            //Butona bas?ld? 
            PORTA |=(2<<1);
            
        }
        else{
            //Butona bas?lmad?
            PORTA=(2<<0);
        }
    }
    




}
