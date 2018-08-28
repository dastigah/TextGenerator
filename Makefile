BIN_DIR=$(PWD)/bin
OBJ_DIR=$(PWD)/obj
INC_DIR=$(PWD)/include

MK_INC=$(PWD)/Makefile.include

PARTS_DIRS="BIN_DIR=$(BIN_DIR)" "OBJ_DIR=$(OBJ_DIR)" "INC_DIR=$(INC_DIR)" \
			"MK_INC=$(MK_INC)"

MKFILE_DIRS=src test

.PHONY: all fresh textGenerator test clean

all: textGenerator test

fresh: clean all

textGenerator:
	$(MAKE) $(PARTS_DIRS) -C src $@ 

test:
	$(MAKE) $(PARTS_DIRS) -C test $@

clean: 
	#for each element in MK_DIRS place into DIR and run command at end
	$(foreach DIR, $(MKFILE_DIRS), $(MAKE) -C $(DIR) clean;)	
