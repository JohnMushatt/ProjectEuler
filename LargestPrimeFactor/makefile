
# Set CFLAGS to activate all warnings and enable debugger
CFLAGS = -Wall -g

# Default rule is to build the executable called life
all: Solver

# Rule for building the executable.
Solver: Solver.o 
	gcc $(CFLAGS) Solver.o -o Solver

# Rules for building each object file.
Solver.o: Solver.c Solver.h
	gcc $(CFLAGS) -c Solver.c

# Give command "make clean" to remove object files,
#  executable, and documentation.
clean:
	rm -f *.o life
	rm -f -r html latex

# Give command "make docs" to create documentation.	
docs:
	doxygen