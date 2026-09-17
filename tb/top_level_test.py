
import cocotb 
import cocotb.clock import Clock
import cocotb.triggers import ClockCicles, RisingEdge


# reset sequence 
async def reset(dut):
    dut.rest_n.value = 0
    await ClockCicles(dut.clk, 3)
    dut.rest_n.value = 1
    await RisingEdge (dut.clk)


@cocotb.test()
async def test_addition(dut)
    dut._log.info ("test start")
    """ tests addi x1, 5; addi x2, 10 add x3,x1,x2"""


    # starting the simulation clk (period is 10 ns)
    cocotb.start_soon(Clock(dut.clk,10, units "ns").start())

    # reset 
    await reset(dut)
    dut._log.info ("Reset completed, starting...")


    #six clk execution (to test all operations)
    for cycle in range (6):
        await RisingEdge(dut.clk)
        dut._log.info(f"Ciclo {cycle}: PC = 0x{pc_val:08x}")      

    # gerarchic inspection of registers
    val_x1 = rf.registers[1].value.integer
    val_x2 = rf.registers[2].value.integer
    val_x3 = rf.registers[3].value.integer

    dut._log.info(f"x1 = {val_x1} (atteso: 5)")
    dut._log.info(f"x2 = {val_x2} (atteso: 10)")
    dut._log.info(f"x3 = {val_x3} (atteso: 15)")

# 5. Asserzioni automatiche (se falliscono, il test si blocca e segnala errore)
    assert val_x1 == 5,     f"Errore su x1: atteso 5, ottenuto {val_x1}"
    assert val_x2 == 10,    f"Errore su x2: atteso 10, ottenuto {val_x2}"
    assert val_x3 == 15,    f"Errore su x3: atteso 15, ottenuto {val_x3}"

    dut._log.info("Test superato con successo!")