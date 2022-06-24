#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vdivider.h"
#include "divide.c"

typedef unsigned int word;
//word divide_c(bool rst, bool enable, uint8_t *src1, uint8_t *src2, uint8_t *des1, uint8_t *des2, bool *desOv);
void test(uint8_t src1, uint8_t src2);

double verilatorTime;
double cTime;

int main(int argc, char **argv) {
    //Initialize Verilators variables
	Verilated::commandArgs(argc, argv);
    verilatorTime = 0;
    cTime = 0;
    std::cout << "Stress Testing:\n";
	for(int i = 0; i < atoi(argv[1]); i++){
        test((uint8_t)rand(), (uint8_t)rand());
	}
    std::cout << "Stress Testing:\n";


    std::cout << "Time taken by C Implementation: "
          << cTime << " seconds" << std::endl;
    
	std::cout << "Time taken by Verilator Simulation: "
         << verilatorTime << " seconds" << std::endl;
         
    std::cout << 100 * (double)(verilatorTime - cTime) / cTime << "% time save\n";
	exit(EXIT_SUCCESS);
}
void test(uint8_t src1, uint8_t src2){
	uint8_t des1, des2;
    bool desOv;
    //bool enable, rst;
    clock_t start, end;
	//C Implementation 
    start = clock();


	divide_c(0, 1, &src1, &src2, &des1, &des2, &desOv);
	end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

	//Verilator simulation

	//Create an instance of our module under test
	Vdivider *divider = new Vdivider;
    start = clock();
    divider->src1 = src1;
    divider->src2 = src2;
    divider->rst = 0;
    divider->enable = 1;
    for(int i = 0; i < 4; i++){
        divider->clk = 1;
	    divider->eval();
        divider->clk = 0;
        divider->eval();
    }
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;


    if(divider->des1 != des1 || divider->des2 != des2 || divider->desOv != desOv){
        std::cout << "Error\n";
        std::cout << "Source 1\n";
        printf("%d\n", src1);
        printf("%d\n", divider->src1);
        std::cout << "Source 2\n";
        printf("%d\n", src2);
        printf("%d\n", divider->src2);
        std::cout << "Des 1\n";
        printf("%d\n", des1);
        printf("%d\n", divider->des1);
        std::cout << "Des 2\n";
        printf("%d\n", des2);
        printf("%d\n", divider->des2);
        std::cout << "Des Ov\n";
        printf("%d\n", desOv);
        printf("%d\n", divider->desOv);
    }
        // std:: cout << "Verilog Output:" << divider->alu_p_o << "\n";
        // std:: cout << "C Output:" << out << "\n\n";
}
