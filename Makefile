OBJ = 1.o 2.o 3.o 5.o 6.o 8.o m.o
output: $(OBJ)
	tcc $(OBJ) -o output

%.o: %.c functions.h
	tcc -c $<

clean:
	rm $(OBJ)
