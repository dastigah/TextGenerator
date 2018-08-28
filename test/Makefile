CXX = g++
INCLUDES = -I./
CXXFLAGS = -g $(INCLUDES)
TARGET = Main_t.o TemplateTest.o BodyTest.o KeyListTest.o
LINKFLAGS = -lcppunit

test : $(TARGET)
	$(CXX) -o $@ $^ $(LINKFLAGS) 

%.o : %.cpp %.H
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(TARGET) test
