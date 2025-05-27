import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import (
    RisingEdge, FallingEdge,
    Timer, Join, Event
)
from typing import (
    TYPE_CHECKING,
    Any,
    Callable,
    Deque,
    Dict,
    Generic,
    List,
    Optional,
    Sequence,
    Tuple,
    TypeVar,
    Union,
)
import logging




class AsyncFIFO_Testbench:

    def __init__(self, dut: Any, rclk_ns: int = 13, wclk_ns: int = 7) -> None:
        self.dut = dut
        self.name = type(self).__qualname__
        self.log = logging.getLogger(self.name)
        self.log.setLevel(logging.INFO)
        self.max_delay_ns = max(rclk_ns, wclk_ns)
        self.rclk_ns = rclk_ns
        self.wclk_ns = wclk_ns

        cocotb.start_soon(Clock(self.dut.rclk_i, rclk_ns, units='ns').start())
        cocotb.start_soon(Clock(self.dut.wclk_i, wclk_ns, units='ns').start())

    async def reset(self):
        """Reset the DUT"""
        self.dut.wr_i.value = 0
        self.dut.rd_i.value = 0
        self.dut.wdata_i.value = 0

        self.dut.rrst_n_i.value = 1
        self.dut.wrst_n_i.value = 1

        await Timer(self.max_delay_ns, units='ns')

        self.dut.rrst_n_i.value = 0
        self.dut.wrst_n_i.value = 0

        await Timer(self.max_delay_ns, units='ns')

        self.dut.rrst_n_i.value = 1
        self.dut.wrst_n_i.value = 1

        await Timer(self.max_delay_ns, units='ns')


    # write data to the DUT
    async def write_data(self, data: List[int], check_full: bool = True):
        for datum in data:
            assert isinstance(datum, int), "Data must be an integer"
            if check_full:
                assert self.dut.wfull_o.value == 0, "FIFO is full"
            self.dut.wr_i.value    = 1
            self.dut.wdata_i.value = datum
            await RisingEdge(self.dut.wclk_i)
            self.dut.wr_i.value    = 0
            await RisingEdge(self.dut.wclk_i)


    # read data from the DUT
    async def read_data(self, expected_data: List[int], check_empty: bool = True):
        read_values = []
        for expected_datum in expected_data:
            assert isinstance(expected_datum, int), "Data must be an integer"
            if check_empty:
                assert self.dut.rempty_o.value == 0, "FIFO is empty"
            self.dut.rd_i.value = 1
            comp = int(self.dut.rdata_o.value)
            read_values.append(comp)
            await RisingEdge(self.dut.rclk_i)
            self.dut.rd_i.value = 0
            await RisingEdge(self.dut.rclk_i)
            assert comp == expected_datum, f"Expected {expected_datum}, got {comp}"
        return read_values

    # Write a single data word to the FIFO
    async def write_one(self, data: int, check_full: bool = True):
        if check_full:
            assert self.dut.wfull_o.value == 0, f"FIFO is full upon starting write_one. wfull_o={self.dut.wfull_o.value}"
        self.dut.wr_i.value = 1
        self.dut.wdata_i.value = data
        await RisingEdge(self.dut.wclk_i)
        self.dut.wr_i.value = 0
        await RisingEdge(self.dut.wclk_i)

    # Read a single data word from the FIFO
    async def read_one(self, check_empty: bool = True):
        if check_empty:
            assert self.dut.rempty_o.value == 0, f"FIFO is empty upon starting read_one. rempty_o={self.dut.rempty_o.value}"
        self.dut.rd_i.value = 1
        data = int(self.dut.rdata_o.value)
        await RisingEdge(self.dut.rclk_i)
        self.dut.rd_i.value = 0
        await RisingEdge(self.dut.rclk_i)
        return data


