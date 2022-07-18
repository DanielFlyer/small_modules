#include <stdio.h>
#include <stddef.h>

unsigned int shiftl_c(unsigned int alu_a_i, unsigned int alu_b_i){

    volatile unsigned int result_r, shift_left_1_r, shift_left_2_r, shift_left_4_r, shift_left_8_r;
    //alu_b_i = 0x1f & alu_b_i;
    if ((alu_b_i & 0x1) != 0)
                shift_left_1_r = alu_a_i << 1;
            else
                shift_left_1_r = alu_a_i;

            if ((alu_b_i & 0x2) != 0)
                shift_left_2_r = shift_left_1_r << 2;
                
            else
                shift_left_2_r = shift_left_1_r;

            if ((alu_b_i & 0x4) != 0)
                shift_left_4_r = shift_left_2_r << 4;
            else
                shift_left_4_r = shift_left_2_r;

            if ((alu_b_i & 0x8) != 0)
                shift_left_8_r = shift_left_4_r << 8;
            else
                shift_left_8_r = shift_left_4_r;

            if ((alu_b_i & 0x10) != 0)
                result_r = shift_left_8_r << 16;
            else
                result_r = shift_left_8_r;
    return result_r;
}
