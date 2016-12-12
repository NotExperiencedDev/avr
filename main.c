
#define F_CPU 1000000L
#include <util/delay.h>
#include "main.h"

int main(void)
{
    PORTSETUP;
    PINON(PORTB, PB2);
    
   while(1){
       PINON(PORTB, PB2);
       _delay_ms(200);
       PINOFF(PORTB, PB2);
       _delay_ms(200);
   }

    return 0;
}

    