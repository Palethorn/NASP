#include "additional.h"
#include "definition.h"
void flush(element **list){
	element *p = NULL;
	if(*list == NULL){
		return;
	}
	while(*list){
		p = *list;
		(*list) = (*list) -> next;
		free(p);	
	}
}
