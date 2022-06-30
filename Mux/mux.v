module Multiplexer(input [3:0] input_5,
    input [3:0] input_4,
    input [3:0] input_3,
    input [3:0] input_2,
    input [3:0] input_1,
    input [3:0] input_0,
    input [5:0] sel,
    
    output [3:0] result);

    result = input_0 & {4{sel[0]}};
    result = result | ( input_1 & {4{sel[1]}});
    result = result | ( input_2 & {4{sel[2]}});
    result = result | ( input_3 & {4{sel[3]}});
    result = result | ( input_4 & {4{sel[4]}});
    result = result | ( input_5 & {4{sel[5]}});
    MUX1HOT_v_4_6_2 = result;

  endmodule