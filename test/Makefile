include $(MK_INC)

TESTDEP = $(addprefix $(OBJ_DIR), Main_t.o TemplateTest.o BodyTest.o KeyListTest.o)
TESTEXE = $(addprefix $(BIN_DIR),test)
LINKFLAGS = -lcppunit

$(TESTEXE) : $(TESTDEP)
	$(CC) $^ $(LINKFLAGS) -o $@ 

$(OBJ_DIR)%.o : %.cpp %.H
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@
	
$(OBJ_DIR)%.o : %.cpp
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@

clean:
	rm -rf $(TESTDEP) $(TESTEXE)
