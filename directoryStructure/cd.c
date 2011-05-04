#include "additional.h"
#include "definition.h"
#include "header.h"
int cd(node** current, char name[]){
	node* subdir = NULL;
	if((*current) == NULL) return 0;
	subdir = findNode((*current) -> firstChild,name);
	if(subdir != NULL){
		*current = subdir;
		return 1;
	}
	return 0;
}
