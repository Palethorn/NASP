#ifndef HEADER_H
#define HEADER_H
	#include "definition.h"
	int removeHead(element **list);
	int removeTail(element **list);
	int addTail(element **list, int val);
	int addHead(element **list, int val);
	void print(element *list);
	void flush(element **list);
#endif
