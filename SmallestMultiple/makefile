
# Set CFLAGS to activate all warnings and enable debugger
CFLAGS = -Wall -g

# Default rule is to build the executable called life
all: solver

# Rule for building the executable.
solver: solver.o 
	gcc $(CFLAGS) solver.o -o solver

# Rules for building each object file.
solver.o: solver.c solver.h
	gcc $(CFLAGS) -c solver.c

# Give command "make clean" to remove object files,
#  executable, and documentation.
clean:
	rm -f *.o life
	rm -f -r html latex

# Give command "make docs" to create documentation.	
docs:
	doxygen