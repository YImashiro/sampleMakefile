.PHONY: clean

main:main.o libgpxparser.so
	$(CXX)  $< -L. -lgpxparser -o $@ 

main.o:main.cpp 
	$(CXX) -c $<

libgpxparser.so:GpxParser.o
	g++ -shared  GpxParser.o -o libgpxparser.so

GpxParser.o:GpxParser.cpp GpxParser.h
	$(CXX) -fPIC -c $^

clean:
	rm -f *.o *~ *.gch
