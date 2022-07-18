#include <stddef.h>
#include "stdbool.h"
#include <stdint.h>

void divide_c(bool rst, bool enable, uint8_t *src1, uint8_t *src2, uint8_t *des1, uint8_t *des2, bool *desOv){
    if(rst || !enable){
        volatile uint16_t cmp1, cmp0, rem2, sub1, div1, rem1, sub0, div0, rem0;
        // *des1 = *src1;
        // *des2 = 0;
        cmp1 = (uint16_t)*src2 << 7;
        cmp0 = (uint16_t)*src2 << 6;
        rem2 = (uint16_t)*src1;
        sub1 = rem2 - (cmp1 & 0xFF);
        div1 = (cmp1 & 0xFF00) != 0 ? 0 : ((sub1 & 0x100) == 0);
        rem1 = div1 ? (sub1 & 0xFF) : (rem2 & 0xFF);
        sub0 = rem1 - (cmp0 & 0xFF);
        div0 = (cmp0 & 0xFF00) != 0 ? 0 : ((sub0 & 0x100) == 0);
        rem0 = div0 ? (sub0 & 0xFF) : (rem1 & 0xFF);

        *des1 = rem0; 
        *des2 = div1*2 + div0;
        *desOv = (*src2 == 0);
        return;
    }
    if(enable){
        if(*desOv = (*src2 == 0)){
            *des1 = *src1;
            *des2 = UINT8_MAX;
            return;
        }
        *des1 = *src1 % *src2;
        *des2 = *src1 / *src2;
    }
}