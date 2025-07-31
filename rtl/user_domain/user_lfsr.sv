`include "common_cells/registers.svh"


module user_lfsr #(
  parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
  parameter type                         obi_req_t   = logic,
  parameter type                         obi_rsp_t   = logic,
  parameter int                          W           = 16,
  parameter logic[W-1:0]                 TAPS        = 16'hB400,
  parameter logic[W-1:0]                 RESET_SEED  = 16'hACE1
) (
  input  logic clk_i,
  input  logic rst_ni,

  // OBI interface
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);

  // Internal registers
  logic [W-1:0] lfsr_reg_q, lfsr_reg_d;
  logic [W-1:0] seed_q, seed_d;
  logic         enable_q, enable_d;

  // Latched OBI request signals
  logic req_q, req_d;
  logic we_q, we_d;
  logic [ObiCfg.AddrWidth-1:0] addr_q, addr_d;
  logic [ObiCfg.IdWidth-1:0]    id_q, id_d;
  logic [ObiCfg.DataWidth-1:0]  wdata_q, wdata_d;

  // Response signals
  logic [ObiCfg.DataWidth-1:0] rsp_data;
  logic rsp_err;

  logic [1:0] addr_idx;
  logic feedback;

  assign addr_idx = addr_q[3:2];
  assign feedback = ^(lfsr_reg_q & TAPS);

  // === Latch the incoming request ===
  assign req_d   = obi_req_i.req;
  assign we_d    = obi_req_i.a.we;
  assign addr_d  = obi_req_i.a.addr;
  assign id_d    = obi_req_i.a.aid;
  assign wdata_d = obi_req_i.a.wdata;

  `FF(req_q, req_d, '0)
  `FF(we_q, we_d, '0)
  `FF(addr_q, addr_d, '0)
  `FF(id_q, id_d, '0)
  `FF(wdata_q, wdata_d, '0)

  // === OBI Response Data Logic ===
  always_comb begin
    rsp_data = '0;
    rsp_err  = 1'b0;

    // Default next state
    lfsr_reg_d = lfsr_reg_q;
    seed_d     = seed_q;
    enable_d   = enable_q;

    if (req_q) begin
      case (addr_idx)
        2'b00: begin
          if (we_q) enable_d = wdata_q[0];
          else rsp_err = 1'b1;
        end
        2'b01: begin
          if (we_q) begin
            seed_d     = wdata_q[W-1:0];
            lfsr_reg_d = wdata_q[W-1:0];
          end else rsp_err = 1'b1;
        end
        2'b10: begin
          if (!we_q)
            rsp_data = { {(32-W){1'b0}}, lfsr_reg_q };
          else rsp_err = 1'b1;
        end
        default: rsp_err = 1'b1;
      endcase
    end

  // Advance LFSR only when enabled *and* not seeding right now
    if (enable_q && !(we_q && addr_idx==2'b01)) begin
      lfsr_reg_d = {lfsr_reg_q[W-2:0], feedback};
    end
  end
  // === OBI Response Channel ===
  assign obi_rsp_o.gnt            = obi_req_i.req;
  assign obi_rsp_o.rvalid         = req_q;       // Valid response for last request
  assign obi_rsp_o.r.rdata        = rsp_data;
  assign obi_rsp_o.r.rid          = id_q;
  assign obi_rsp_o.r.err          = rsp_err;
  assign obi_rsp_o.r.r_optional   = '0;

  // === Sequential registers ===
  `FF(enable_q, enable_d, '0, clk_i, rst_ni)
  `FF(seed_q, seed_d, RESET_SEED, clk_i, rst_ni)
  `FF(lfsr_reg_q, lfsr_reg_d, RESET_SEED, clk_i, rst_ni)

endmodule