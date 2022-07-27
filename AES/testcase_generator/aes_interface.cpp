#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "../obj_dir/Vaes_128.h"
//#include "../obj_dir/Vaes_192.h"
//#include "../obj_dir/Vaes_256.h"

typedef unsigned int word;

int main(int argc, char **argv) {
	  // Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	return 0;
}

void interface_128(word state[], word key[], word[] out){

	// Create an instance of our module under test
	Vaes_128 *aes_128 = new Vaes_128;
	
	aes_128->state = {state[3], state[2], state[1], state[0]};
	aes_128->key = {key[3], key[2], key[1], key[0]};
	while(aes_128 -> out != ){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	state = aes_128->out;
}


/*word interface_192(word state, word key){
  // Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	// Create an instance of our module under test
	Vaes_128 *aes_192 = new Vaes_192;
	
	aes_192->state = state;
	aes_192->key = key;
	aes_192->clk = 1;
	aes_192->eval();
	aes_192->clk = 0;
	return aes_192->out;
}

word interface_256(word state, word key){
  // Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	// Create an instance of our module under test
	Vaes_128 *aes_256 = new Vaes_256;
	
	aes_256->state = state;
	aes_256->key = key;
	aes_256->clk = 1;
	aes_256->eval();
	aes_256->clk = 0;
	return aes_256->out;
}
*/
