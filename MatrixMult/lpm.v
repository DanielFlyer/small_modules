module lpm_add_sub(datab, dataa, overflow, cout, result);

parameter LPM_WIDTH = 11;

input[LPM_WIDTH-1:0] datab;
input[LPM_WIDTH-1:0] dataa;

output overflow;
output cout;
output[LPM_WIDTH-1:0] result;

wire [LPM_WIDTH:0] sum;

assign sum = dataa + datab;
assign result = sum[LPM_WIDTH-1:0];
assign cout = sum[LPM_WIDTH];
assign overflow = (~dataa[LPM_WIDTH-1] & ~datab[LPM_WIDTH-1] & sum[LPM_WIDTH]) | (dataa[LPM_WIDTH-1] & datab[LPM_WIDTH-1] & ~sum[LPM_WIDTH]);
endmodule

module lpm_mult (dataa, datab, result);

parameter LPM_WIDTHA = 9;
parameter LPM_WIDTHB = 8;
parameter LPM_WIDTHP = 17;

input[LPM_WIDTHA-1:0] dataa;
input[LPM_WIDTHB-1:0] datab;

output[LPM_WIDTHP-1:0] result;

assign result = dataa*datab;

endmodule