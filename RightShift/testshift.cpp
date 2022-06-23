#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vshiftr.h"
#include "shiftr.c"

typedef unsigned int word;
word shiftr_c(word alu_a_i, word alu_b_i, char opcode);
void test(word alu_a_i, word alu_b_i, char opcode);

double verilatorTime;
double cTime;

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
    verilatorTime = 0;
    cTime = 0;
    std::cout << "Stress Testing:\n";
	for(int i = 0; i < atoi(argv[1]); i++){
        test(rand(), rand(), 0x3);
	}
    std::cout << "Stress Testing:\n";
    test(4294967295, 4294967295, 0x3);
    test(0, 0, 0x3);
    test (4294967295, 0, 0x3);
    test (4294967294, 4294967295, 0x3);
    test(4294967295, 4294967295, 0x2);
    test(0, 0, 0x2);
    test (4294967295, 0, 0x2);
    test (4294967294, 4294967295, 0x2);

    std::cout << "Time taken by C Implementation: "
          << cTime << " seconds" << std::endl;
    
	std::cout << "Time taken by Verilator Simulation: "
         << verilatorTime << " seconds" << std::endl;
         
    std::cout << 100 * (double)(verilatorTime - cTime) / cTime << "% time save\n";
	exit(EXIT_SUCCESS);
}
void test(word alu_a_i, word alu_b_i, char opcode){
	word out;
    clock_t start, end;
	//C Implementation 
	
    start = clock();
	out = shiftr_c(alu_a_i, alu_b_i, opcode);
	end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

	//Verilator simulation

	//Create an instance of our module under test
	Vshiftr *shiftr = new Vshiftr;

	start = clock();
    shiftr->alu_a_i = alu_a_i;
    shiftr->alu_b_i = alu_b_i;
    shiftr->alu_op_i = opcode;
	shiftr->eval();
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;


    if(shiftr->alu_p_o != out){
        std::cout << "Error\n";
    }
        // std:: cout << "Verilog Output:" << shiftr->alu_p_o << "\n";
        // std:: cout << "C Output:" << out << "\n\n";
}
