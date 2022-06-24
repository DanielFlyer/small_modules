#include <stddef.h>
#include "stdbool.h"
#include <stdint.h>

void divide_c(bool rst, bool enable, uint8_t *src1, uint8_t *src2, uint8_t *des1, uint8_t *des2, bool *desOv){
    if(enable && !rst){
        *desOv = (*src2 == 0);
        *des1 = *src1 % *src2;
        *des2 = *src1 / *src2;
    }
}