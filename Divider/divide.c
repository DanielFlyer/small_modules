#include <stdio.h>
#include <stddef.h>
#include "stdbool.h"

unsigned int divide_c(unsigned int div_operation_w, unsigned int signed_operation_w, unsigned int opcode_ra_operand_i, unsigned int opcode_rb_operand_i){
    unsigned int quotient_q;
    unsigned int div_result_r;
    bool div_inst_q = div_operation_w;
    if(signed_operation_w){
        quotient_q = (int)opcode_ra_operand_i / (int)opcode_rb_operand_i;
    }else{
        quotient_q = opcode_ra_operand_i / opcode_rb_operand_i;
    }
    if(div_inst_q){
        div_result_r = quotient_q;
    }else if(signed_operation_w){
        div_result_r = (int)opcode_ra_operand_i;
    }else{
        div_result_r = opcode_ra_operand_i;
    }
    return div_result_r;
}
