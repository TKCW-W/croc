//Implementing a pseudo random number generator using LFSR approach
//Goal is to implement a seed-configurable LFSR with 16 bits
//TODO1: implement a basic 16 bit LFSR with enable bit                                                  √
//TODO2: configurable seed                                                                              √
//TODO3: modify user_pkg.sv to update address map and address range, addr_decode and demux ...
//TODO4: update bender.yml to include new files

//Gives the FF macro to have properly defined flipflops
`include "common_cells/registers.svh"
`include "obi/obi_pkg.sv"

module user_prng #(
  parameter obi_pkg::obi_cfg_t ObiCfg    = obi_pkg::ObiDefaultConfig,
  parameter type               obi_req_t = logic,
  parameter type               obi_rsp_t = logic,
  parameter int                W         = 16
) (
  input  logic     clk_i,
  input  logic     rst_ni,
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);

  // Internal registers
  logic [W-1:0] lfsr_reg_q, lfsr_reg_d;
  logic [W-1:0] ctrl_reg;

  // Decoded signals
  logic write_enable;
  logic seed_write;
  logic ctrl_write;
  logic enable;

  assign write_enable = obi_req_i.req && obi_req_i.a.we;
  assign seed_write   = write_enable && (obi_req_i.a.addr == 32'h04);
  assign ctrl_write   = write_enable && (obi_req_i.a.addr == 32'h00);

  // Control register (bit 0 = enable)
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      ctrl_reg <= '0;
    else if (ctrl_write)
      ctrl_reg <= obi_req_i.a.wdata[W-1:0];
  end

  assign enable = ctrl_reg[0];

  // LFSR logic
  always_comb begin
    if (seed_write)
      lfsr_reg_d = obi_req_i.a.wdata[W-1:0];
    else if (enable && !seed_write)
      lfsr_reg_d = {lfsr_reg_q[W-2:0], ^(lfsr_reg_q & 16'hB400)};
    else if (!seed_write) 
      lfsr_reg_d = lfsr_reg_q;
  end

always_ff @(posedge clk_i or negedge rst_ni) begin
  if (!rst_ni)
    lfsr_reg_q <= 16'hACE1;
  else if (seed_write)
    lfsr_reg_q <= obi_req_i.a.wdata[W-1:0];  // seed write takes priority
  else if (enable)
    lfsr_reg_q <= {lfsr_reg_q[W-2:0], ^(lfsr_reg_q & 16'hB400)};
end

  // OBI response: combinational
  assign obi_rsp_o.gnt = obi_req_i.req;

  always_comb begin
    obi_rsp_o.rvalid = 1'b0;
    obi_rsp_o.r.rdata = 32'h00000000;
    obi_rsp_o.r.err = 1'b0;
    obi_rsp_o.r.rid = '0;
    obi_rsp_o.r.r_optional = '0;

    if (!obi_req_i.a.we && obi_req_i.req) begin
      case (obi_req_i.a.addr)
        32'h00: begin
          obi_rsp_o.rvalid = 1'b1;
          obi_rsp_o.r.rid = obi_req_i.a.aid;
          obi_rsp_o.r.rdata = { {(32-W){1'b0}}, ctrl_reg };
        end
        32'h08: begin
          obi_rsp_o.rvalid = 1'b1;
          obi_rsp_o.r.rid = obi_req_i.a.aid;
          obi_rsp_o.r.rdata = { {(32-W){1'b0}}, lfsr_reg_q };
        end
        default: begin
          obi_rsp_o.rvalid = 1'b1;
          obi_rsp_o.r.err = 1'b1;
        end
      endcase
    end
  end

endmodule
