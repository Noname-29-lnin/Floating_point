MAIN_TEST    := main
SRC_FILE     := flist.f
BUILD_DIR    := build
TARGET       := $(MAIN_TEST)

CXX          := g++
CXXFLAGS     := -Wall -O2 -std=c++17
LDFLAGS      := -pthread

VALUE_SERIAL ?= 4
VALUE_PARALLEL ?= 4

ifeq ($(wildcard $(SRC_FILE)),)
    SRC_LIST := $(MAIN_TEST).cpp
else
    SRC_LIST := $(shell cat $(SRC_FILE)) $(MAIN_TEST).cpp
endif

OBJ_LIST := $(addprefix $(BUILD_DIR)/, $(SRC_LIST:.cpp=.o))

.PHONY: all run clean checkmemory help

all: clean run

$(TARGET): $(OBJ_LIST)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET) $(VALUE_SERIAL) $(VALUE_PARALLEL) | tee complite.log

clean:
	rm -rf $(BUILD_DIR) $(TARGET) *.out 

checkmemory: $(TARGET)
	@echo "=== Check memory leaking ==="
	valgrind --tool=massif --stacks=yes \
		--massif-out-file=massif_main.out \
		./$(TARGET) $(VALUE_SERIAL) $(VALUE_PARALLEL)
	ms_print massif_main.out > analysis_memory.log
	@echo "=== PEAK MEMORY USAGE ==="
	@grep "mem_heap_B" massif_main.out | sort -nr | head -1

help:
	@echo "Targets available:"
	@echo "  all          - build the project"
	@echo "  run          - run with default parameters"
	@echo "  clean        - remove build artifacts"
	@echo "  checkmemory  - run valgrind massif and analyze"
