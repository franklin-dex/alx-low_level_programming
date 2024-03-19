#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -Wextra -pedantic -fPIC *.c

# Create the dynamic library liball.so from all object files
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm *.o
