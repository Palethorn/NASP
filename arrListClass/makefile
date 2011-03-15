CC = g++
FLAGS = -Wall
main: main.o
	$(CC) $(FLAGS) -o main main.o
main.o: main.cpp List.h
	$(CC) $(FLAGS) -c -o main.o main.cpp
clean:
	rm -f *.o && rm -f main
