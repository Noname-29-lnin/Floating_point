create_clock -name i_clk -period 20.0 [get_ports i_clk]

# Thời gian đặt và giữ mặc định (nếu cần)
set_input_delay -clock i_clk 2.0 [all_inputs]
set_output_delay -clock i_clk 2.0 [all_outputs]

# Optional: Nếu muốn thiết lập max/min transition
# set_max_delay 10.0 -from [all_inputs] -to [all_outputs]
# set_min_delay 1.0 -from [all_inputs] -to [all_outputs]
