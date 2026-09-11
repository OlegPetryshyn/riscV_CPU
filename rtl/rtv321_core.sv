//==========================================================================================
// name: rtv321_core
// function: connects all the other modules together, receiving the inputs necessary from 
// the control unit
//==========================================================================================



module imm_gen   import isa_pkg::*; 
(
    input  logic            clk,
    input  logic            rst_n,
    output logic [XLEN-1:0] pc,             //program counter
    input  logic [XLEN-1:0] inst,           // full instruction
    input  logic [XLEN-1:0] dmem_rdata,  

    output logic [XLEN-1:0] dmem_addr,      //write address in memory
    output logic [XLEN-1:0] dmem_wdata,     // write data in memory
    output logic            dmem_we,        // write enable 

 );

//-----------------------------------------------------------------------------
// internal wires
//------------------------------------------------------------------------------  
  
    // program counter
    logic [XLEN-1:0] pc_next;
    logic [XLEN-1:0] pc_4;
    logic [XLEN-1:0] pc_target;
    
    // immediate generator
    logic [XLEN-1:0]    imm_exit;

    // multiplexers 
    logic               pc_sel;             //program counter selector
    logic               alu_sel;            //second alu operand selector
    logic               writeback_sel;      //writeback selector

    // control unit
    logic         mem_to_reg;       // Enables reading from memory 
    logic         reg_write;        // Enables writing on  registers       
    logic         branch;           // Signals a branch to the top level
    opcode_alu_e  op_alu;           // outputs the enum corresponding the ALU operation 

    // registers
    logic [XLEN-1:0] register_wdata;
   

    // alu
    logic [XLEN-1:0]    alu_result;
    logic               zero_flag;
    logic [XLEN-1:0]    alu_src_b; // the second operand (immediate or from register)
    


    // MODULE INSTANCES


    // program_counter instance
    program_counter instancepc(
        
    );


    // control_unit instance (uses only )
    control_unit instancecu (
        .alu_sel(),
        .branch(),
        .funct3(),
        .funct7(),
        .mem_to_reg(),
        .mem_write(),
        .op_alu(),
        .opcode_e(),
        .reg_write()
    );




    //imm_gen instance
    imm_gen instanceimm (
        .inst(inst),
        .imm(imm)
    );
    // alu instance
    ALU_32bit instanceALU (
        .a(reg_data1),
        .b(alu_src_b),
        .ALU_op(op_alu),
        .out(rd),
        .zero(zero_flag)
    );


    // register_file instance
    register_file instancereg(
        .clk(clk),
        .reg_data1(rs1),
        .
    );



endmodule

