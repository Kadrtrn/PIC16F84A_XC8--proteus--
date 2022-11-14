

#include <xc.h>
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000 
void main(void) {

    unsigned char count=0;//0-255
    TRISB = 0x00;

    while(1){
        if(RA3 == 1){
            __delay_ms(500);
            count +=1;
            
        }
        switch(count)
            {
                case 0:
                    PORTB=0x00;
                    break;
                case 1:
                    PORTB |=1<<0; //0 0 0 0 0 0 0 1
                    break;
                case 2:
                    PORTB |= 1<<1; // E?ER YADA E??TT?R YAPMASAYDIK 0 0 0 0 0 0 1 0 OLACAKTIK AMA B?Z 0 0 0 0 0 0 1 1 BÖYLE OLMASINI ?ST?YORUZ 

                    break;
                case 3:
                    PORTB |= 1<<2;
                    break;
                case 4:
                    PORTB |= 1<<3;
                    break;
                case 5:
                    PORTB |= 1<<4;
                    break;
                case 6:
                    PORTB |= 1<<5;
                    break;
                case 7:
                    PORTB |= 1<<6;
                    break;
                case 8:
                    PORTB |= 1<<7;
                    break;
                default:
                    count=0;
                    PORTB &= ~(1<<7);
                    __delay_ms(250);
                    PORTB = PORTB &  ~(1<<6);
                    __delay_ms(250);
                    PORTB &= ~(1<<5);
                    __delay_ms(250);
                    PORTB &= ~(1<<4);
                    __delay_ms(250);
                    PORTB &= ~(1<<3);
                    __delay_ms(250);
                    PORTB &= ~(1<<2);
                    __delay_ms(250);
                    PORTB &= ~(1<<1);
                    __delay_ms(250);
                    PORTB &= ~(1<<0);
                    __delay_ms(250);
                    break;
            }     
    }
}
