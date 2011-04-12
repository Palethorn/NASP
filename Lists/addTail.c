#include "additional.h"
#include "definition.h"
int addTail(element **list, int val){
	element *tmp, *p = *list;
	if(!(tmp = (element *)malloc(sizeof(element)))){
		printf("Error!\n");
		return 0;
	}
	tmp -> value = val;
	tmp -> next = NULL;
	if(*list == NULL){
		*list = tmp;
		return 1;
	}
	while(p -> next){
		p = p -> next;
	}
	p -> next = tmp;
	return 1;
}
