

#include <xc.h>
// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000

void __interrupt() KESME(void){
    INTCON &=~(1<<7); //GIE=0
    //Alltaji kontrolü yapmdan interrupt ?n içine kod yazarsak ba?ka bir kaynaktan gelen interruptlar da kodumuzu çal??t?r?r 
    if(INTF==1)
    {
        //Harici kesme gerçekle?ti 
        PORTB |= 1<<7;
        __delay_ms(1000);
    }
    INTF=0; 
    INTCON |=1<<7;
}


void main(void) {

    TRISB &= ~(1<<7); //RB7 OUTPUT
    INTCON |= (1<<4);  // INTE=1 EXRETNAL INTERRUPT ENABLE veya INTE=1 diyebilirdik
    INTCON |= (1<<7); //GIE=1 GLOBAL INTERRUPT ENABLE veya GIE=1 diyebilirdik
    OPTION_REG |= (1<<6); //YÜKSELEN KENARDA KESEMEYE G?RECEK
    while(1){
        PORTB &= ~(1<<7); //LED süreli sönük 
    }


}
