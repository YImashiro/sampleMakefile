.PHONY: clean rebuild
CXX = g++
CXXFLAGS = -g -Wall


all:test

test:test2.o test1.o
	$(CXX) $(CXXFLAGS) $^ -o test

test1.o:test1.cpp test1.h
	$(CXX) $(CXXFLAGS) -c $^

test2.o:test2.cpp test2.h
	$(CXX) $(CXXFLAGS) -c $^
clean:
	rm -f *~ *.o *.gch
rebuild:clean all
