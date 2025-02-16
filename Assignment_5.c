#include <xc.h>
#define RELAY_PIN LATAbits.LATA4

void interrupt extint_isr(void){
    unsigned int i;
    if(INT1F){
        INT1F=0;
        INT1IE=0;
        RELAY_PIN=~RELAY_PIN;
        for(i=0;i<10000;i++);
        INT1IE=1;
    }
}

int main(){
    ADCON1=0x0F;
    TRISAbits.TRISA4=0;
    TRISBbits.TRISB1=1;
    RELAY_PIN=1;

    INT1IE=1;
    INTEDG1=0;
    GIE=1;

    while(1);
}