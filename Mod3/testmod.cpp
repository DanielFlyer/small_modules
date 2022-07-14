#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vmod3.h"
#include "mod3.c"

typedef unsigned char uint8;

uint8 mod3_c(uint8 a);
void test(uint8 a);

double verilatorTime;
double cTime;
double verilatorTime2;
double cTime2;

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
    verilatorTime = 0;
    cTime = 0;
    verilatorTime2 = 0;
    cTime2 = 0;
    //std::cout << "Stress Testing:\n";
    for(int i = 0; i < atoi(argv[1]); i++){
        test(rand());
    }

    // std::cout << "Time taken by C Implementation: "
    //       << cTime << " seconds" << std::endl;
    
	// std::cout << "Time taken by Verilator Simulation: "
    //      << verilatorTime << " seconds" << std::endl;

    // std::cout << verilatorTime / cTime << " times faster\n";
    std::cout << cTime << " " << cTime2 << " " << verilatorTime << " " << verilatorTime2;
	exit(EXIT_SUCCESS);
}
void test(uint8 dat){
	volatile uint8 out;
    clock_t start, end;
	//C Implementation 
	
    start = clock();
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    out = mod3_c(dat);
    end = clock();
    cTime2 += ((double) (end - start)) / CLOCKS_PER_SEC;

	//Verilator simulation

	//Create an instance of our module under test
	Vmod3 *mod3 = new Vmod3;


    mod3->dat_i = dat;
    start = clock();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
	mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
    mod3->eval();
	end = clock();
    verilatorTime2 += ((double) (end - start)) / CLOCKS_PER_SEC;

    if(mod3->reminder != out){
        std::cout << "Error\n";
    }
        // std:: cout << "Verilog Output:" << shiftl->alu_p_o << "\n";
        // std:: cout << "C Output:" << out << "\n\n";
}
