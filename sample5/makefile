.PHONY: clean

main:main.o libgpxparser.a
	$(CXX)  $^ -o $@

main.o:main.cpp 
	$(CXX) -c $<

libgpxparser.a:GpxParser.o
	ar rcs libgpxparser.a GpxParser.o

GpxParser.o:GpxParser.cpp GpxParser.h
	$(CXX) -c $^

clean:
	rm -f *.o *~ *.gch
