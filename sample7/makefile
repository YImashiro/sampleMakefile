.PHONY: clean

main:main.o 
	$(CXX)  $< -L../sample6/ -lgpxparser -o $@ 

main.o:main.cpp 
	$(CXX) -I../sample6 -c $<

clean:
	rm -f *.o *~ *.gch
