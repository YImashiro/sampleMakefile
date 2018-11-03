## Create a Static Library
Static library has *a* extension.
Create library from object files.Do  
```
library.a:object.o
	ar -rcs library.a object.o
```  

*ar* command a
then link library like object files.

## Options
- `-c` creates library
- `-r` replace/add files
- `-s` creates/renew index. this is equivalent with the command `ranlib`
