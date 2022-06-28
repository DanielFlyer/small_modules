#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vshiftl.h"
#include "shiftl.c"

typedef unsigned int word;
word shiftl_c(word alu_a_i, word alu_b_i);
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
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    out = shiftl_c(alu_a_i, alu_b_i);
    }
	end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

	//Verilator simulation

	//Create an instance of our module under test
	Vshiftl *shiftl = new Vshiftl;

	start = clock();
    for(int i = 0; i < calls; i++){
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    shiftl->alu_a_i = alu_a_i;
    shiftl->alu_b_i = alu_b_i;
	shiftl->eval();
    }
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;


    if(shiftl->alu_p_o != out){
        std::cout << "Error\n";
    }
        // std:: cout << "Verilog Output:" << shiftl->alu_p_o << "\n";
        // std:: cout << "C Output:" << out << "\n\n";
}
