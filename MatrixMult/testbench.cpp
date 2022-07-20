#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vtb.h"
#include "matrixmult.c"

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
    //Create an instance of our module under test
	Vtb *tb = new Vtb;
    tb->eval();
    std::cout << tb->AB00_80;