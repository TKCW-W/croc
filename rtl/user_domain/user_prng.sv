//Implementing a pseudo random number generator using LFSR approach
//Goal is to implement a seed-configurable LFSR with 16 bits
//TODO1: implement a basic 16 bit LFSR with enable bit                                                  √
//TODO2: configurable seed                                                                              √
//TODO3: modify user_pkg.sv to update address map and address range, addr_decode and demux ...
//TODO4: update bender.yml to include new files

//Gives the FF macro to have properly defined flipflops
`include "common_cells/registers.svh"

module user_prng #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
  /// The request struct.
  parameter type                         obi_req_t   = logic,
  /// The response struct.
  parameter type                         obi_rsp_t   = logic,
  ///The LFSR width.
  parameter int                          W           = 16,
  ///The LFSR feedback polynomial mask.
  parameter logic[W-1:0]                 TAPS        = 16'hB400,
  ///The LFSR initial and reset seed.
  parameter logic[W-1:0]                 RESET_SEED  = 16'hACE1
) (
  /// Clock
  input  logic clk_i,
  /// Active-low reset
  input  logic rst_ni,

  /// OBI request interface
  input  obi_req_t obi_req_i,
  /// OBI response interface
  output obi_rsp_t obi_rsp_o
);

  logic [W-1:0] lfsr_reg_q, lfsr_reg_d;
  logic [W-1:0] seed_q, seed_d;
  logic         enable_q, enable_d;
  logic         obi_err;
  
  logic [1:0]   addr_idx;
  logic feedback;

  assign addr_idx = obi_req_i.a.addr[3:2];
  assign feedback = ^(lfsr_reg_q & TAPS);

  assign obi_rsp_o.gnt = obi_req_i.req;

  //Response phase 
  always_comb begin
    obi_rsp_o.rvalid = 1'b0;
    obi_rsp_o.r.rdata  = 32'h00000000;
    obi_rsp_o.r.err    = 1'b0;

    if (obi_req_i.req) begin
      if (obi_req_i.a.we) begin
        // === WRITE access ===
        case (addr_idx)
          2'b00: ; // enabling the LFSR(handled below)
          2'b01: ; //setting new seed (handled below)
          default: obi_rsp_o.r.err = 1'b1; // write to invalid address
        endcase
      end else begin
        // === READ access ===
        if (addr_idx == 2'b10) begin
          obi_rsp_o.rvalid = 1'b1;
          obi_rsp_o.r.rid = obi_req_i.a.aid;
          obi_rsp_o.r.r_optional = '0;
          obi_rsp_o.rdata  = { {(32-W){1'b0}}, lfsr_reg_q };
        end else begin
          obi_rsp_o.r.err = 1'b1;  // read from invalid/unsupported register
        end
      end
    end
  end

  // Next-state logic
  always_comb begin
    lfsr_reg_d = lfsr_reg_q;
    seed_d = seed_q;
    enable_d   = enable_q;

    if (obi_req_i.req && obi_req_i.we) begin
      case (addr_idx)
        2'b00: enable_d = obi_req_i.a.wdata[0];             // control
        2'b01: begin                                       // seed
          seed_d = obi_req_i.a.wdata[W-1:0];
          lfsr_reg_d = obi_req_i.a.wdata[W-1:0];
        end
        default: ; // no action for invalid address
      endcase
    end else if (enable_q) begin
      lfsr_reg_d = {lfsr_reg_q[W-2:0], feedback};  // shift left
    end
  end

  //Sequential logic
  `FF(enable_q, enable_d, '0, clk_i, rst_ni)
  `FF(seed_q, seed_d, RESET_SEED, clk_i, rst_ni)
  `FF(lfsr_reg_q, lfsr_reg_d, RESET_SEED, clk_i, rst_ni)



endmodule