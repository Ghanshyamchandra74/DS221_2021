CC=g++ --std=c++11

all: Stack Vector MAP 

MAP: MAP.o
	$(CC) -o MAP MAP.o

MAP.o: MAP.cpp
	$(CC) -o MAP.o -c MAP.cpp

Stack: Stack.o
	$(CC) -o Stack Stack.o

Stack.o: Stack.cpp
	$(CC) -o Stack.o -c Stack.cpp

Vector: Vector.o
	$(CC) -o Vector Vector.o

Vector.o: Vector.cpp
	$(CC) -o Vector.o -c Vector.cpp

clean:
	rm -f MAP.o MAP
	rm -f Vector.o Vector
	rm -f Stack.o Stack