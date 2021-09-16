CC=g++ -g --std=c++11

all: Logic_Error Segmentation

Segmentation: Segmentation.o
	$(CC) -o Segmentation Segmentation.o

Segmentation.o: Segmentation.cpp
	$(CC) -o Segmentation.o -c Segmentation.cpp

Logic_Error: Logic_Error.o
	$(CC) -o Logic_Error Logic_Error.o

Logic_Error.o: Logic_Error.cpp
	$(CC) -o Logic_Error.o -c Logic_Error.cpp

clean:
	rm -f Logic_Error.o Logic_Error
	rm -f Segmentation.o Segmentation