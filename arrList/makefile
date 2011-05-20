CC=gcc
CFLAGS=-Wall -c
all:  allocate.o delAll.o find.o insert.o main.o print.o remove.o
	${CC} -o main  allocate.o delAll.o find.o insert.o main.o print.o remove.o
allocate: allocate.c
	${CC} ${CFLAGS} allocate.c
delAll: delAll.c
	${CC} ${CFLAGS} delAll.c
find: find.c
	${CC} ${CFLAGS} find.c
insert: insert.c
	${CC} ${CFLAGS} insert.c
main: main.c
	${CC} ${CFLAGS} main.c
print: print.c
	${CC} ${CFLAGS} print.c
remove: remove.c
	${CC} ${CFLAGS} remove.c

clean:
	rm *.o main
