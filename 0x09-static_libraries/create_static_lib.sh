#!/bin/bash

# Compile all .c files to .o files
gcc -c *.c

# Create static library liball.a from .o files
ar rcs liball.a *.o

# Optional: Clean up .o files after creating the library
rm *.o

