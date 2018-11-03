## Variables
Define variables at first.  
Some variables has already been defined and you can change it.  

- `CC = gcc`  
- `CXX = g++`  
- `RM = rm -f`   f option ignores error message.

## Others
the system cannot tell some pseudo target such as *clean* and *all* whether target file or pseudo target.
For example, if there is a file *clean*, the system will not do *clean*.
However if you write  
`.PHONY = clean`  
then the system do clean even if there is a file *clean*.
Some says it makes the compile speed faster.