async def test_simple_rw(tb: AsyncFIFO_Testbench):
    """Test the DUT with simple sequential read/write operations"""

    tb.log.info("Starting test_simple_rw: Simple sequential read/write operations.")

    # Reset the DUT
    tb.log.info("Resetting the DUT...")
    await tb.reset()
    tb.log.info("DUT reset complete.")
    tb.log.info(f"Initial FIFO state: rempty_o={tb.dut.rempty_o.value}, wfull_o={tb.dut.wfull_o.value}")


    fifo_depth = 1 << tb.dut.ADDRESS_SIZE.value 
    rand_list = random.sample(range(0, 2**int(tb.dut.DATA_SIZE.value)-1), fifo_depth)
    tb.log.info(f"Generated {len(rand_list)} random data items to write.")

    # Write data to the DUT
    tb.log.info(f"Starting to write {len(rand_list)} items to the FIFO...")
    await tb.write_data(rand_list)
    tb.log.info("Finished writing all items.")
    tb.log.info(f"After write_data: rempty_o={tb.dut.rempty_o.value}, wfull_o={tb.dut.wfull_o.value}")

    # Check if FIFO is full
    tb.log.info(f"Checking if FIFO is full. Expected wfull_o=1, Got wfull_o={tb.dut.wfull_o.value}")
    assert tb.dut.wfull_o.value == 1, f"FIFO should be full after writing {len(rand_list)} items. wfull_o is {tb.dut.wfull_o.value}"
    tb.log.info("FIFO is full as expected.")

    # Read data from the DUT
    tb.log.info(f"Starting to read {len(rand_list)} items from the FIFO...")

    read_items = await tb.read_data(rand_list)
    tb.log.info(f"Finished reading items. Expected {len(rand_list)}, Got {len(read_items) if read_items else 'N/A'}.")

    # The assert comp == expected_datum inside read_data handles individual checks.
    tb.log.info(f"After read_data: rempty_o={tb.dut.rempty_o.value}, wfull_o={tb.dut.wfull_o.value}")


    # Check if FIFO is empty
    tb.log.info(f"Checking if FIFO is empty. Expected rempty_o=1, Got rempty_o={tb.dut.rempty_o.value}")
    assert tb.dut.rempty_o.value == 1, f"FIFO should be empty after reading all items. rempty_o is {tb.dut.rempty_o.value}"
    tb.log.info("FIFO is empty as expected.")

    tb.log.info("test_simple_rw completed successfully.")



