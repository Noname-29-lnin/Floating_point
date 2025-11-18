# Cadence Genus(TM) Synthesis Solution, Version GENUS15.20 - 15.20-p004_1, built Nov 14 2015

# Date: Tue Nov 18 10:23:59 2025
# Host: centos7 (x86_64 w/Linux 3.10.0-1160.108.1.el7.x86_64) (2*Intel(R) Core(TM) i5-10300H CPU @ 2.50GHz 8192KB)
# OS:   CentOS Linux release 7.9.2009 (Core)

read_hdl -f flist.f 
read_hdl-sv  -f flist.f 
read_hdl -sv -f flist.f 
set_db design_top FPU_unit
exit
