module shiftl(
    // Inputs
     input  [  3:0]  alu_op_i
    ,input  [ 31:0]  alu_a_i
    ,input  [ 31:0]  alu_b_i

    // Outputs
    ,output [ 31:0]  alu_p_o
);

reg [31:0]      shift_left_1_r;
reg [31:0]      shift_left_2_r;
reg [31:0]      shift_left_4_r;
reg [31:0]      shift_left_8_r;
reg [31:0]      result_r;

    always @ (alu_op_i or alu_a_i or alu_b_i) begin
        shift_left_1_r = 32'b0;
        shift_left_2_r = 32'b0;
        shift_left_4_r = 32'b0;
        shift_left_8_r = 32'b0;
            if (alu_b_i[0] == 1'b1)
                shift_left_1_r = {alu_a_i[30:0],1'b0};
            else
                shift_left_1_r = alu_a_i;

            if (alu_b_i[1] == 1'b1)
                shift_left_2_r = {shift_left_1_r[29:0],2'b00};
            else
                shift_left_2_r = shift_left_1_r;

            if (alu_b_i[2] == 1'b1)
                shift_left_4_r = {shift_left_2_r[27:0],4'b0000};
            else
                shift_left_4_r = shift_left_2_r;

            if (alu_b_i[3] == 1'b1)
                shift_left_8_r = {shift_left_4_r[23:0],8'b00000000};
            else
                shift_left_8_r = shift_left_4_r;

            if (alu_b_i[4] == 1'b1)
                result_r = {shift_left_8_r[15:0],16'b0000000000000000};
            else
                result_r = shift_left_8_r;
       end
assign alu_p_o    = result_r;
endmodule