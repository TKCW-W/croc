#! /bin/tcsh -f

# example file to compile GATE-LEVEL sourcecode


set VER=2019.3
set LIB=gate


if (-e ${LIB}) then
  rm -rf ${LIB}
endif

questa-$VER vlib ${LIB}

# compile gate-level netlist
questa-$VER vlog  -work ${LIB} ../openroad/out/croc.v

# compile testbench
questa-$VER vlog  -work ${LIB} -sv ../rtl/tb_croc_soc.sv

# optimize the design
questa-$VER vopt  -work ${LIB}  -o tb_croc_soc_opt tb_croc_soc 

# run with the sim_postlayout.csh script
