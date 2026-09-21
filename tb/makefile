SIM ?= verilator
TOPLEVEL_LANG ?= verilog
WAVES ?= 1

ifeq ($(SIM),verilator)
    EXTRA_ARGS += --trace --trace-structs --public-flat-rw
endif

ifeq ($(SIM),icarus)
    COMPILE_ARGS += -g2012
endif

# isa compiled first
VERILOG_SOURCES = $(PWD)/../rtl/package/isa_pkg.sv
# other rtl files in 2 folders 
VERILOG_SOURCES += $(wildcard $(PWD)/../rtl/core/*.sv)
VERILOG_SOURCES += $(wildcard $(PWD)/../rtl/top_level/*.sv)

TOPLEVEL = rv321_top
MODULE = test_top

include $(shell cocotb-config --makefiles)/Makefile.sim