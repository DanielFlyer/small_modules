/* Right Shift C Implementation */

#include <stdio.h>
#include <stddef.h>

unsigned int shiftr_c(unsigned int alu_a_i, unsigned int alu_b_i, char opcode){

    volatile unsigned int result_r;
    opcode = opcode & 0xf;
    if(opcode == 0x3){
        result_r = (int)alu_a_i >> (int)alu_b_i;
    }else{
        result_r = alu_a_i >> alu_b_i;
    }
    return result_r;
}
