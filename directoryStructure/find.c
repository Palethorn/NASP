#include "additional.h"
#include "definition.h"
node* findNode(node *subdir, char *name){
	if(!subdir){
		return NULL;
	}
	if(strcmp(subdir -> name, name) == 0){
		return subdir;
	}
	return findNode(subdir -> nextSibling, name);
}
