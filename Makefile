MK_DIRS=src test

.PHONY: all fresh textGenerator test clean

all: textGenerator test

fresh: clean all

textGenerator:
	$(MAKE) -C src $@ 

test:
	$(MAKE) -C test $@

clean: 
	#for each element in MK_DIRS place into DIR and run command at end
	$(foreach DIR, $(MK_DIRS), $(MAKE) -C $(DIR) clean;)


