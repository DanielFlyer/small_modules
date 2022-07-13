#include <stdio.h>
#include <stddef.h>

typedef unsigned char uint8;
typedef unsigned short uint16;


uint16 multiply_c(uint8 a, uint8 b){
    return (uint16)a*(uint16)b;
}