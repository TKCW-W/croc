`timescale 1ns/1ps
`include "common_cells/registers.svh"
`include "croc_pkg.sv"       
//`include "common_cells/cf_math_pkg.sv"

module tb_user_prng;

  import croc_pkg::*;               

  localparam CLK_PERIOD = 10;
  localparam int W = 16;
  localparam logic [W-1:0] RESET_SEED = 16'hACE1;
  localparam logic [W-1:0] TAPS       = 16'hB400;

  // Clock and reset
  logic clk;
  logic rst_n;

  // Use correct platform-defined OBI struct types
  sbr_obi_req_t obi_req_i;
  sbr_obi_rsp_t obi_rsp_o;

  // Instantiate DUT with parameterized OBI types
  user_prng #(
    .ObiCfg(SbrObiCfg),
    .obi_req_t(sbr_obi_req_t),
    .obi_rsp_t(sbr_obi_rsp_t),
    .W(W)
  ) dut (
    .clk_i(clk),
    .rst_ni(rst_n),
    .obi_req_i(obi_req_i),
    .obi_rsp_o(obi_rsp_o)
  );

  // Clock generation
  initial clk = 0;
  always #(CLK_PERIOD/2) clk = ~clk;

  // OBI write task
  task automatic obi_write(input [31:0] addr, input [31:0] data);
    begin
      obi_req_i.a.addr  = addr;
      obi_req_i.a.we    = 1;
      obi_req_i.a.be    = 4'b0011; //TODO: maybe better to use 1111?
      obi_req_i.a.wdata = data;
      obi_req_i.req     = 1;
      @(posedge clk);
      obi_req_i.req = 0;
    end
  endtask

  // OBI read task
  task automatic obi_read(input [31:0] addr);
    begin
      obi_req_i.a.addr  = addr;
      obi_req_i.a.we    = 0;
      obi_req_i.a.be    = 4'b0011; //TODO: maybe better to use 1111?
      obi_req_i.a.wdata = 32'h00000000;
      obi_req_i.req     = 1;
      @(posedge clk);
      obi_req_i.req = 0;
    end
  endtask

  // Golden model function
  function [W-1:0] lfsr_step(input [W-1:0] state);
    logic feedback;
    feedback = ^(state & TAPS);  // XOR reduction
    lfsr_step = {state[W-2:0], feedback};
  endfunction

  logic [15:0] golden;
  // Simulation
  initial begin
    $dumpfile("tb_user_prng_golden.vcd");
    $dumpvars(0, tb_user_prng_golden);

    rst_n = 0;
    obi_req_i = '{default:0};
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Write seed (0xACE1)
    obi_write(32'h04, 32'h0000ACE1);
    @(posedge clk);

    // Enable LFSR
    obi_write(32'h00, 32'h00000001);
    @(posedge clk);

    // Initialize golden model
    golden = RESET_SEED;

    // Compare 10 PRNG values
    for (int i = 0; i < 10; i++) begin
      obi_read(32'h08);
      @(posedge clk);

      if (obi_rsp_o.r.rdata[W-1:0] !== golden) begin
        $fatal(1, "Mismatch at cycle %0d: Expected %h, Got %h", i, golden, obi_rsp_o.r.rdata[W-1:0]);
      end else begin
        $display("Cycle %0d: Match - %h", i, golden);
      end

      golden = lfsr_step(golden);
    end

    $display("✅ Test passed: All outputs match golden model.");
    $finish;
  end

endmodule
