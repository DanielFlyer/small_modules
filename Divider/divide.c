

bool div_inst_q = div_operation_w

if(signed_operation_w){
quotient_q = (int)opcode_ra_operand_i / (int)opcode_rb_operand_i;
}else{
quotient_q = opcode_ra_operand_i / opcode_rb_operand_i;
}
if(div_inst_q){
Div_result_r = quotient_q;
}else if(signed_operation_w){
Div_result_r = (int)opcode_ra_operand_i;
}else{
Div_result_r = opcode_ra_operand_i;
}
