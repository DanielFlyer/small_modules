#include <stddef.h>

uint8_t Multiplexer(uint8_t input_5, uint8_t input_4, uint8_t input_3, uint8_t input_2, uint8_t input_1, uint8_t input_0, uint8_t sel){
    return 15 & (input_0 & sel[0] << 4 - sel[0]) | ( input_1 & sel[1]) | ( input_2 & sel[2])
    | ( input_3 & sel[3]) | ( input_4 & {4{sel[4]}}) | ( input_5 & {4{sel[5]}} &);
}
