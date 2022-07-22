#include <stdlib.h>
#include <stddef.h>

typedef unsigned short uint16;

uint16 mat_mult_c(uint16 A00_80, uint16 A01_80, uint16 A02_80, uint16 A03_80, uint16 B00_80, uint16 B01_80, uint16 B02_80, uint16 B03_80){
    volatile uint16 result = A00_80*B00_80+A01_80*B01_80+A02_80*B02_80+A03_80*B03_80;
    if(result > 2047){
        result = 2047;
    }
    return result;
}