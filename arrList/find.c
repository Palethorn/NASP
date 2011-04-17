#include "includes.h"
int find(int *list, int element, int size){
	int i;
	for(i = 0; i < size; i++){
		if(element == *(list + i)) return i;
	}
	return -1;
}
