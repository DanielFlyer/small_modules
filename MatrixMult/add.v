//*****************************************************************//
// Altera  LPM Adder
// Created By - Vrishbhan Singh Sisodia
// San Jose State University
// EE 278
//*****************************************************************//
// megafunction wizard: %LPM_ADD_SUB%
// GENERATION: STANDARD
// VERSION: WM1.0
// MODULE: LPM_ADD_SUB 

// ============================================================
// File Name: add.v
// Megafunction Name(s):
// 			LPM_ADD_SUB
//
// Simulation Library Files(s):
// 			lpm
// ============================================================
// ************************************************************
// THIS IS A WIZARD-GENERATED FILE. DO NOT EDIT THIS FILE!
//
// 13.0.1 Build 232 06/12/2013 SP 1 SJ Web Edition
// ************************************************************


//Copyright (C) 1991-2013 Altera Corporation
//Your use of Altera Corporation's design tools, logic functions 
//and other software and tools, and its AMPP partner logic 
//functions, and any output files from any of the foregoing 
//(including device programming or simulation files), and any 
//associated documentation or information are expressly subject 
//to the terms and conditions of the Altera Program License 
//Subscription Agreement, Altera MegaCore Function License 
//Agreement, or other applicable license agreement, including, 
//without limitation, that your use is for the sole purpose of 
//programming logic devices manufactured by Altera and sold by 
//Altera or its authorized distributors.  Please refer to the 
//applicable agreement for further details.


// synopsys translate_off
`timescale 1 ps / 1 ps
// synopsys translate_on
module add (
	dataa,
	datab,
	cout,
	overflow,
	result);

	input	[10:0]  dataa;
	input	[10:0]  datab;
	output	  cout;
	output	  overflow;
	output	[10:0]  result;

	wire  sub_wire0;
	wire  sub_wire1;
	wire [10:0] sub_wire2;
	wire  overflow = sub_wire0;
	wire  cout = sub_wire1;
	wire [10:0] result = sub_wire2[10:0];

	lpm_add_sub	LPM_ADD_SUB_component (
				.datab (datab),
				.dataa (dataa),
				.overflow (sub_wire0),
				.cout (sub_wire1),
				.result (sub_wire2));
endmodule

// ============================================================
// CNX file retrieval info
// ============================================================
// Retrieval info: PRIVATE: CarryIn NUMERIC "0"
// Retrieval info: PRIVATE: CarryOut NUMERIC "1"
// Retrieval info: PRIVATE: ConstantA NUMERIC "0"
// Retrieval info: PRIVATE: ConstantB NUMERIC "0"
// Retrieval info: PRIVATE: Function NUMERIC "0"
// Retrieval info: PRIVATE: INTENDED_DEVICE_FAMILY STRING "Cyclone IV E"
// Retrieval info: PRIVATE: LPM_PIPELINE NUMERIC "0"
// Retrieval info: PRIVATE: Latency NUMERIC "0"
// Retrieval info: PRIVATE: Overflow NUMERIC "1"
// Retrieval info: PRIVATE: RadixA NUMERIC "10"
// Retrieval info: PRIVATE: RadixB NUMERIC "10"
// Retrieval info: PRIVATE: Representation NUMERIC "0"
// Retrieval info: PRIVATE: SYNTH_WRAPPER_GEN_POSTFIX STRING "0"
// Retrieval info: PRIVATE: ValidCtA NUMERIC "0"
// Retrieval info: PRIVATE: ValidCtB NUMERIC "0"
// Retrieval info: PRIVATE: WhichConstant NUMERIC "0"
// Retrieval info: PRIVATE: aclr NUMERIC "0"
// Retrieval info: PRIVATE: clken NUMERIC "0"
// Retrieval info: PRIVATE: nBit NUMERIC "11"
// Retrieval info: PRIVATE: new_diagram STRING "1"
// Retrieval info: LIBRARY: lpm lpm.lpm_components.all
// Retrieval info: CONSTANT: LPM_DIRECTION STRING "ADD"
// Retrieval info: CONSTANT: LPM_HINT STRING "ONE_INPUT_IS_CONSTANT=NO,CIN_USED=NO"
// Retrieval info: CONSTANT: LPM_REPRESENTATION STRING "SIGNED"
// Retrieval info: CONSTANT: LPM_TYPE STRING "LPM_ADD_SUB"
// Retrieval info: CONSTANT: LPM_WIDTH NUMERIC "11"
// Retrieval info: USED_PORT: cout 0 0 0 0 OUTPUT NODEFVAL "cout"
// Retrieval info: USED_PORT: dataa 0 0 11 0 INPUT NODEFVAL "dataa[10..0]"
// Retrieval info: USED_PORT: datab 0 0 11 0 INPUT NODEFVAL "datab[10..0]"
// Retrieval info: USED_PORT: overflow 0 0 0 0 OUTPUT NODEFVAL "overflow"
// Retrieval info: USED_PORT: result 0 0 11 0 OUTPUT NODEFVAL "result[10..0]"
// Retrieval info: CONNECT: @dataa 0 0 11 0 dataa 0 0 11 0
// Retrieval info: CONNECT: @datab 0 0 11 0 datab 0 0 11 0
// Retrieval info: CONNECT: cout 0 0 0 0 @cout 0 0 0 0
// Retrieval info: CONNECT: overflow 0 0 0 0 @overflow 0 0 0 0
// Retrieval info: CONNECT: result 0 0 11 0 @result 0 0 11 0
// Retrieval info: GEN_FILE: TYPE_NORMAL add.v TRUE
// Retrieval info: GEN_FILE: TYPE_NORMAL add.inc FALSE
// Retrieval info: GEN_FILE: TYPE_NORMAL add.cmp FALSE
// Retrieval info: GEN_FILE: TYPE_NORMAL add.bsf FALSE
// Retrieval info: GEN_FILE: TYPE_NORMAL add_inst.v FALSE
// Retrieval info: GEN_FILE: TYPE_NORMAL add_bb.v TRUE
// Retrieval info: LIB_FILE: lpm
