output: 1.o 2.o 3.o 5.o 6.o m.o
	tcc 1.o 2.o 3.o 5.o 6.o m.o -o output

1.o: 1.c functions.h
	tcc -c 1.c

2.o: 2.c functions.h
	tcc -c 2.c

3.o: 3.c functions.h
	tcc -c 3.c

5.o: 5.c functions.h
	tcc -c 5.c

6.o: 6.c functions.h
	tcc -c 6.c

m.o: m.c
	tcc -c m.c

clean:
	rm 1.o 2.o 3.o 5.o 6.o m.o