async def test_interleaved_rw(tb: AsyncFIFO_Testbench):
    """Test the DUT with interleaved read/write operations"""
    await tb.reset()

    # Consider a smaller list for quicker debugging initially
    rand_list = [random.randint(0, 2**32 - 1) for _ in range(5)]

    for i, sample in enumerate(rand_list):
        tb.log.info(f"--- Interleaved Test: Iteration {i+1}/{len(rand_list)}, Value: {sample} ---")

        # Write data to the DUT
        tb.log.info(f"[{i+1}] Calling write_one({sample})")
        await tb.write_one(sample)
        tb.log.info(f"[{i+1}] After write_one({sample}): wfull_o={tb.dut.wfull_o.value}, rempty_o={tb.dut.rempty_o.value}")

        # FIFO should not be full after a single write (assuming depth > 1)
        assert tb.dut.wfull_o.value == 0, f"FIFO should not be full after one write. wfull_o={tb.dut.wfull_o.value}"

        # Crucial: Wait for rempty_o to go low (not empty)
        # This signal is in the read clock domain (rclk_i).
        tb.log.info(f"[{i+1}] Waiting for rempty_o to go low. Current rempty_o={tb.dut.rempty_o.value}")
        max_rclk_wait_cycles = 20  # Adjust if needed, but typical CDC latency is a few cycles
        cycles_waited = 0
        while tb.dut.rempty_o.value == 1 and cycles_waited < max_rclk_wait_cycles:
            await RisingEdge(tb.dut.rclk_i)
            cycles_waited += 1
            # tb.log.debug(f"[{i+1}] Waited {cycles_waited} rclk. rempty_o={tb.dut.rempty_o.value}") # Use if needed

        tb.log.info(f"[{i+1}] After polling for not empty: rempty_o={tb.dut.rempty_o.value} (waited {cycles_waited} rclk cycles)")
        
        # If rempty_o is still 1, the FIFO hasn't updated its status correctly or in time.
        # This assert now happens *before* calling read_one's internal assert.
        assert tb.dut.rempty_o.value == 0, \
            f"Timeout or error: FIFO is still empty after write and polling (waited {cycles_waited} rclks). Cannot proceed to read_one."

        # Read data from the DUT
        tb.log.info(f"[{i+1}] Calling read_one expecting to read {sample}")
        read_value = await tb.read_one() # Passing `sample` here was incorrect for your `read_one` signature
        tb.log.info(f"[{i+1}] After read_one(): read_val={read_value}, current rempty_o={tb.dut.rempty_o.value}")
        
        # Assert that the read data is correct
        assert read_value == sample, f"[{i+1}] Data mismatch: Expected {sample}, got {read_value}"

        # After reading the only item, FIFO should become empty.
        tb.log.info(f"[{i+1}] Waiting for rempty_o to go high (empty). Current rempty_o={tb.dut.rempty_o.value}")
        cycles_waited_for_empty = 0

        # The refined read_one already waits one rclk cycle. If not empty yet, wait more.
        while tb.dut.rempty_o.value == 0 and cycles_waited_for_empty < max_rclk_wait_cycles:
            await RisingEdge(tb.dut.rclk_i)
            cycles_waited_for_empty += 1

        tb.log.info(f"[{i+1}] After polling for empty: rempty_o={tb.dut.rempty_o.value} (waited {cycles_waited_for_empty} rclk cycles)")
        assert tb.dut.rempty_o.value == 1, \
            f"FIFO should be empty after read. rempty_o={tb.dut.rempty_o.value} (waited {cycles_waited_for_empty} rclks for empty)"
        
        tb.log.info(f"--- Interleaved Test: Iteration {i+1} for value {sample} PASSED ---")


