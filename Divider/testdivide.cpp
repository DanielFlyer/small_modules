#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vdivider.h"
#include "divide.c"

typedef unsigned int word;
word divide_c(word alu_a_i, word alu_b_i);
void test(word alu_a_i, word alu_b_i);

double verilatorTime;
double cTime;

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
    verilatorTime = 0;
    cTime = 0;
    std::cout << "Stress Testing:\n";
	for(int i = 0; i < atoi(argv[1]); i++){
        test(rand(), rand());
	}
    std::cout << "Stress Testing:\n";
    test(4294967295, 4294967295);
    test(0, 0);
    test (4294967295, 0);
    test (4294967294, 4294967295);

    std::cout << "Time taken by C Implementation: "
          << cTime << " seconds" << std::endl;
    
	std::cout << "Time taken by Verilator Simulation: "
         << verilatorTime << " seconds" << std::endl;
	exit(EXIT_SUCCESS);
}
void test(word alu_a_i, word alu_b_i){
	word out;
    clock_t start, end;
	//C Implementation 
	
    start = clock();
	out = divide_c(alu_a_i, alu_b_i);
	end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

	//Verilator simulation

	//Create an instance of our module under test
	Vdivider *divider = new Vdivider;

	start = clock();
    divider->alu_a_i = alu_a_i;
    divider->alu_b_i = alu_b_i;
	divider->eval();
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;


    if(divider->alu_p_o != out){
        std::cout << "Error\n";
    }
        // std:: cout << "Verilog Output:" << divider->alu_p_o << "\n";
        // std:: cout << "C Output:" << out << "\n\n";
}
