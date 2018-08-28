include $(MK_INC)

TEXTGENDEP=Body.o main.o Template.o KeyList.o stringUtils.o
TEXTGEN=textGenerator

$(TEXTGEN): $(TEXTGENDEP) 
	$(CC) $^ -o $@

%.o: %.cpp %.H
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@

%.o: %.cpp
	$(CC) $(OFLAGS) -I $(INC_DIR) $< -o $@


clean:
	rm -rf $(TEXTGENDEP) $(TEXTGEN)

