#include <stdio.h>
#include <stddef.h>

unsigned int shiftl_c(unsigned int alu_a_i, unsigned int alu_b_i){

    volatile unsigned int result_r;

    result_r = alu_a_i << alu_b_i;
    return result_r;
}
