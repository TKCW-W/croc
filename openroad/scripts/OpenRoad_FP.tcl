source scripts/setup_OpenRoad.tcl

source $CROC_DIR/openroad/scripts/init_tech.tcl

read_verilog $CROC_DIR/yosys/out/croc_yosys.v
link_design croc_chip
puts "Start done!"

set chipW  2235;
set chipH  2235;
set padRing           180.0
set coreMargin [expr $padRing + 35];
initialize_floorplan -die_area "0 0 $chipW $chipH" -core_area "$coreMargin $coreMargin [expr $chipW-$coreMargin] [expr $chipH-$coreMargin]" -site "CoreSite"
puts "Floorplan done!"