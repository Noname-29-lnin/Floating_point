# Đọc HDL SystemVerilog
read_hdl -sv -f flist.f

# Set top (cú pháp cho Genus cũ)
set_top FPU_unit

# Thiết lập thư viện
set_attribute init_lib_search_path "/path/to/lib"
set_attribute library "my_lib.db"

# Đọc constraints
read_sdc my_constraints.sdc

# Chạy tổng hợp
syn_generic
syn_map
syn_opt

# Xuất netlist
write_hdl > netlist.v
write_sdc > output.sdc
