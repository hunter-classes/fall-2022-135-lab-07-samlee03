main: main.o format.o
	g++ -o main main.o format.o

main.o: main.cpp format.h

format.o: format.cpp format.h

clean:
	rm -f main.o format.o
