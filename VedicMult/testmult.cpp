#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vvedic8x8.h"
#include "mult.c"

typedef unsigned char uint8;
typedef unsigned short uint16;
uint16 multiply_c(uint8 a, uint8 b);
void test(uint8 a, uint8 b);

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
        test(rand(), rand());
    }

    // std::cout << "Time taken by C Implementation: "
    //       << cTime << " seconds" << std::endl;
    
	// std::cout << "Time taken by Verilator Simulation: "
    //      << verilatorTime << " seconds" << std::endl;

    // std::cout << verilatorTime / cTime << " times faster\n";
    std::cout << cTime << " " << cTime2 << " " << verilatorTime << " " << verilatorTime2;
	exit(EXIT_SUCCESS);
}
void test(uint8 a, uint8 b){
	volatile uint16 out;
    clock_t start, end;
	//C Implementation 
	
    start = clock();
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    out = multiply_c(a, b);
    end = clock();
    cTime2 += ((double) (end - start)) / CLOCKS_PER_SEC;

	//Verilator simulation

	//Create an instance of our module under test
	Vvedic8x8 *vedic8x8 = new Vvedic8x8;


    vedic8x8->a = a;
    vedic8x8->b = b;
    start = clock();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
	vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
    vedic8x8->eval();
	end = clock();
    verilatorTime2 += ((double) (end - start)) / CLOCKS_PER_SEC;

    if(vedic8x8->prod != out){
        std::cout << "Error\n";
    }
        // std:: cout << "Verilog Output:" << shiftl->alu_p_o << "\n";
        // std:: cout << "C Output:" << out << "\n\n";
}
