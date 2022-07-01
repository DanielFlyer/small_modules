#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vshiftr.h"
#include "shiftr.c"

typedef unsigned int word;
word shiftr_c(word alu_a_i, word alu_b_i, char opcode);
void test(word alu_a_i, word alu_b_i, int calls);

double verilatorTime;
double cTime;

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
    verilatorTime = 0;
    cTime = 0;
    std::cout << "Stress Testing:\n";
    test(rand(), rand(), atoi(argv[1]));

    std::cout << "Time taken by C Implementation: "
          << cTime << " seconds" << std::endl;
    
	std::cout << "Time taken by Verilator Simulation: "
         << verilatorTime << " seconds" << std::endl;

    std::cout << verilatorTime / cTime << " times faster\n";
	exit(EXIT_SUCCESS);
}
void test(word alu_a_i, word alu_b_i, int calls){
	word out;
    clock_t start, end;
	//C Implementation 
	
    start = clock();
    for(int i = 0; i < calls; i++){
    out = shiftr_c(alu_a_i, alu_b_i, 0x3);
    out = shiftr_c(alu_a_i, alu_b_i, 0x3);
    out = shiftr_c(alu_a_i, alu_b_i, 0x3);
    out = shiftr_c(alu_a_i, alu_b_i, 0x3);
    out = shiftr_c(alu_a_i, alu_b_i, 0x3);
    out = shiftr_c(alu_a_i, alu_b_i, 0x2);
    out = shiftr_c(alu_a_i, alu_b_i, 0x2);
    out = shiftr_c(alu_a_i, alu_b_i, 0x2);
    out = shiftr_c(alu_a_i, alu_b_i, 0x2);
    out = shiftr_c(alu_a_i, alu_b_i, 0x2);
    }
	end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

	//Verilator simulation

	//Create an instance of our module under test
	Vshiftr *shiftr = new Vshiftr;

	start = clock();
    shiftr->alu_a_i = alu_a_i;
    shiftr->alu_b_i = alu_b_i;
    shiftr->alu_op_i = 0x3;
    for(int i = 0; i < calls; i++){
	shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    shiftr->eval();
    }
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;


    if(shiftr->alu_p_o != out){
        std::cout << "Error\n";
    }
        // std:: cout << "Verilog Output:" << shiftl->alu_p_o << "\n";
        // std:: cout << "C Output:" << out << "\n\n";
}
