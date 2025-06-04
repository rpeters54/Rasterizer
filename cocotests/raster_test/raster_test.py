import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, ClockCycles
from cocotb.types import LogicArray
import random
from dataclasses import dataclass
from typing import List, Tuple
import matplotlib
matplotlib.use('Agg')  # Use non-interactive backend for SSH
import matplotlib.pyplot as plt
import numpy as np
from collections import defaultdict
import os


@dataclass
class Coord3D:
    """Represents a 3D coordinate with fixed-point values"""
    x: int
    y: int
    z: int


@dataclass
class Metadata:
    """Represents triangle metadata"""
    color: int
    tile_x: int
    tile_y: int


@dataclass
class PixelOutput:
    """Represents a pixel output from the DUT"""
    x: int
    y: int
    color: int


# Constants (these should match your raster_defines.svh)
FX_FRAC_BITS = 4  # Adjust based on your defines
FX_INT_BITS = 12  # Adjust based on your defines
FX_TOTAL_BITS = FX_FRAC_BITS + FX_INT_BITS
COLOR_BITS = 8  # Adjust based on your defines
TILE_COLUMNS_BITS = 6  # Adjust based on your defines
TILE_ROWS_BITS = 5  # Adjust based on your defines
TILE_WIDTH_BITS = 4  # Adjust based on your defines
NUM_VERTICES = 3


