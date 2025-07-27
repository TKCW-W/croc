`timescale 1ns/1ps
`include "common_cells/registers.svh"
`include "obi/obi_pkg.sv"
//`include "common_cells/cf_math_pkg.sv"

module tb_user_prng;

  localparam CLK_PERIOD = 10;
  localparam int W = 16;

  logic clk;
  logic rst_n;

  // OBI request and response structs
  typedef struct packed {
    logic [31:0] addr;
    logic        we;
    logic [3:0]  be;
    logic [31:0] wdata;
    logic [4:0]  aid;
    logic        a_optional;
  } a_chan_t;

  typedef struct packed {
    a_chan_t a;
    logic    req;
  } obi_req_t;

  typedef struct packed {
    logic [31:0] rdata;
    logic [4:0]  rid;
    logic        err;
    logic        r_optional;
  } r_chan_t;

  typedef struct packed {
    r_chan_t r;
    logic    gnt;
    logic    rvalid;
  } obi_rsp_t;

  obi_req_t obi_req_i;
  obi_rsp_t obi_rsp_o;

  // Instantiate DUT
  user_prng #(
    .obi_req_t(obi_req_t),
    .obi_rsp_t(obi_rsp_t),
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
      obi_req_i.a.be    = 4'b1111;
      obi_req_i.a.wdata = data;
      obi_req_i.a.aid   = 0;
      obi_req_i.a.a_optional = 0;
      obi_req_i.req     = 1;
      @(posedge clk);
      obi_req_i.req     = 0;
      @(posedge clk); // allow DUT to latch write
    end
  endtask

  // OBI read task
  task automatic obi_read(input [31:0] addr, output [31:0] data);
    begin
      obi_req_i.a.addr  = addr;
      obi_req_i.a.we    = 0;
      obi_req_i.a.be    = 4'b1111;
      obi_req_i.a.wdata = 0;
      obi_req_i.a.aid   = 0;
      obi_req_i.a.a_optional = 0;
      obi_req_i.req     = 1;
      @(posedge clk);
      obi_req_i.req     = 0;
      data = obi_rsp_o.r.rdata;
    end
  endtask

  // Simulation
  logic [31:0] initial_rdata;
  initial begin
    $display("⏳ Starting PRNG output dump...");
    $dumpfile("tb_user_prng.vcd");
    $dumpvars(0, tb_user_prng);

    rst_n = 0;
    obi_req_i = '{default:0};
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Write seed = 0xACE1
    obi_write(32'h04, 32'h0000ACE1);

    // Wait 2 FULL clock cycles (to avoid seed/enable conflict)
    repeat (2) @(posedge clk);

    // Read LFSR before enabling to confirm ACE1
    obi_read(32'h08, initial_rdata);
    $display("Cycle -1: LFSR initial output = %h", initial_rdata[W-1:0]);

    // Now write ctrl = 1 (enable)
    obi_write(32'h00, 32'h00000001);

    $display("DUT LFSR: %h", dut.lfsr_reg_q);
    // $monitor("t=%0t | lfsr_q=%h | req=%b we=%b addr=%h data=%h gnt=%b",
    //         $time, dut.lfsr_reg_q,
    //         obi_req_i.req, obi_req_i.a.we, obi_req_i.a.addr, obi_req_i.a.wdata,
    //         obi_rsp_o.gnt);

    // Dump 30 LFSR outputs
    for (int i = 0; i < 30; i++) begin
      logic [31:0] rdata;
      obi_read(32'h08, rdata);
      $display("Cycle %2d: LFSR output = %h", i, rdata[W-1:0]);
    end

    $finish;
  end

endmodule
