# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_FPU_unit.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_FPU_unit \
	Vtb_FPU_unit___024root__DepSet_h70cef955__0 \
	Vtb_FPU_unit___024root__DepSet_h70cef955__1 \
	Vtb_FPU_unit___024root__DepSet_h69e43522__0 \
	Vtb_FPU_unit_CLA_4bit__DepSet_h11641d54__0 \
	Vtb_FPU_unit_COMP_4bit__DepSet_hf93ef592__0 \
	Vtb_FPU_unit__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_FPU_unit___024root__Slow \
	Vtb_FPU_unit___024root__DepSet_h70cef955__0__Slow \
	Vtb_FPU_unit___024root__DepSet_h69e43522__0__Slow \
	Vtb_FPU_unit_CLA_4bit__Slow \
	Vtb_FPU_unit_CLA_4bit__DepSet_h637cc0a9__0__Slow \
	Vtb_FPU_unit_CLA_4bit__DepSet_h11641d54__0__Slow \
	Vtb_FPU_unit_COMP_4bit__Slow \
	Vtb_FPU_unit_COMP_4bit__DepSet_h837d6b01__0__Slow \
	Vtb_FPU_unit_COMP_4bit__DepSet_hf93ef592__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_FPU_unit__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_FPU_unit__Syms \
	Vtb_FPU_unit__Trace__0__Slow \
	Vtb_FPU_unit__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
