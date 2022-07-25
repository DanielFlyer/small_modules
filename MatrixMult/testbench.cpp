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

    mat_mult->A00_80 = 10;//X00
	mat_mult->A01_80 = 20;//X01
	mat_mult->A02_80 = 30;//X02
	mat_mult->A03_80 = 40;//X03

    mat_mult->B00_80 =  13;//Y00 = 0.1
	mat_mult->B01_80 = 77;//Y10 = 0.6
	mat_mult->B02_80 = 102;//Y20 = 0.8
	mat_mult->B03_80 = 205;//Y20 = -0.4
    

    for(int i = 0; i<2; i ++){
        mat_mult->clk_80 = 1;
        mat_mult->eval();
        mat_mult->clk_80 = 0;
        mat_mult->eval();
    }
    
    std::cout << mat_mult->AB00_80 << std::endl;

    std::cout << mat_mult_c(10, 20, 30, 40, 13, 77, 102, 205) << std::endl;
}