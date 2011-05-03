#include "additional.h"
#include "definition.h"
int cd(node **current, char *name){
	node *subdir = NULL;
	if(*current == NULL) return 0;
	subdir = findNode((*current) -> firstChild);
	if(subdir){
		*current = subdir;
		return 1;
	}
	return 0;
}
