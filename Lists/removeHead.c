#include "additional.h"
#include "definition.h"
int removeHead(element **list){
	element *p = *list;
	if((*list) == NULL){
		printf("List is empty!\n");
		return 0;
	}
	if((*list) -> next == NULL){
		free(*list);
		*list = NULL;
		return 1;
	}
	*list = (*list) -> next;
	free(p);
	return 1;
}
