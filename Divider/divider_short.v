always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    div_busy_q     <= 1'b0;
    dividend_q     <= 32'b0;
    divisor_q      <= 63'b0;
    invert_res_q   <= 1'b0;
    quotient_q     <= 32'b0;
    q_mask_q       <= 32'b0;
    div_inst_q     <= 1'b0;
end
else if (div_start_w)
begin

    div_busy_q     <= 1'b1;
    div_inst_q     <= div_operation_w;

    if (signed_operation_w && opcode_ra_operand_i[31])
        dividend_q <= -opcode_ra_operand_i;
    else
        dividend_q <= opcode_ra_operand_i;

    if (signed_operation_w && opcode_rb_operand_i[31])
        divisor_q <= {-opcode_rb_operand_i, 31'b0};
    else
        divisor_q <= {opcode_rb_operand_i, 31'b0};

    invert_res_q  <= (((opcode_opcode_i & `INST_DIV_MASK) == `INST_DIV) && (opcode_ra_operand_i[31] != opcode_rb_operand_i[31]) && |opcode_rb_operand_i) || 
                     (((opcode_opcode_i & `INST_REM_MASK) == `INST_REM) && opcode_ra_operand_i[31]);

    quotient_q     <= 32'b0;
    q_mask_q       <= 32'h80000000;
end
else if (div_complete_w)
begin
    div_busy_q <= 1'b0;
end
else if (div_busy_q)
begin
    if (divisor_q <= {31'b0, dividend_q})
    begin
        dividend_q <= dividend_q - divisor_q[31:0];
        quotient_q <= quotient_q | q_mask_q;
    end

    divisor_q <= {1'b0, divisor_q[62:1]};
    q_mask_q  <= {1'b0, q_mask_q[31:1]};
end

reg [31:0] div_result_r;
always @ *
begin
    div_result_r = 32'b0;

    if (div_inst_q)
        div_result_r = invert_res_q ? -quotient_q : quotient_q;
    else
        div_result_r = invert_res_q ? -dividend_q : dividend_q;
end