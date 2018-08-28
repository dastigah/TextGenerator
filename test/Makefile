include $(MK_INC)

TESTDEP = Main_t.o TemplateTest.o BodyTest.o KeyListTest.o
TESTEXE = test
LINKFLAGS = -lcppunit

$(TESTEXE) : $(TESTDEP)
	$(CC) $^ $(LINKFLAGS) -o $@ 

%.o : %.cpp %.H
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@
	
%.o : %.cpp
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@

clean:
	rm -rf $(TESTDEP) $(TESTEXE)
