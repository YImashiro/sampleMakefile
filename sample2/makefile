
CXXFLAGS = -g -Wall

.PHONY:clean all

all:test1 test2

test1:test1.cpp
	$(CXX) $(CXX_FLAGS) $^ -o $@
test2:test2.cpp
	$(CXX) $(CXX_FLAGS) $^ -o $@
clean:
	$(RM) test1 test2
