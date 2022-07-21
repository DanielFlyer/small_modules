module lpm_add_sub(datab, dataa, overflow, cout, result);

parameter LPM_WIDTH = 11;

input datab;
input dataa;

output overflow;
output cout;
output result;

wire [LPM_WIDTH:0] sum;

assign sum = dataa + datab;
assign result = sum[LPM_WIDTH-1:0];
assign cout = sum[LPM_WIDTH];
assign overflow = (dataa[LPM_WIDTH-1] & datab[LPM_WIDTH-1] & ~dataa[LPM_WIDTH]) | (~dataa[LPM_WIDTH-1] & ~datab[LPM_WIDTH-1] & dataa[LPM_WIDTH]);
endmodule