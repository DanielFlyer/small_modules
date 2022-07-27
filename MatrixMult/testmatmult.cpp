#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vmat_mult.h"
#include "matrixmult.c"

void test(short A00_80, short A01_80, short A02_80, short A03_80, short B00_80, short B01_80, short B02_80, short B03_80);

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
        test(rand() % 256, rand() % 256, rand() % 256, rand() % 256, rand() % 128, rand() % 128, rand() % 128, rand() % 128);
    }

    // Corner Cases


    // std::cout << "Time taken by C Implementation: "
    //       << cTime << " seconds" << std::endl;
    
	// std::cout << "Time taken by Verilator Simulation: "
    //      << verilatorTime << " seconds" << std::endl;

    // std::cout << verilatorTime / cTime << " times faster\n";
    std::cout << cTime << " " << cTime2 << " " << verilatorTime << " " << verilatorTime2;
	exit(EXIT_SUCCESS);
}
void test(short A00_80, short A01_80, short A02_80, short A03_80, short B00_80, short B01_80, short B02_80, short B03_80){
	//Create an instance of our module under test
	Vmat_mult *mat_mult = new Vmat_mult;

    mat_mult->A00_80 = A00_80;
	mat_mult->A01_80 = A01_80;
	mat_mult->A02_80 = A02_80;
	mat_mult->A03_80 = A03_80;

    mat_mult->B00_80 = B00_80;
	mat_mult->B01_80 = B01_80;
	mat_mult->B02_80 = B02_80;
	mat_mult->B03_80 = B03_80;
    

    mat_mult->rst_80 = 1;
    mat_mult->eval();
    mat_mult->rst_80 = 0;
    for(int i = 0; i<2; i ++){
        mat_mult->clk_80 = 1;
        mat_mult->eval();
        mat_mult->clk_80 = 0;
        mat_mult->eval();
    }
    
    std::cout << mat_mult->AB00_80 << std::endl;

    std::cout << mat_mult_c(A00_80, A01_80, A02_80, A03_80, B00_80, B01_80, B02_80, B03_80) << std::endl;
}
