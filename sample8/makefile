CFLAGS = -g -Wall

.cpp.o:
	$(CXX) $(CFLAGS) -o $@ -c $<

ALL: main.o sub.o
	$(CXX) $(CFLAGS) -o main main.o sub.o
sub.o:sub.h

clean:
	$(RM) *~ *.o
