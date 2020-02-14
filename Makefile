CC = clang
OBJ = 1.o 2.o 3.o 5.o 6.o 8.o m.o
output: $(OBJ)
	$(CC) $(OBJ) -o output

%.o: %.c functions.h
	$(CC) -c $<

clean:
	rm $(OBJ)