class RasterTestbench:
    """CocoTB testbench for raster module"""
    
    def __init__(self, dut):
        self.dut = dut
        self.captured_pixels = []  # Store all captured pixels
        self.current_test_pixels = []  # Store pixels for current test
        self.output_dir = "raster_plots"  # Directory for saving plots
        self.test_counter = 0  # Counter for unique test names
        
        # Create output directory if it doesn't exist
        os.makedirs(self.output_dir, exist_ok=True)
        
    async def reset(self):
        """Reset the DUT and initialize signals"""
        # Initialize signals
        self.dut.rst_n_i.value = 0
        self.dut.rdy_out_i.value = 0
        self.dut.vld_i.value = 0
        self.dut.v0_x_i.value = 0
        self.dut.v0_y_i.value = 0
        self.dut.v0_z_i.value = 0
        self.dut.v1_x_i.value = 0
        self.dut.v1_y_i.value = 0
        self.dut.v1_z_i.value = 0
        self.dut.v2_x_i.value = 0
        self.dut.v2_y_i.value = 0
        self.dut.v2_z_i.value = 0
        self.dut.color_i.value = 0
        self.dut.tile_x_i.value = 0
        self.dut.tile_y_i.value = 0
        
        # Wait 2 clock cycles
        await RisingEdge(self.dut.clk_i)
        await RisingEdge(self.dut.clk_i)
        
        # Release reset
        self.dut.rst_n_i.value = 1
        
        # Wait for DUT ready
        while self.dut.rdy_in_o.value != 1:
            await RisingEdge(self.dut.clk_i)
    
    async def capture_pixel_outputs(self):
        """Background task to capture pixel outputs when vld_o is high"""
        while True:
            await RisingEdge(self.dut.clk_i)
            
            # Check if valid output is present
            if hasattr(self.dut, 'vld_o') and self.dut.vld_o.value == 1:
                # Extract pixel data
                pixel_x = int(self.dut.pixel_x_o.value) if hasattr(self.dut, 'pixel_x_o') else 0
                pixel_y = int(self.dut.pixel_y_o.value) if hasattr(self.dut, 'pixel_y_o') else 0
                color = int(self.dut.color_o.value) if hasattr(self.dut, 'color_o') else 0
                
                pixel = PixelOutput(x=pixel_x, y=pixel_y, color=color)
                self.captured_pixels.append(pixel)
                self.current_test_pixels.append(pixel)
                
                cocotb.log.info(f"Captured pixel: x={pixel_x}, y={pixel_y}, color={color}")
    
    def clear_current_test_pixels(self):
        """Clear pixels captured for current test"""
        self.current_test_pixels = []
    
    def plot_pixels(self, pixels: List[PixelOutput], title: str = "Pixel Output", save_filename: str = None):
        """Create a visualization plot of the captured pixels and save to file"""
        if not pixels:
            cocotb.log.info("No pixels to plot")
            return
        
        # Generate filename if not provided
        if save_filename is None:
            save_filename = f"pixels_{title.lower().replace(' ', '_')}.png"
        
        save_path = os.path.join(self.output_dir, save_filename)
        
        # Extract coordinates and colors
        x_coords = [p.x for p in pixels]
        y_coords = [p.y for p in pixels]
        colors = [p.color for p in pixels]
        
        # Create figure
        plt.figure(figsize=(12, 8))
        
        # Create scatter plot
        if len(set(colors)) > 1:
            # Multiple colors - use colormap
            scatter = plt.scatter(x_coords, y_coords, c=colors, cmap='tab10', s=50, alpha=0.7)
            plt.colorbar(scatter, label='Color Value')
        else:
            # Single color
            plt.scatter(x_coords, y_coords, c='blue', s=50, alpha=0.7)
        
        # Set up the plot
        plt.xlabel('Pixel X')
        plt.ylabel('Pixel Y')
        plt.title(title)
        plt.grid(True, alpha=0.3)
        
        # Invert Y axis to match typical screen coordinates
        plt.gca().invert_yaxis()
        
        # Add pixel count info
        plt.text(0.02, 0.98, f'Total pixels: {len(pixels)}', 
                transform=plt.gca().transAxes, verticalalignment='top',
                bbox=dict(boxstyle='round', facecolor='white', alpha=0.8))
        
        # Show pixel coordinates as text for small datasets
        if len(pixels) <= 50:
            for i, pixel in enumerate(pixels):
                plt.annotate(f'({pixel.x},{pixel.y})', 
                           (pixel.x, pixel.y), 
                           xytext=(5, 5), textcoords='offset points',
                           fontsize=8, alpha=0.7)
        
        plt.tight_layout()
        plt.savefig(save_path, dpi=150, bbox_inches='tight')
        plt.close()  # Close figure to free memory
        
        cocotb.log.info(f"Plot saved to {save_path}")
        return save_path
    
    def plot_current_test(self, test_name: str):
        """Plot pixels from the current test"""
        self.test_counter += 1
        filename = f"test_{self.test_counter:02d}_{test_name.lower().replace(' ', '_')}.png"
        return self.plot_pixels(self.current_test_pixels, f"Pixels from {test_name}", filename)
    
    def create_pixel_grid_plot(self, pixels: List[PixelOutput], title: str = "Pixel Grid", 
                              grid_size: Tuple[int, int] = None, save_filename: str = None):
        """Create a grid-based visualization showing pixels as colored squares and save to file"""
        if not pixels:
            cocotb.log.info("No pixels to plot in grid")
            return
        
        # Generate filename if not provided
        if save_filename is None:
            save_filename = f"grid_{title.lower().replace(' ', '_')}.png"
        
        save_path = os.path.join(self.output_dir, save_filename)
        
        # Determine grid size if not provided
        if grid_size is None:
            max_x = max(p.x for p in pixels) + 1
            max_y = max(p.y for p in pixels) + 1
            grid_size = (max_x, max_y)
        
        # Create grid
        grid = np.zeros((grid_size[1], grid_size[0]))
        
        # Fill grid with pixel colors
        for pixel in pixels:
            if 0 <= pixel.x < grid_size[0] and 0 <= pixel.y < grid_size[1]:
                grid[pixel.y, pixel.x] = pixel.color
        
        # Create plot
        plt.figure(figsize=(12, 8))
        plt.imshow(grid, cmap='tab10', interpolation='nearest', aspect='equal')
        plt.colorbar(label='Color Value')
        plt.title(title)
        plt.xlabel('Pixel X')
        plt.ylabel('Pixel Y')
        
        # Add grid lines
        plt.grid(True, color='gray', linewidth=0.5, alpha=0.5)
        
        # Set tick marks
        plt.xticks(range(0, grid_size[0], max(1, grid_size[0]//20)))
        plt.yticks(range(0, grid_size[1], max(1, grid_size[1]//20)))
        
        plt.tight_layout()
        plt.savefig(save_path, dpi=150, bbox_inches='tight')
        plt.close()  # Close figure to free memory
        
        cocotb.log.info(f"Grid plot saved to {save_path}")
        return save_path
    
    def compare_expected_vs_actual(self, expected_pixels: List[PixelOutput], test_name: str = "Test"):
        """Compare expected vs actual pixel outputs"""
        actual_pixels = self.current_test_pixels
        
        # Convert to sets for comparison
        expected_set = set((p.x, p.y, p.color) for p in expected_pixels)
        actual_set = set((p.x, p.y, p.color) for p in actual_pixels)
        
        # Find differences
        missing_pixels = expected_set - actual_set
        extra_pixels = actual_set - expected_set
        common_pixels = expected_set & actual_set
        
        # Print comparison results
        cocotb.log.info(f"\n{test_name} - Expected vs Actual Comparison:")
        cocotb.log.info(f"Expected pixels: {len(expected_pixels)}")
        cocotb.log.info(f"Actual pixels: {len(actual_pixels)}")
        cocotb.log.info(f"Common pixels: {len(common_pixels)}")
        cocotb.log.info(f"Missing pixels: {len(missing_pixels)}")
        cocotb.log.info(f"Extra pixels: {len(extra_pixels)}")
        
        if missing_pixels:
            cocotb.log.info("Missing pixels (expected but not found):")
            for x, y, color in list(missing_pixels)[:10]:  # Show first 10
                cocotb.log.info(f"  ({x}, {y}, color={color})")
            if len(missing_pixels) > 10:
                cocotb.log.info(f"  ... and {len(missing_pixels) - 10} more")
        
        if extra_pixels:
            cocotb.log.info("Extra pixels (found but not expected):")
            for x, y, color in list(extra_pixels)[:10]:  # Show first 10
                cocotb.log.info(f"  ({x}, {y}, color={color})")
            if len(extra_pixels) > 10:
                cocotb.log.info(f"  ... and {len(extra_pixels) - 10} more")
        
        # Create comparison plot if there are differences
        if missing_pixels or extra_pixels:
            self.plot_pixel_comparison(expected_pixels, actual_pixels, test_name)
        
        return len(missing_pixels) == 0 and len(extra_pixels) == 0
    
    def plot_pixel_comparison(self, expected_pixels: List[PixelOutput], actual_pixels: List[PixelOutput], test_name: str):
        """Create a visual comparison plot of expected vs actual pixels and save to file"""
        save_path = os.path.join(self.output_dir, f"comparison_{test_name.lower().replace(' ', '_')}.png")
        
        fig, (ax1, ax2, ax3) = plt.subplots(1, 3, figsize=(18, 6))
        
        # Expected pixels
        if expected_pixels:
            exp_x = [p.x for p in expected_pixels]
            exp_y = [p.y for p in expected_pixels]
            exp_colors = [p.color for p in expected_pixels]
            ax1.scatter(exp_x, exp_y, c=exp_colors, cmap='tab10', s=50, alpha=0.7, marker='s')
        ax1.set_title(f'{test_name} - Expected Pixels')
        ax1.set_xlabel('X')
        ax1.set_ylabel('Y')
        ax1.grid(True, alpha=0.3)
        ax1.invert_yaxis()
        
        # Actual pixels
        if actual_pixels:
            act_x = [p.x for p in actual_pixels]
            act_y = [p.y for p in actual_pixels]
            act_colors = [p.color for p in actual_pixels]
            ax2.scatter(act_x, act_y, c=act_colors, cmap='tab10', s=50, alpha=0.7, marker='o')
        ax2.set_title(f'{test_name} - Actual Pixels')
        ax2.set_xlabel('X')
        ax2.set_ylabel('Y')
        ax2.grid(True, alpha=0.3)
        ax2.invert_yaxis()
        
        # Overlay comparison
        if expected_pixels:
            ax3.scatter(exp_x, exp_y, c='red', s=100, alpha=0.5, marker='s', label='Expected')
        if actual_pixels:
            ax3.scatter(act_x, act_y, c='blue', s=50, alpha=0.7, marker='o', label='Actual')
        ax3.set_title(f'{test_name} - Overlay Comparison')
        ax3.set_xlabel('X')
        ax3.set_ylabel('Y')
        ax3.grid(True, alpha=0.3)
        ax3.legend()
        ax3.invert_yaxis()
        
        plt.tight_layout()
        plt.savefig(save_path, dpi=150, bbox_inches='tight')
        plt.close()  # Close figure to free memory
        
        cocotb.log.info(f"Comparison plot saved to {save_path}")
        return save_path
    
    async def test_simple_triangle(self):
        """Test visualizing a single triangle"""
        cocotb.log.info("Running simple triangle test")
        self.clear_current_test_pixels()
        
        await self.run_triangle_test(
            self.make_coord(1, 1, 256),
            self.make_coord(1, 5, 256),
            self.make_coord(5, 1, 256),
            self.make_meta(4, 0, 0)
        )
        
        await self.flush(5, 5)
        
        # Plot the results
        self.plot_current_test("Simple Triangle")
    
    async def test_multi_tile(self):
        """Test triangles over multiple tiles"""
        cocotb.log.info("Running multi-tile test")
        self.clear_current_test_pixels()
        
        # Triangle 1
        await self.run_triangle_test(
            self.make_coord(1, 1, 256),
            self.make_coord(1, 5, 256),
            self.make_coord(5, 1, 256),
            self.make_meta(4, 0, 0)
        )
        
        # Triangle 2
        await self.run_triangle_test(
            self.make_coord(17, 1, 256),
            self.make_coord(17, 5, 1024),
            self.make_coord(21, 1, 256),
            self.make_meta(4, 1, 0)
        )
        
        # Triangle 3
        await self.run_triangle_test(
            self.make_coord(1, 17, 256),
            self.make_coord(1, 21, 1024),
            self.make_coord(5, 17, 256),
            self.make_meta(4, 0, 1)
        )
        
        await self.flush(5, 5)
        
        # Plot the results
        self.plot_current_test("Multi-tile Triangles")
        self.create_pixel_grid_plot(self.current_test_pixels, "Multi-tile Grid View")
    
    async def test_nested(self):
        """Test nested triangles"""
        cocotb.log.info("Running nested triangle test")
        self.clear_current_test_pixels()
        
        # Outer triangle
        await self.run_triangle_test(
            self.make_coord(1, 1, 256),
            self.make_coord(1, 15, 256),
            self.make_coord(15, 1, 256),
            self.make_meta(4, 0, 0)
        )
        
        # Inner triangle
        await self.run_triangle_test(
            self.make_coord(2, 2, 128),
            self.make_coord(2, 8, 128),
            self.make_coord(8, 2, 128),
            self.make_meta(3, 0, 0)
        )
        
        await self.flush(5, 5)
        
        # Plot the results
        self.plot_current_test("Nested Triangles")
    
    async def test_nested_backwards(self):
        """Test nested triangles, make sure doesn't overwrite"""
        cocotb.log.info("Running nested backwards test")
        self.clear_current_test_pixels()
        
        # Inner triangle first
        await self.run_triangle_test(
            self.make_coord(2, 2, 128),
            self.make_coord(2, 8, 128),
            self.make_coord(8, 2, 128),
            self.make_meta(3, 0, 0)
        )
        
        # Outer triangle
        await self.run_triangle_test(
            self.make_coord(1, 1, 256),
            self.make_coord(1, 15, 256),
            self.make_coord(15, 1, 256),
            self.make_meta(4, 0, 0)
        )
        
        await self.flush(5, 5)
        
        # Plot the results
        self.plot_current_test("Nested Backwards")
    
    async def test_cross_tile_triangle(self):
        """Test cross-tile triangle"""
        cocotb.log.info("Running cross-tile triangle test")
        self.clear_current_test_pixels()
        
        # Same triangle across different tiles
        triangles = [
            (1, 0, 0),
            (2, 1, 0),
            (3, 0, 1),
            (4, 1, 1)
        ]
        
        for color, tile_x, tile_y in triangles:
            await self.run_triangle_test(
                self.make_coord(0, 0, 256),
                self.make_coord(0, 31, 256),
                self.make_coord(31, 0, 256),
                self.make_meta(color, tile_x, tile_y)
            )
        
        await self.flush(5, 5)
        
        # Plot the results
        self.plot_current_test("Cross-tile Triangles")
        self.create_pixel_grid_plot(self.current_test_pixels, "Cross-tile Grid View", (64, 48))
    
    async def test_star_of_david(self):
        """Test two interlaced triangles"""
        cocotb.log.info("Running star of David test")
        self.clear_current_test_pixels()
        
        # First triangle
        await self.run_triangle_test(
            self.make_coord(0, 0, 256),
            self.make_coord(0, 15, 256),
            self.make_coord(15, 7, 0),
            self.make_meta(1, 0, 0)
        )
        
        # Second triangle
        await self.run_triangle_test(
            self.make_coord(15, 0, 256),
            self.make_coord(0, 7, 0),
            self.make_coord(15, 15, 256),
            self.make_meta(2, 0, 0)
        )
        
        await self.flush(5, 5)
        
        # Plot the results
        self.plot_current_test("Star of David")
        self.create_pixel_grid_plot(self.current_test_pixels, "Star of David Grid View")
        

    async def test_diamond_pattern(self):
        """Test diamond pattern made from 4 triangles across multiple tiles"""
        cocotb.log.info("Running diamond pattern test")
        self.clear_current_test_pixels()
        
        center_x, center_y = 31, 31  # Center at tile boundary
        size = 20
        
        # Top triangle
        await self.run_triangle_test(
            self.make_coord(center_x, center_y - size, 256),
            self.make_coord(center_x - size//2, center_y, 256),
            self.make_coord(center_x + size//2, center_y, 256),
            self.make_meta(1, 1, 0)
        )
        await self.run_triangle_test(
            self.make_coord(center_x, center_y - size, 256),
            self.make_coord(center_x - size//2, center_y, 256),
            self.make_coord(center_x + size//2, center_y, 256),
            self.make_meta(1, 1, 1)
        )
        await self.run_triangle_test(
            self.make_coord(center_x, center_y - size, 256),
            self.make_coord(center_x - size//2, center_y, 256),
            self.make_coord(center_x + size//2, center_y, 256),
            self.make_meta(1, 2, 0)
        )
        await self.run_triangle_test(
            self.make_coord(center_x, center_y - size, 256),
            self.make_coord(center_x - size//2, center_y, 256),
            self.make_coord(center_x + size//2, center_y, 256),
            self.make_meta(1, 2, 1)
        )
        
        await self.flush(5, 5)
        
        self.plot_current_test("Diamond Pattern")
        self.create_pixel_grid_plot(self.current_test_pixels, "Diamond Pattern Grid", (80, 80))


    async def test_checkerboard(self):
        """Test diamond pattern made from 4 triangles across multiple tiles"""
        cocotb.log.info("Running diamond pattern test")
        self.clear_current_test_pixels()

        start_x = 0
        start_y = 0
        
        for column in range(40):
            for row in range(30):
                start_x = column * 16
                start_y = row * 16

                row_parity = row % 2 == 0
                column_parity = column % 2 == 0

                color = 1 if row_parity ^ column_parity else 2

                # Top triangle
                await self.run_triangle_test(
                    self.make_coord(start_x, start_y, 256),
                    self.make_coord(start_x, start_y + 15, 256),
                    self.make_coord(start_x + 15, start_y, 256),
                    self.make_meta(color, column, row)
                )
                await self.run_triangle_test(
                    self.make_coord(start_x + 15, start_y + 15, 256),
                    self.make_coord(start_x + 15, start_y, 256),
                    self.make_coord(start_x, start_y + 15, 256),
                    self.make_meta(color, column, row)
                )
        
        await self.flush(5, 5)
        
        self.plot_current_test("Checkerboard Pattern")
        self.create_pixel_grid_plot(self.current_test_pixels, "Checkerboard Pattern Grid", (640, 480))
    

    async def flush(self, i: int, j: int):
        """Flush the pipeline"""
        await self.run_triangle_test(
            self.make_coord(0, 0, 128),
            self.make_coord(0, 1, 128),
            self.make_coord(1, 0, 128),
            self.make_meta(0, i & 0x3F, j & 0x1F)
        )

        self.dut.rdy_out_i.value = 1

        # Wait for ready signal
        while not (self.dut.rdy_in_o.value == 1 and self.dut.rdy_inter.value == 1 and self.dut.vld_o.value == 0):
            await RisingEdge(self.dut.clk_i)
        
        # Wait a few cycles
        for _ in range(5):
            await RisingEdge(self.dut.clk_i)
    

    async def run_triangle_test(self, tv0: Coord3D, tv1: Coord3D, tv2: Coord3D, tmeta: Metadata):
        """Run a triangle test with the given vertices and metadata"""
        
        cocotb.log.info("-" * 50)
        cocotb.log.info("Testing Points:")
        cocotb.log.info(f"v0: x={tv0.x >> 4}, y={tv0.y >> 4}, z={tv0.z >> 4}")
        cocotb.log.info(f"v1: x={tv1.x >> 4}, y={tv1.y >> 4}, z={tv1.z >> 4}")
        cocotb.log.info(f"v2: x={tv2.x >> 4}, y={tv2.y >> 4}, z={tv2.z >> 4}")
        cocotb.log.info(f"metadata: color={tmeta.color}, tile_x={tmeta.tile_x}, tile_y={tmeta.tile_y}")
        cocotb.log.info("-" * 50)
        
        # Wait until DUT is ready
        while self.dut.rdy_in_o.value != 1:
            await RisingEdge(self.dut.clk_i)
        
        # Set input values directly (no computation needed for raster module)
        self.dut.v0_x_i.value = tv0.x
        self.dut.v0_y_i.value = tv0.y
        self.dut.v0_z_i.value = tv0.z
        self.dut.v1_x_i.value = tv1.x
        self.dut.v1_y_i.value = tv1.y
        self.dut.v1_z_i.value = tv1.z
        self.dut.v2_x_i.value = tv2.x
        self.dut.v2_y_i.value = tv2.y
        self.dut.v2_z_i.value = tv2.z
        self.dut.color_i.value = tmeta.color
        self.dut.tile_x_i.value = tmeta.tile_x
        self.dut.tile_y_i.value = tmeta.tile_y
        
        # Start transaction
        await FallingEdge(self.dut.clk_i)
        self.dut.vld_i.value = 1
        self.dut.rdy_out_i.value = 1
        await FallingEdge(self.dut.clk_i)
        self.dut.vld_i.value = 0
        await FallingEdge(self.dut.clk_i)

        # Wait a few cycles
        for _ in range(5):
            await RisingEdge(self.dut.clk_i)
    
    def make_coord(self, x: int, y: int, z: int) -> Coord3D:
        """Create a coordinate with fixed-point scaling"""
        return Coord3D(
            x=x << FX_FRAC_BITS,
            y=y << FX_FRAC_BITS,
            z=z << FX_FRAC_BITS
        )
    
    def make_meta(self, color: int, tile_x: int, tile_y: int) -> Metadata:
        """Create metadata tuple"""
        return Metadata(color=color, tile_x=tile_x, tile_y=tile_y)


@cocotb.test()
async def test_raster(dut):
    """Main test function"""
    
    # Start clock
    clock = Clock(dut.clk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Create testbench instance
    tb = RasterTestbench(dut)
    
    # Start pixel capture task
    cocotb.start_soon(tb.capture_pixel_outputs())
    
    try:
        # Run all tests
        await tb.reset()
        await tb.test_simple_triangle()
        
        await tb.reset()
        await tb.test_multi_tile()
        
        await tb.reset()
        await tb.test_nested()
        
        await tb.reset()
        await tb.test_nested_backwards()
        
        await tb.reset()
        await tb.test_cross_tile_triangle()
        
        await tb.reset()
        await tb.test_star_of_david()

        await tb.reset()
        await tb.test_checkerboard()
        
        cocotb.log.info("All tests completed successfully!")
        
    except Exception as e:
        cocotb.log.error(f"Test failed with exception: {e}")
        raise


@cocotb.test()
async def test_individual_triangle_visualization(dut):
    """Test function focused on visualization of individual triangles"""
    
    # Start clock
    clock = Clock(dut.clk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Create testbench instance
    tb = RasterTestbench(dut)
    
    # Start pixel capture task
    cocotb.start_soon(tb.capture_pixel_outputs())
    
    try:
        # Test 1: Simple right triangle
        await tb.reset()
        tb.clear_current_test_pixels()
        
        await tb.run_triangle_test(
            tb.make_coord(2, 2, 256),
            tb.make_coord(2, 8, 256),
            tb.make_coord(8, 2, 256),
            tb.make_meta(1, 0, 0)
        )
        await tb.flush(5, 5)
        
        tb.plot_current_test("Right Triangle")
        tb.create_pixel_grid_plot(tb.current_test_pixels, "Right Triangle Grid", (16, 16))
        
        # Test 2: Isosceles triangle
        await tb.reset()
        tb.clear_current_test_pixels()
        
        await tb.run_triangle_test(
            tb.make_coord(8, 2, 256),
            tb.make_coord(4, 10, 256),
            tb.make_coord(12, 10, 256),
            tb.make_meta(2, 0, 0)
        )
        await tb.flush(5, 5)
        
        tb.plot_current_test("Isosceles Triangle")
        tb.create_pixel_grid_plot(tb.current_test_pixels, "Isosceles Triangle Grid", (16, 16))
        
        # Test 3: Large triangle spanning multiple tiles
        await tb.reset()
        tb.clear_current_test_pixels()
        
        # Triangle spanning 4 tiles
        for tile_x in range(2):
            for tile_y in range(2):
                await tb.run_triangle_test(
                    tb.make_coord(0, 0, 256),
                    tb.make_coord(0, 31, 256),
                    tb.make_coord(31, 31, 256),
                    tb.make_meta(3 + tile_x + tile_y, tile_x, tile_y)
                )
        
        await tb.flush(5, 5)
        
        tb.plot_current_test("Large Multi-tile Triangle")
        tb.create_pixel_grid_plot(tb.current_test_pixels, "Large Triangle Grid", (64, 64))
        
        cocotb.log.info("Visualization tests completed successfully!")
        
    except Exception as e:
        cocotb.log.error(f"Visualization test failed with exception: {e}")
        raise