#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <pic18f4550.h>
#include <stdint.h>

void main(void){
    int source[7]={0x02,0x0A,0x05,0x0E,0x04,0x0C,0x08};
    int destination[7]={0x00,0x00,0x00,0x00,0x00,0x00,0x00};
    for(int i=0;i<7;i++){
        destination[i]=source[i];
    }
}