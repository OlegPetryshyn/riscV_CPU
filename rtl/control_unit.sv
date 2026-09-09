// ===============================================================================================
// file name: control_unit ==> control unit
// function: receives instruction from the memory and outputs the control data necessary to 
// execute it. In this implementation the control unit does not receive the zero flag (it will
// be don in the top level part)
/*
NAME	    Function	Bits	Description
opcode_e	imput	    7	    has all the necessary information to decode the type of instruction 
funct3	    imput	    3	
funct7 	    imput	    5	
alu_sel	    output	    1	    selects second alu operand (register or immediate)
mem_to_reg	output	    1	    enables reading
reg_write	output	    1	    enables writing 
mem_write	output	    1	    enables writing on  memory
alu_control	output	    1	    Controls ALU operation 
pc_mux	    output	    1	    selects the next value of the program counter (either PC+4 or jump)
*/
// ===============================================================================================


 module control_unit import isa_pkg::*;
 {
    input   logic         clk,
    input   logic   [6:0] opcode_e,
    input   logic   [3:0] funct3,
    input   logic   [5:0] funct7,
    output  logic   alu_sel,
    output  logic   [6:0] alu_control,
    output  logic   mem_to_reg,
    output  logic   reg_write,
    output  logic   mem_write,
    output  logic   pc_mux,
 };


    always_ff @(posedge clk) begin


    end


 endmodule