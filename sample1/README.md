##The Basic Example of Makefile

the basic structure of makefile is

```
TARGET: SOURCEFILE```  
	```COMMAND```
  
If SRC is not created,makefile try to find and carry out the line to create SOURCEFILE.  
However note that some target is used for convenience, e.g *clean* , *all*

the basic usage of g++/gcc is below (ex.g++)  
'g++ main.cpp'  
This command creates Executable file *a.out* from cpp file *main.cpp*.  

###Options  
- `-o file` specify output filename  
`$g++ -o main main.cpp` creates *main* instead *a.out*

- `-c`  create object file
`$g++ -c main.cpp` creates *main.o*

- `-g` add debug information  
- `-Wall` show warnings  
