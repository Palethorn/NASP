#include "definition.h"
#include <malloc.h>
#include "header.h"
int mkdir(node* current, char* name){
	node* new = NULL;
	new = (node *)malloc(sizeof(node));
	if(!current) return 0;
	strcpy( new -> name, name);
	new -> nextSibling = current -> firstChild;
	new -> parent = current;
	current -> firstChild = new;
	return 1;
}
