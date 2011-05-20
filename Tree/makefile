CC=gcc
CFLAGS=-Wall -c
all:  addChildByParentId.o addChildByParentValue.o findById.o findByValue.o findElementById.o findElementByValue.o main.o printPostOrder.o printPreOrder.o removeChildById.o removeChildByValue.o returnParentByChildId.o returnParentByChildValue.o
	${CC} -o main  addChildByParentId.o addChildByParentValue.o findById.o findByValue.o findElementById.o findElementByValue.o main.o printPostOrder.o printPreOrder.o removeChildById.o removeChildByValue.o returnParentByChildId.o returnParentByChildValue.o
addChildByParentId: addChildByParentId.c
	${CC} ${CFLAGS} addChildByParentId.c
addChildByParentValue: addChildByParentValue.c
	${CC} ${CFLAGS} addChildByParentValue.c
findById: findById.c
	${CC} ${CFLAGS} findById.c
findByValue: findByValue.c
	${CC} ${CFLAGS} findByValue.c
findElementById: findElementById.c
	${CC} ${CFLAGS} findElementById.c
findElementByValue: findElementByValue.c
	${CC} ${CFLAGS} findElementByValue.c
main: main.c
	${CC} ${CFLAGS} main.c
printPostOrder: printPostOrder.c
	${CC} ${CFLAGS} printPostOrder.c
printPreOrder: printPreOrder.c
	${CC} ${CFLAGS} printPreOrder.c
removeChildById: removeChildById.c
	${CC} ${CFLAGS} removeChildById.c
removeChildByValue: removeChildByValue.c
	${CC} ${CFLAGS} removeChildByValue.c
returnParentByChildId: returnParentByChildId.c
	${CC} ${CFLAGS} returnParentByChildId.c
returnParentByChildValue: returnParentByChildValue.c
	${CC} ${CFLAGS} returnParentByChildValue.c

clean:
	rm *.o main
