#MK_INC=../Makefile.include
#INC_DIR=../include/
include $(MK_INC)

TEXTGENDEP=$(addprefix $(OBJ_DIR), Body.o main.o Template.o KeyList.o stringUtils.o)
TEXTGEN=$(addprefix $(BIN_DIR),textGenerator)

$(TEXTGEN): $(TEXTGENDEP) 
	$(CC) $^ -o $@

$(OBJ_DIR)%.o: %.cpp $(INC_DIR)%.H
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@

clean:
	rm -rf $(TEXTGENDEP) $(TEXTGEN)

