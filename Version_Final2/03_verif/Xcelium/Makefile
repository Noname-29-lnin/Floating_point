TOPMODULE   ?= top
INC_DIR     ?= ./
LIB_DIR     ?= ./

TB_NAME      = tb_$(TOPMODULE)
WORK_DIR     = $(INC_DIR)/Xcelium
FLIST        = $(INC_DIR)/flist.f
LIB_INC      = $(shell find $(LIB_DIR) -type f -name "*.svh" -exec dirname {} \; | sort -u)
#============================================================
# Targets
#============================================================
-include config.mk

# Load Targets
.PHONY: load
load:
	@echo "Saving configuration..."
	@echo "TOPMODULE=$(TOPMODULE)" > config.mk
	@echo "INC_DIR=$(INC_DIR)" >> config.mk
	@echo "LIB_DIR=$(LIB_DIR)" >> config.mk
	@echo "-> Saved to config.mk"
	@cat config.mk

.PHONY: all all_wave compile run gui clean kill help

all: compile run
all_wave: compile run gui

compile:
	@echo "-> Creating work directory..."
	@mkdir -p $(WORK_DIR)
	@echo "<Pass> mkdir $(WORK_DIR)"
	@echo "-> mkdir..."
	@mkdir -p $(INC_WORK) \
		&& echo "<Pass> mkdir $(INC_WORK)" \
		|| echo "<False> mkdir $(INC_WORK)"
	@echo "TB_NAME: $(TB_NAME)"
	@echo "INC_DIR: $(INC_DIR)"
	@echo "LIB_DIR: $(LIB_DIR)"
	@echo "FLIST content:"
	@cat $(FLIST)
	@echo " "
	@echo "LIB_INC directories:"
	@for dir in $(LIB_INC); do \
		echo "  $$dir"; \
	done
	@echo " "
	@find $(LIB_DIR) -name "*.svh" 2>/dev/null | while read file; do \
		echo "  $$file"; \
	done || echo "  No .svh files found"
	@echo " "
	@echo "-> compile..."
	@xrun +xm64bit -sv -f $(FLIST) \
	     -top $(TB_NAME) \
	     -access +rwc \
	     -clean \
	     -log $(WORK_DIR)/compile.log \
	     +nctimescale+1ns/1ps \
		 +ntb_random_seed=automatic \
	     -allowredefinition \
	     -v93 \
	     && echo "<Pass> compile $(TB_NAME)" || (echo "<False> compile $(TB_NAME)" && exit 1)
	@rm -rf ./*.vcd
run:
	@echo "-> Move file $(TB_NAME).shm"
	@mv $(TB_NAME).shm $(WORK_DIR)
	@echo "-> Copy Xcelium..."
	@cp -r ./xcelium.d $(WORK_DIR)

gui:
	@echo "-> SIMULATION WITH SIMVISION..."
	@simvision -waves $(WORK_DIR)/$(TB_NAME).shm

clean:
	@echo "-> Cleaning Xcelium files..."
	@rm -rf INCA_libs xcelium.d .xrun* *.history *.log *.key *.shm .simvision
	@echo "<Pass> clean done"

cleanall:
	@echo "-> Clear all..."
	@rm -rf INCA_libs xcelium.d .xrun* *.history *.log *.key $(TB_NAME).shm simvision* work .simvision
	@echo "-> Remove $(WORK_DIR)..."
	@rm -rf $(WORK_DIR)

kill:
	@echo "-> KILLING SimVision"
	pkill -f simvision

help:
	@echo "===================================================================="
	@echo "                  XCELIUM MAKEFILE - Optimized"
	@echo "===================================================================="
	@echo " make all          → only compile (generate compile.log)"
	@echo " make all_wave     → compile + run simulation + open waveform GUI"
	@echo " make gui          → open SimVision WITHOUT compile/run"
	@echo " make clean        → clean all build files"
	@echo "===================================================================="
	@echo " Example overrides:"
	@echo "   make TOPMODULE=FPU_unit all"
	@echo "   make TOPMODULE=FPU_unit all_wave"
	@echo "   make gui        (open previous waveform)"
	@echo "===================================================================="
