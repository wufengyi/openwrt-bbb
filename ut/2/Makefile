APPS = servreg-hack
CONTIKI = /home/user/contikiUT/contiki
CONTIKI_WITH_IPV6 = 1
include $(CONTIKI)/Makefile.include

#We should contain examples folder
INCLUDEDIR = ipv6/simple-udp-rpl
EXAMPLEDIRS += $(CONTIKI)/examples

#Cpputest 
CPPUTEST_HOME = /home/user/contikiUT/cpputest

#All source
INCLUDE_FLAGS := ${foreach D, ../src ${SOURCEDIRS}, -I${D}}
INCLUDE_FLAGS += -I$(EXAMPLEDIRS)/$(INCLUDEDIR)
sourceP = ../src
VPATH = ../src

CXX           := g++

LD_LIBRARY    := -L$(CPPUTEST_HOME)/lib -lCppUTest -lCppUTestExt
INCLUDE_FLAGS += -I$(CPPUTEST_HOME)/include
CPPFLAGS      := -Wall -fpermissive -g -O0 $(CFLAGS) $(INCLUDE_FLAGS) $(LD_LIBRARY)
CPPFLAGS      += --coverage

TARGETS       := $(basename $(notdir $(wildcard $(sourceP)/test_*.cpp)))

#Enable line coverage
LCOV_INFO     := coverage.info
LCOV_DIR      := coverage
LCOV_FLAGS    := --capture  
GENHTML_FLAGS := 

#Enable doxygen
DOXYGEN_FILEPATH := ./documentation/
DOXYGEN_FILE := DoxygenContiki

all: $(TARGETS)
%: %.cpp
	$(CXX) $< -o $@ $(CPPFLAGS)
test: all
	@$(foreach target, $(TARGETS), echo "[ $(target) ]"; ./$(target); )
pre-lcov:
	mkdir -p $(LCOV_DIR)
lcov: test pre-lcov
	lcov --directory . --output-file $(LCOV_INFO) $(LCOV_FLAGS)
	genhtml  --output-directory $(LCOV_DIR) $(LCOV_INFO) $(GENHTML_FLAGS)
doc:
	doxygen $(DOXYGEN_FILEPATH)/$(DOXYGEN_FILE) 
cleanctk:
	rm -rf $(TARGETS)
	rm -f *.gcno
	rm -f *.gcda
	rm -f *.gcov
	rm -f $(LCOV_INFO)
	rm -rf $(LCOV_DIR)
	rm -rf $(DOXYGEN_FILEPATH)/documentation
