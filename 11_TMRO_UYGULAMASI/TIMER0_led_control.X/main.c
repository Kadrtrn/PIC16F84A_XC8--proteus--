


#include <xc.h>

// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000
int sayac=0;
void main(void) {
   
    OPTION_REG=0x07;//prescaler 256 seçildi ve PSA TMRO için seçildi
    //TIMER ba?latma
    TMR0=236; //NE VERD???M?Z?N B?R ÖNEM? YOK B?R DE?ER VERMEK TMRO I BA?LATIR
    TRISB &=~(1<<0); //RBO OUTPUT
    PORTB &=~(1<<0); //RB0 0'a çekildi
    
    
    while(1){
        
        if(TMR0 == 0){
            TMR0=236;
            sayac+=1;
            
        }
        if(sayac==200){
            RB0=RB0^1; //RBO I TERSLE 0 ?SE 1, 1 ?SE 0 YAP DEMEK
            sayac=0;
        }
    }
}
