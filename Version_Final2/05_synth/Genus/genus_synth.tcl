# set_db init_lib_search_path {/home/yellow/ee3213_05/gpdk045_lib}
# set_db init_hdl_search_path {/home/yellow/ee3213_05/project_tkkd/00_src}

read_libs ./../slow_vdd1v2_basicCells_lvt.lib
# read_hdl -sv [glob /home/yellow/ee3213_05/project_tkkd/00_src/*.sv]
read_hdl -sv -f flist.f
set_top FPU_unit
elaborate
read_sdc constraint.sdc

set_db syn_generic_effort medium
set_db syn_map_effort medium 
set_db syn_opt_effort medium

syn_generic 
syn_map 
syn_opt

report_timing  > reports/timing.rpt 
report_power   > reports/power.rpt 
report_area    > reports/area.rpt 
report_qor     > reports/qor.rpt

write_hdl > topmodules/top_netlist.sv
write_sdf -timescale ns -nonegchecks -recrem split -edges check_edge -setuphold split  > topmodules/delay.sdf