#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vfht.h"
#include "fht.c"

typedef unsigned char uint8;
uint8 fht_c(bool reset, uint8 data_i);
void test(uint8 data_i);

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
void test(uint8 data_i){
	// volatile uint8 out;
    // clock_t start, end;

    Vfht *fht = new Vfht;
    fht->data_i = data_i;
    fht->reset = 0;
    for(int i = 0; i < 4; i++){
        fht->clk = 1;
        fht->eval();
        fht->clk = 0;
        fht->eval();
    }
    fht->eval();

    std:: cout << fht->data_o << std::endl;
	//C Implementation 

}
