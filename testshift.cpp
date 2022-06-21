#include <stdlib.h>
#include <iostream>
#include <chrono>
#include "verilated.h"
#include "./obj_dir/Vshiftl.h"
#include "shiftl.c"
#define REV(n) ((n << 24) | (((n>>16)<<24)>>16) |  (((n<<16)>>24)<<16) | (n>>24))
typedef unsigned int word;
word shiftl(word alu_a_i, word alu_b_i);

int main(int argc, char **argv) {
	for(int i = 0; i < atoi(argv[1]); i++){
	//Generate test case
	word alu_a_i = 11;
    word alu_b_i = 1;
	word out;

	//C Implementation 
	auto start = std::chrono::steady_clock::now();
	out = shiftl(alu_a_i, alu_b_i);
	auto stop = std::chrono::steady_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

	std::cout << "Time taken by C Implementation: "
          << duration.count() << " nanoseconds" << std::endl;


	//Verilator simulation

	//Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	//Create an instance of our module under test
	Vshiftl *shiftl = new Vshiftl;

	auto start2 = std::chrono::steady_clock::now();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
	auto stop2 = std::chrono::steady_clock::now();
	auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(stop2 - start2);
	std::cout << "Time taken by Verilator Simulation: "
         << duration2.count() << " microseconds" << std::endl;
		printf("\n");

    if(shiftl->alu_p_o == out){
        std::cout << "Correct";
    }else{
        std:: cout << " Verilog Output:" << shiftl->alu_p_o << "/n";
        std:: cout << " C Output:" << out << "/n";
    }
	}
	exit(EXIT_SUCCESS);
}
