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
class LongCoord3D:
    """Long precision coordinate for calculations"""
    x: int
    y: int
    z: int


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


class PixelTestbench:
    """CocoTB testbench for pixel processor"""
    
    def __init__(self, dut):
        self.dut = dut
        self.captured_pixels = []  # Store all captured pixels
        self.current_test_pixels = []  # Store pixels for current test
        self.output_dir = "pixel_processor_plots"  # Directory for saving plots
        self.test_counter = 0  # Counter for unique test names
        
        # Create output directory if it doesn't exist
        os.makedirs(self.output_dir, exist_ok=True)
        
    async def reset(self):
        """Reset the DUT and initialize signals"""
        # Initialize signals
        self.dut.rst_n_i.value = 0
        self.dut.rdy_out_i.value = 0
        self.dut.vld_i.value = 0
        self.dut.abs_pos_x_i.value = 0
        self.dut.abs_pos_y_i.value = 0
        self.dut.delta_0_x_i.value = 0
        self.dut.delta_0_y_i.value = 0
        self.dut.delta_1_x_i.value = 0
        self.dut.delta_1_y_i.value = 0
        self.dut.delta_2_x_i.value = 0
        self.dut.delta_2_y_i.value = 0
        self.dut.edge_0_i.value = 0
        self.dut.edge_1_i.value = 0
        self.dut.edge_2_i.value = 0
        self.dut.color_i.value = 0
        self.dut.tile_x_i.value = 0
        self.dut.tile_y_i.value = 0
        self.dut.dzdx_i.value = 0
        self.dut.dzdy_i.value = 0
        self.dut.z_i.value = 0
        
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
            self.make_coord(2, 0, 256),
            self.make_coord(2, 15, 256),
            self.make_coord(15, 7, 0),
            self.make_meta(1, 0, 0)
        )
        
        # Second triangle
        await self.run_triangle_test(
            self.make_coord(13, 0, 256),
            self.make_coord(0, 7, 0),
            self.make_coord(13, 15, 256),
            self.make_meta(2, 0, 0)
        )
        
        await self.flush(5, 5)
        
        # Plot the results
        self.plot_current_test("Star of David")
        self.create_pixel_grid_plot(self.current_test_pixels, "Star of David Grid View")


    async def test_star_of_david_with_stalls(self):
        """Test two interlaced triangles"""
        cocotb.log.info("Running star of David test")
        self.clear_current_test_pixels()
        
        # First triangle
        await self.run_triangle_test_with_stalls(
            self.make_coord(2, 0, 256),
            self.make_coord(2, 15, 256),
            self.make_coord(15, 7, 0),
            self.make_meta(1, 0, 0)
        )
        
        # Second triangle
        await self.run_triangle_test_with_stalls(
            self.make_coord(13, 0, 256),
            self.make_coord(0, 7, 0),
            self.make_coord(13, 15, 256),
            self.make_meta(2, 0, 0)
        )
        
        await self.run_triangle_test_with_stalls(
            self.make_coord(0, 0, 128),
            self.make_coord(0, 1, 128),
            self.make_coord(1, 0, 128),
            self.make_meta(0, 5, 5)
        )
        
        # Plot the results
        self.plot_current_test("Star of David with Stalls")
        self.create_pixel_grid_plot(self.current_test_pixels, "Star of David with Stalls Grid View")
    

    async def flush(self, i: int, j: int):
        """Flush the pipeline"""
        await self.run_triangle_test(
            self.make_coord(0, 0, 128),
            self.make_coord(0, 1, 128),
            self.make_coord(1, 0, 128),
            self.make_meta(0, i & 0x3F, j & 0x1F)
        )
    
    async def run_triangle_test(self, tv0: Coord3D, tv1: Coord3D, tv2: Coord3D, tmeta: Metadata):
        """Run a triangle test with the given vertices and metadata"""
        
        cocotb.log.info("-" * 50)
        cocotb.log.info("Testing Points:")
        cocotb.log.info(f"v0: x={tv0.x >> 4}, y={tv0.y >> 4}, z={tv0.z >> 4}")
        cocotb.log.info(f"v1: x={tv1.x >> 4}, y={tv1.y >> 4}, z={tv1.z >> 4}")
        cocotb.log.info(f"v2: x={tv2.x >> 4}, y={tv2.y >> 4}, z={tv2.z >> 4}")
        cocotb.log.info(f"metadata: color={tmeta.color}, tile_x={tmeta.tile_x}, tile_y={tmeta.tile_y}")
        cocotb.log.info("-" * 50)
        
        # Compute expected outputs
        expected = self.simulate_expected_output(tv0, tv1, tv2, tmeta)
        
        # Wait until DUT is ready
        while self.dut.rdy_in_o.value != 1:
            await RisingEdge(self.dut.clk_i)
        
        # Set input values
        self.dut.abs_pos_x_i.value = expected['abs_pos'].x
        self.dut.abs_pos_y_i.value = expected['abs_pos'].y
        self.dut.delta_0_x_i.value = expected['deltas'][0].x
        self.dut.delta_0_y_i.value = expected['deltas'][0].y
        self.dut.delta_1_x_i.value = expected['deltas'][1].x
        self.dut.delta_1_y_i.value = expected['deltas'][1].y
        self.dut.delta_2_x_i.value = expected['deltas'][2].x
        self.dut.delta_2_y_i.value = expected['deltas'][2].y
        self.dut.edge_0_i.value = expected['edges'][0]
        self.dut.edge_1_i.value = expected['edges'][1]
        self.dut.edge_2_i.value = expected['edges'][2]
        self.dut.color_i.value = expected['metadata'].color
        self.dut.tile_x_i.value = expected['metadata'].tile_x
        self.dut.tile_y_i.value = expected['metadata'].tile_y
        self.dut.dzdx_i.value = expected['dzdx']
        self.dut.dzdy_i.value = expected['dzdy']
        self.dut.z_i.value = expected['z_current']
        
        # Start transaction
        await FallingEdge(self.dut.clk_i)
        self.dut.vld_i.value = 1
        self.dut.rdy_out_i.value = 1
        await FallingEdge(self.dut.clk_i)
        self.dut.vld_i.value = 0
        await FallingEdge(self.dut.clk_i)
        
        # Wait for ready signal
        while self.dut.rdy_in_o.value != 1:
            await RisingEdge(self.dut.clk_i)
        
        # Wait for valid output if present
        if hasattr(self.dut, 'vld_o') and self.dut.vld_o.value == 1:
            while self.dut.vld_o.value == 1:
                await RisingEdge(self.dut.clk_i)
        
        self.dut.rdy_out_i.value = 0
        
        # Wait a few cycles
        for _ in range(5):
            await RisingEdge(self.dut.clk_i)
    

    async def run_triangle_test_with_stalls(self, tv0: Coord3D, tv1: Coord3D, tv2: Coord3D, tmeta: Metadata):
        """Run a triangle test with the given vertices and metadata"""
        
        cocotb.log.info("-" * 50)
        cocotb.log.info("Testing Points:")
        cocotb.log.info(f"v0: x={tv0.x >> 4}, y={tv0.y >> 4}, z={tv0.z >> 4}")
        cocotb.log.info(f"v1: x={tv1.x >> 4}, y={tv1.y >> 4}, z={tv1.z >> 4}")
        cocotb.log.info(f"v2: x={tv2.x >> 4}, y={tv2.y >> 4}, z={tv2.z >> 4}")
        cocotb.log.info(f"metadata: color={tmeta.color}, tile_x={tmeta.tile_x}, tile_y={tmeta.tile_y}")
        cocotb.log.info("-" * 50)
        
        # Compute expected outputs
        expected = self.simulate_expected_output(tv0, tv1, tv2, tmeta)
        
        # Wait until DUT is ready
        while self.dut.rdy_in_o.value != 1:
            await RisingEdge(self.dut.clk_i)
        
        # Set input values
        self.dut.abs_pos_x_i.value = expected['abs_pos'].x
        self.dut.abs_pos_y_i.value = expected['abs_pos'].y
        self.dut.delta_0_x_i.value = expected['deltas'][0].x
        self.dut.delta_0_y_i.value = expected['deltas'][0].y
        self.dut.delta_1_x_i.value = expected['deltas'][1].x
        self.dut.delta_1_y_i.value = expected['deltas'][1].y
        self.dut.delta_2_x_i.value = expected['deltas'][2].x
        self.dut.delta_2_y_i.value = expected['deltas'][2].y
        self.dut.edge_0_i.value = expected['edges'][0]
        self.dut.edge_1_i.value = expected['edges'][1]
        self.dut.edge_2_i.value = expected['edges'][2]
        self.dut.color_i.value = expected['metadata'].color
        self.dut.tile_x_i.value = expected['metadata'].tile_x
        self.dut.tile_y_i.value = expected['metadata'].tile_y
        self.dut.dzdx_i.value = expected['dzdx']
        self.dut.dzdy_i.value = expected['dzdy']
        self.dut.z_i.value = expected['z_current']
        
        # Start transaction
        await FallingEdge(self.dut.clk_i)
        self.dut.vld_i.value = 1
        self.dut.rdy_out_i.value = 1
        await FallingEdge(self.dut.clk_i)
        self.dut.vld_i.value = 0
        await FallingEdge(self.dut.clk_i)
        
        # Wait for valid output if present
        if hasattr(self.dut, 'vld_o') and self.dut.vld_o.value == 1:
            i = 0
            while self.dut.rdy_in_o.value != 1:
                if i % 5 == 0:
                    self.dut.rdy_out_i.value = 1 if self.dut.rdy_out_i.value == 0 else 0
                i += 1
                await RisingEdge(self.dut.clk_i)
        
        self.dut.rdy_out_i.value = 0
        
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
    
    def coord3d_to_long_coords(self, coord: Coord3D) -> LongCoord3D:
        """Convert coordinate to long precision with sign extension"""
        def sign_extend(value, bits):
            sign_bit = 1 << (bits - 1)
            if value & sign_bit:
                return value | (-1 << bits)
            return value
        
        x_extended = sign_extend(coord.x, FX_TOTAL_BITS)
        y_extended = sign_extend(coord.y, FX_TOTAL_BITS)
        z_extended = sign_extend(coord.z, FX_TOTAL_BITS)
        
        return LongCoord3D(x=x_extended, y=y_extended, z=z_extended)
    
    def simulate_expected_output(self, gv0: Coord3D, gv1: Coord3D, gv2: Coord3D, gmeta: Metadata) -> dict:
        """Compute all expected outputs for a triangle"""
        
        # Convert to long coordinates
        v = [
            self.coord3d_to_long_coords(gv0),
            self.coord3d_to_long_coords(gv1),
            self.coord3d_to_long_coords(gv2)
        ]
        
        # Rotated vertices (v1, v2, v0)
        rotated_v = [v[1], v[2], v[0]]
        
        # Step 1: Calculate absolute position (tile to pixel coordinates)
        abs_pos_x = (gmeta.tile_x << (TILE_WIDTH_BITS + FX_FRAC_BITS))
        abs_pos_y = (gmeta.tile_y << (TILE_WIDTH_BITS + FX_FRAC_BITS))
        abs_pos = Coord3D(x=abs_pos_x, y=abs_pos_y, z=0)
        
        abs_pos_long = LongCoord3D(x=abs_pos_x, y=abs_pos_y, z=0)
        
        # Step 2: Compute deltas between vertices (in clockwise order)
        deltas = []
        for i in range(NUM_VERTICES):
            delta_x = rotated_v[i].x - v[i].x
            delta_y = rotated_v[i].y - v[i].y
            delta_z = rotated_v[i].z - v[i].z
            deltas.append(Coord3D(
                x=delta_x & ((1 << FX_TOTAL_BITS) - 1),
                y=delta_y & ((1 << FX_TOTAL_BITS) - 1),
                z=delta_z & ((1 << FX_TOTAL_BITS) - 1)
            ))
        
        # Step 3: Compute edge values
        edges = []
        for i in range(NUM_VERTICES):
            delta = LongCoord3D(
                x=deltas[i].x if deltas[i].x < (1 << (FX_TOTAL_BITS-1)) else deltas[i].x - (1 << FX_TOTAL_BITS),
                y=deltas[i].y if deltas[i].y < (1 << (FX_TOTAL_BITS-1)) else deltas[i].y - (1 << FX_TOTAL_BITS),
                z=deltas[i].z if deltas[i].z < (1 << (FX_TOTAL_BITS-1)) else deltas[i].z - (1 << FX_TOTAL_BITS)
            )
            
            x_sub = abs_pos_long.x - v[i].x
            y_sub = abs_pos_long.y - v[i].y
            
            x_mult = x_sub * delta.y
            y_mult = y_sub * delta.x
            
            edge = x_mult - y_mult
            edges.append(edge & ((1 << (FX_TOTAL_BITS * 2)) - 1))
        
        # Step 4: Compute plane coefficients
        delta0 = LongCoord3D(
            x=deltas[0].x if deltas[0].x < (1 << (FX_TOTAL_BITS-1)) else deltas[0].x - (1 << FX_TOTAL_BITS),
            y=deltas[0].y if deltas[0].y < (1 << (FX_TOTAL_BITS-1)) else deltas[0].y - (1 << FX_TOTAL_BITS),
            z=deltas[0].z if deltas[0].z < (1 << (FX_TOTAL_BITS-1)) else deltas[0].z - (1 << FX_TOTAL_BITS)
        )
        
        delta2 = LongCoord3D(
            x=deltas[2].x if deltas[2].x < (1 << (FX_TOTAL_BITS-1)) else deltas[2].x - (1 << FX_TOTAL_BITS),
            y=deltas[2].y if deltas[2].y < (1 << (FX_TOTAL_BITS-1)) else deltas[2].y - (1 << FX_TOTAL_BITS),
            z=deltas[2].z if deltas[2].z < (1 << (FX_TOTAL_BITS-1)) else deltas[2].z - (1 << FX_TOTAL_BITS)
        )
        
        # Coefficient A = y0*z2 - z0*y2
        coeff_A = delta0.y * delta2.z - delta0.z * delta2.y
        
        # Coefficient B = z0*x2 - x0*z2  
        coeff_B = delta0.z * delta2.x - delta0.x * delta2.z
        
        # Coefficient C = x0*y2 - y0*x2
        coeff_C = delta0.x * delta2.y - delta0.y * delta2.x
        
        # Step 5: Calculate dz/dx and dz/dy
        if coeff_C != 0:
            dzdx = -(coeff_A << (FX_FRAC_BITS * 2)) // coeff_C
            dzdy = -(coeff_B << (FX_FRAC_BITS * 2)) // coeff_C
        else:
            dzdx = 0
            dzdy = 0
        
        # Step 6: Compute initial z value
        delta_x = v[0].x - abs_pos_long.x
        delta_y = v[0].y - abs_pos_long.y
        
        cocotb.log.info(f"delta_x_abs_to_v0: {delta_x >> 4}, delta_y_abs_to_v0: {delta_y >> 4}")
        cocotb.log.info(f"exp_dzdx: {dzdx >> 8}, exp_dzdy: {dzdy >> 8}")
        
        x_component = (delta_x << FX_FRAC_BITS) * dzdx
        y_component = (delta_y << FX_FRAC_BITS) * dzdy
        
        cocotb.log.info(f"x_component: {x_component >> 16}, y_component: {y_component >> 16}")
        
        z_component = v[0].z << (FX_FRAC_BITS * 3)
        
        cocotb.log.info(f"z_component: {z_component >> 16}")
        
        temp_z = z_component - x_component - y_component
        z_current = (temp_z >> (FX_FRAC_BITS * 2)) & ((1 << (FX_TOTAL_BITS * 2)) - 1)
        
        return {
            'abs_pos': abs_pos,
            'deltas': deltas,
            'edges': edges,
            'metadata': gmeta,
            'dzdx': dzdx & ((1 << (FX_TOTAL_BITS * 2)) - 1),
            'dzdy': dzdy & ((1 << (FX_TOTAL_BITS * 2)) - 1),
            'z_current': z_current,
            'coeff_A': coeff_A & ((1 << (FX_TOTAL_BITS * 2)) - 1),
            'coeff_B': coeff_B & ((1 << (FX_TOTAL_BITS * 2)) - 1),
            'coeff_C': coeff_C & ((1 << (FX_TOTAL_BITS * 2)) - 1)
        }


@cocotb.test()
async def test_pixel_processor(dut):
    """Main test function"""
    
    # Start clock
    clock = Clock(dut.clk_i, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Create testbench instance
    tb = PixelTestbench(dut)
    
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
        await tb.test_star_of_david_with_stalls()
        
    
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
    tb = PixelTestbench(dut)
    
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