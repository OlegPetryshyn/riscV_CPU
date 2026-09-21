import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge


async def reset(dut):
    dut.rset_n.value = 0
    await ClockCycles(dut.clk, 3)
    dut.rset_n.value = 1
    await RisingEdge(dut.clk)


@cocotb.test()
async def test_addition(dut):
    """Verifica esecuzione istruzioni ADDI e ADD"""
    # 1. Avvio clock a 100 MHz (nota: unit al singolare)
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    # 2. Sequenza di reset
    await reset(dut)
    dut._log.info("Reset completato, CPU in esecuzione...")

    # 3. Esecuzione per 6 cicli monitorando il PC
    for cycle in range(6):
        await RisingEdge(dut.clk)
        dut._log.info(f"Ciclo {cycle}: PC = 0x{int(dut.pc.value):08x}")

   # 4. Riferimento al Register File e lettura diretta dei registri
    rf = dut.instancecore.instancerf

    val_x1 = int(rf.register[1].value)
    val_x2 = int(rf.register[2].value)
    val_x3 = int(rf.register[3].value)

    dut._log.info(f"Registro x1 = {val_x1} (atteso: 5)")
    dut._log.info(f"Registro x2 = {val_x2} (atteso: 10)")
    dut._log.info(f"Registro x3 = {val_x3} (atteso: 15)")

    # 5. Asserzioni di verifica
    assert val_x1 == 5,  f"Errore x1: atteso 5, ottenuto {val_x1}"
    assert val_x2 == 10, f"Errore x2: atteso 10, ottenuto {val_x2}"
    assert val_x3 == 15, f"Errore x3: atteso 15, ottenuto {val_x3}"

    dut._log.info("Test completato con successo: pipeline e ALU operative!")