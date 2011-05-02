#include "definition.h"
#include "additional.h"
node *find(node *subdir,char *name){
	node *found = NULL;
	if(!subdir){
		return NULL;
	}
	if(strcmp(subdir -> name, name) == 0){
		return subdir;
	}
	return find(subdir -> nextSibling, name);
}
