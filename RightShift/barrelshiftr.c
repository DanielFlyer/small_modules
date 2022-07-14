#include <stdio.h>
#include <stddef.h>

unsigned int shiftr_c(unsigned int alu_a_i, unsigned int alu_b_i, char opcode){

    unsigned int result_r, shift_right_1_r, shift_right_2_r, shift_right_4_r, shift_right_8_r;

    opcode = opcode & 0xf;
    if(opcode == 0x3){
        if ((alu_b_i & 0x1) != 0)
                shift_right_1_r = (int)alu_a_i >> 1;
            else
                shift_right_1_r = alu_a_i;

            if ((alu_b_i & 0x2) != 0)
                shift_right_2_r = (int)shift_right_1_r >> 2;
                
            else
                shift_right_2_r = shift_right_1_r;

            if ((alu_b_i & 0x4) != 0)
                shift_right_4_r = (int)shift_right_2_r >> 4;
            else
                shift_right_4_r = shift_right_2_r;

            if ((alu_b_i & 0x8) != 0)
                shift_right_8_r = (int)shift_right_4_r >> 8;
            else
                shift_right_8_r = shift_right_4_r;

            if ((alu_b_i & 0x10) != 0)
                result_r = (int)shift_right_8_r >> 16;
            else
                result_r = shift_right_8_r;
    }else{
        if ((alu_b_i & 0x1) != 0)
                shift_right_1_r = alu_a_i >> 1;
            else
                shift_right_1_r = alu_a_i;

            if ((alu_b_i & 0x2) != 0)
                shift_right_2_r = shift_right_1_r >> 2;
                
            else
                shift_right_2_r = shift_right_1_r;

            if ((alu_b_i & 0x4) != 0)
                shift_right_4_r = shift_right_2_r >> 4;
            else
                shift_right_4_r = shift_right_2_r;

            if ((alu_b_i & 0x8) != 0)
                shift_right_8_r = shift_right_4_r >> 8;
            else
                shift_right_8_r = shift_right_4_r;

            if ((alu_b_i & 0x10) != 0)
                result_r = shift_right_8_r >> 16;
            else
                result_r = shift_right_8_r;
    }

    return result_r;
}
