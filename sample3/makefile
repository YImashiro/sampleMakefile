CXX = g++
CXXFLAGS = -g -Wall


all:test1 test2

test1:test1.cpp test1.h
	$(CXX) $(CXX_FLAGS) $^ -o $@
test2:test2.cpp
	$(CXX) $(CXX_FLAGS) $^ -o $@
clean:test1 test2
	rm -f $^
	rm -f *~
