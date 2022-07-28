#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vmat_mult.h"
#include "matrixmult.c"

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
    //Create an instance of our module under test
	Vmat_mult *mat_mult = new Vmat_mult;

    mat_mult->rst_80 = 1;
    mat_mult->eval();
    mat_mult->rst_80 = 0;

    mat_mult->A00_80 = 255;
	mat_mult->A01_80 = 255;
	mat_mult->A02_80 = 255;
	mat_mult->A03_80 = 255;

    mat_mult->B00_80 =  127;
	mat_mult->B01_80 = 127;
	mat_mult->B02_80 = 127;
	mat_mult->B03_80 = 127;
    

    for(int i = 0; i<2; i ++){
        mat_mult->clk_80 = 1;
        mat_mult->eval();
        mat_mult->clk_80 = 0;
        mat_mult->eval();
    }
    
    std::cout << mat_mult->AB00_80 << std::endl;

    std::cout << mat_mult_c(255, 255, 255, 255, 127, 127, 127, 127) << std::endl;
}