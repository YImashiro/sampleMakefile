## Use Dynamic Library
To carry out program do  
`$./main`

but the terminal will say "I cannot load library."

you can find where the library is by this command,
`$ldd main`

then the terminal will say
```
linux-vdso.so.1 =>  (0x00007fffaedad000)
	libgpxparser.so => not found
			(and more......)
```
the message means that it cannnot find libgpxparser.so.

In order to tell the library path do  
`$export LD_LIBRARY_PATH = $LD_LIBRARY_PATH:./`

this command adds the current path to library path.

then do  
`$./main`

and you can carry out the program.



## The Flow Chart of Build
              
*srcfile* -->include headerfile(declaration) --> *objectfile* -->link library --> *executable file*  

1. *compile* from srcfile to objectfile 
2. *link* from objectfile to executablefile
3. *build* from srcfile to executablefile
4. *make* doing build by the way developer decides. 

