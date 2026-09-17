
SIM ?= verilator
TOPLEVEL_lang ?= verilog
# isa compiled first
VERILOG_SOURCES = $(PWD)/../rtl/pkg/isa_pkg.sv
# other rtl files in 2 folders 
VERILOG_SOURCES += $(wildcard $(PWD)/../rtl/core/*.sv)
VERILOG_SOURCES += $(wildcard $(PWD)/../rtl/top/*.sv)

TOPLEVEL = rv321_top.sv

MODULE = test_top

VERILOG_SOURCES =  (wildcard $(PWD)/../rtl/*.sv)

include $(shell cocotb-config --makefiles)/Makefile.sim