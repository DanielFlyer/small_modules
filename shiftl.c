unsigned int shiftl(unsigned int alu_a_i, unsigned int alu_b_i){

unsigned int result_r;
alu_b_i = 0x1f & alu_b_i;

result_r = alu_a_i << alu_b_i;
return result_r;
}
