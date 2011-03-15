CC = gcc
flags = -Wall
main: main.c insert.o delAll.o remove.o print.o find.o allocate.o
	$(CC) $(flags) -o main main.c insert.o delAll.o remove.o print.o find.o allocate.o
insert: insert.c
	$(CC) $(flags) -c -o insert.o insert.c
delAll: delAll.c
	$(CC) $(flags) -c -o delAll.o delAll.c
remove: remove.c
	$(CC) $(flags) -c -o remove.o remove.c
print: print.c
	$(CC) $(flags) -c -o print.o print.c
find: find.c
	$(CC) $(flags) -c -o find.o find.c
allocate: allocate.c
	$(CC) $(flags) -c -o allocate.o allocate.c
clean:
	rm -f *.o && rm -f main
