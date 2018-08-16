TEXTGENDEP=Body.o main.o Template.o KeyList.o stringUtils.o
TEXTGEN=textGenerator
OFLAGS= -g -c -I. -std=c++14
CC=g++

$(TEXTGEN): $(TEXTGENDEP) 
	$(CC) $^ -o $@

%.o: %.cpp %.H
	$(CC) $(OFLAGS) $< -o $@

%.o: %.cpp
	$(CC) $(OFLAGS) $< -o $@


clean:
	rm -rf $(TEXTGENDEP) $(TEXTGEN)
