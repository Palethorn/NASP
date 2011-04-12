#include "additional.h"
#include "definition.h"
int removeTail(element **list){
	element *p = *list;
	if(p == NULL){
		printf("List is empty!\n");
		return 0;
	}
	if(p -> next == NULL){
		free(p);
		*list = NULL;
		return 1;
	}
	while(p -> next -> next){
		p = p -> next;
	}
	free(p -> next);
	p -> next = NULL;
	return 1;
}
