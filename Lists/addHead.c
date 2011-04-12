#include "additional.h"
#include "definition.h"
int addHead(element **list, int val){
	element *tmp;
	if(!(tmp = (element *)malloc(sizeof(element)))){
		printf("Error!\n");
		return 0;
	}
	tmp -> value = val;
	tmp -> next = *list;
	*list  = tmp;
	return 1;
}
