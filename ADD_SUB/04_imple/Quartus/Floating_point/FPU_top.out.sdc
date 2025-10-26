## Generated SDC file "FPU_top.out.sdc"

## Copyright (C) 2025  Altera Corporation. All rights reserved.
## Your use of Altera Corporation's design tools, logic functions 
## and other software and tools, and any partner logic 
## functions, and any output files from any of the foregoing 
## (including device programming or simulation files), and any 
## associated documentation or information are expressly subject 
## to the terms and conditions of the Altera Program License 
## Subscription Agreement, the Altera Quartus Prime License Agreement,
## the Altera IP License Agreement, or other applicable license
## agreement, including, without limitation, that your use is for
## the sole purpose of programming logic devices manufactured by
## Altera and sold by Altera or its authorized distributors.  Please
## refer to the Altera Software License Subscription Agreements 
## on the Quartus Prime software download page.


## VENDOR  "Altera"
## PROGRAM "Quartus Prime"
## VERSION "Version 24.1std.0 Build 1077 03/04/2025 SC Lite Edition"

## DATE    "Sun Oct 26 00:33:06 2025"

##
## DEVICE  "5CSXFC6D6F31C6"
##


#**************************************************************
# Time Information
#**************************************************************

set_time_format -unit ns -decimal_places 3



#**************************************************************
# Create Clock
#**************************************************************

create_clock -name {CLK_50MHZ} -period 20.000 -waveform { 0.000 10.000 } [get_ports {i_clk}]


#**************************************************************
# Create Generated Clock
#**************************************************************



#**************************************************************
# Set Clock Latency
#**************************************************************



#**************************************************************
# Set Clock Uncertainty
#**************************************************************

set_clock_uncertainty -rise_from [get_clocks {CLK_50MHZ}] -rise_to [get_clocks {CLK_50MHZ}] -setup 0.170  
set_clock_uncertainty -rise_from [get_clocks {CLK_50MHZ}] -rise_to [get_clocks {CLK_50MHZ}] -hold 0.060  
set_clock_uncertainty -rise_from [get_clocks {CLK_50MHZ}] -fall_to [get_clocks {CLK_50MHZ}] -setup 0.170  
set_clock_uncertainty -rise_from [get_clocks {CLK_50MHZ}] -fall_to [get_clocks {CLK_50MHZ}] -hold 0.060  
set_clock_uncertainty -fall_from [get_clocks {CLK_50MHZ}] -rise_to [get_clocks {CLK_50MHZ}] -setup 0.170  
set_clock_uncertainty -fall_from [get_clocks {CLK_50MHZ}] -rise_to [get_clocks {CLK_50MHZ}] -hold 0.060  
set_clock_uncertainty -fall_from [get_clocks {CLK_50MHZ}] -fall_to [get_clocks {CLK_50MHZ}] -setup 0.170  
set_clock_uncertainty -fall_from [get_clocks {CLK_50MHZ}] -fall_to [get_clocks {CLK_50MHZ}] -hold 0.060  


#**************************************************************
# Set Input Delay
#**************************************************************

set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[0]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[1]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[2]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[3]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[4]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[5]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[6]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[7]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[8]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[9]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[10]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[11]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[12]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[13]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[14]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[15]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[16]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[17]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[18]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[19]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[20]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[21]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[22]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[23]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[24]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[25]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[26]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[27]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[28]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[29]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[30]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_a[31]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[0]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[1]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[2]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[3]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[4]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[5]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[6]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[7]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[8]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[9]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[10]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[11]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[12]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[13]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[14]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[15]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[16]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[17]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[18]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[19]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[20]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[21]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[22]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[23]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[24]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[25]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[26]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[27]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[28]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[29]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[30]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_floating_b[31]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_fpu_op[0]}]
set_input_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.500 [get_ports {i_rst_n}]


#**************************************************************
# Set Output Delay
#**************************************************************

set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[0]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[1]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[2]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[3]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[4]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[5]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[6]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[7]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[8]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[9]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[10]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[11]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[12]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[13]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[14]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[15]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[16]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[17]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[18]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[19]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[20]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[21]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[22]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[23]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[24]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[25]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[26]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[27]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[28]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[29]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[30]}]
set_output_delay -add_delay  -clock [get_clocks {CLK_50MHZ}]  0.000 [get_ports {o_floating_result[31]}]


#**************************************************************
# Set Clock Groups
#**************************************************************



#**************************************************************
# Set False Path
#**************************************************************



#**************************************************************
# Set Multicycle Path
#**************************************************************



#**************************************************************
# Set Maximum Delay
#**************************************************************



#**************************************************************
# Set Minimum Delay
#**************************************************************



#**************************************************************
# Set Input Transition
#**************************************************************