async def test_invalid_states(tb: AsyncFIFO_Testbench):
    """Test FIFO behavior on invalid operations: read from empty, write to full."""
    tb.log.info("Starting test_invalid_states.")

    fifo_depth = 1 << tb.dut.ADDRESS_SIZE.value
    tb.log.info(f"Determined FIFO depth: {fifo_depth} items.")
    dummy_data_value = 0xDEADBEEF # A dummy value for writes

    # --- Part 1: Attempt to Read from an Empty FIFO ---
    tb.log.info("Part 1: Testing read from empty FIFO.")
    await tb.reset()
    tb.log.info(f"FIFO reset. Initial state: rempty_o={tb.dut.rempty_o.value}, wfull_o={tb.dut.wfull_o.value}")

    assert tb.dut.rempty_o.value == 1, "FIFO should be empty after reset."

    tb.log.info("Attempting to read from empty FIFO (check_empty=False)...")
    # The read_one method samples rdata_o, then clocks.
    # The DUT's rempty_o should prevent rbin from changing.
    # The value read is not strictly defined here, focus is on flags and state.
    read_val_when_empty = await tb.read_one(check_empty=False)
    tb.log.info(f"Attempted read from empty. rempty_o={tb.dut.rempty_o.value}. Read value (undefined): {hex(read_val_when_empty)}")

    assert tb.dut.rempty_o.value == 1, "FIFO should still be empty after an attempted read from empty."
    tb.log.info("rempty_o correctly remained 1.")

    # Verify FIFO is still usable: write one item, then read it.
    tb.log.info("Verifying FIFO usability: Writing one item (0xCAFE)...")
    item_to_write = 0xCAFE
    await tb.write_one(item_to_write)
    tb.log.info(f"After writing 0xCAFE: rempty_o={tb.dut.rempty_o.value}, wfull_o={tb.dut.wfull_o.value}")

    # Wait for rempty_o to de-assert (standard practice before a valid read)
    cycles_waited = 0
    max_wait_cycles = 10
    while tb.dut.rempty_o.value == 1 and cycles_waited < max_wait_cycles:
        await RisingEdge(tb.dut.rclk_i)
        cycles_waited += 1
    assert tb.dut.rempty_o.value == 0, "FIFO should not be empty after writing one item."

    tb.log.info("Reading back the item 0xCAFE...")
    read_back_item = await tb.read_one()
    assert read_back_item == item_to_write, f"Read back item mismatch. Expected {hex(item_to_write)}, got {hex(read_back_item)}"
    tb.log.info(f"Successfully wrote and read {hex(item_to_write)}. FIFO is operational after empty read attempt.")

    # Wait for rempty_o to assert again
    cycles_waited = 0
    while tb.dut.rempty_o.value == 0 and cycles_waited < max_wait_cycles:
        await RisingEdge(tb.dut.rclk_i)
        cycles_waited += 1
    assert tb.dut.rempty_o.value == 1, "FIFO should be empty after reading the item."
    tb.log.info("Part 1 (read from empty) complete.")

    # --- Part 2: Attempt to Write to a Full FIFO ---
    tb.log.info("Part 2: Testing write to full FIFO.")
    await tb.reset()
    tb.log.info("FIFO reset for Part 2.")

    tb.log.info(f"Filling FIFO with {fifo_depth} items...")
    full_data_list = [i for i in range(fifo_depth)]
    await tb.write_data(full_data_list) # Assumes write_data can fill it completely
    tb.log.info(f"FIFO filled. Current state: rempty_o={tb.dut.rempty_o.value}, wfull_o={tb.dut.wfull_o.value}")

    # Wait for wfull_o to assert if it has latency (unlikely for wfull_o if write_data is synchronous enough)
    # but good to be sure. Typically wfull_o is more immediate in the write domain.
    if tb.dut.wfull_o.value != 1:
        tb.log.info("wfull_o not 1 immediately, waiting a few wclk cycles...")
        for _ in range(5): # Wait a few write clock cycles
            if tb.dut.wfull_o.value == 1: break
            await RisingEdge(tb.dut.wclk_i)
    assert tb.dut.wfull_o.value == 1, "FIFO should be full after writing {fifo_depth} items."
    tb.log.info("FIFO is full as expected.")

    tb.log.info(f"Attempting to write to full FIFO (value: {hex(dummy_data_value)}, check_full=False)...")
    # The DUT's wfull_o should prevent wbin from changing.
    await tb.write_one(dummy_data_value, check_full=False)
    tb.log.info(f"Attempted write to full. wfull_o={tb.dut.wfull_o.value}")

    assert tb.dut.wfull_o.value == 1, "FIFO should still be full after an attempted write to full."
    tb.log.info("wfull_o correctly remained 1.")

    # Verify FIFO data integrity: read back all original items.
    tb.log.info(f"Verifying FIFO data integrity by reading back {fifo_depth} original items...")
    read_back_full_data = await tb.read_data(full_data_list)

    # read_data internally asserts data. If it passes, data is good.
    tb.log.info(f"Successfully read back and verified all {len(read_back_full_data)} original items.")
    tb.log.info(f"Final state after reading all: rempty_o={tb.dut.rempty_o.value}, wfull_o={tb.dut.wfull_o.value}")

    assert tb.dut.rempty_o.value == 1, "FIFO should be empty after reading all items."
    assert tb.dut.wfull_o.value == 0, "FIFO should not be full after reading all items." # wfull should also go low
    tb.log.info("Part 2 (write to full) complete.")

    tb.log.info("test_invalid_states completed successfully.")


@cocotb.test()
async def async_fifo_test(dut):
    """Test the asynchronous FIFO with various test cases"""
    tb = AsyncFIFO_Testbench(dut)
    tb.log.info("Starting FIFO tests")

    # Simple sequential read/write test
    tb.log.info("Running simple sequential read/write test")
    await test_simple_rw(tb)

    # Interleaved read/write test
    tb.log.info("Running interleaved read/write test")
    await test_interleaved_rw(tb)

    # Test for invalid states
    tb.log.info("Running invalid states test")
    await test_invalid_states(tb) # Add this call
    
    tb.log.info("All tests completed successfully")
