#include <stdlib.h>
#include <iostream>
#include <chrono>
#include "verilated.h"
#include "./obj_dir/Vshiftl.h"
#include "shiftl.c"

typedef unsigned int word;
word shiftl_c(word alu_a_i, word alu_b_i);
void test(word alu_a_i, word alu_b_i);

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
	for(int i = 0; i < atoi(argv[1]); i++){
        test(rand(), rand());
	}
	exit(EXIT_SUCCESS);
}
void test(word alu_a_i, word alu_b_i){
	word out;

	//C Implementation 
	auto start = std::chrono::steady_clock::now();
	out = shiftl_c(alu_a_i, alu_b_i);
	auto stop = std::chrono::steady_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

	std::cout << "Time taken by C Implementation: "
          << duration.count() << " nanoseconds" << std::endl;


	//Verilator simulation

	//Create an instance of our module under test
	Vshiftl *shiftl = new Vshiftl;

	auto start2 = std::chrono::steady_clock::now();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
	auto stop2 = std::chrono::steady_clock::now();
	auto duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop2 - start2);
	std::cout << "Time taken by Verilator Simulation: "
         << duration2.count() << " nanoseconds" << std::endl;

    if(shiftl->alu_p_o == out){
        std::cout << "Correct\n";
    }
        std:: cout << "Verilog Output:" << shiftl->alu_p_o << "\n";
        std:: cout << "C Output:" << out << "\n\n";
}
