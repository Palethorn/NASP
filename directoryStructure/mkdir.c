#include "definition.h"
#include <malloc.h>
#include "header.h"
int mkdir(node** current, char* name){
	node* new = NULL;
	node* tmp = *current;
	new = (node *)malloc(sizeof(node));
	if(!current){
		strcpy( new -> name, name);
		new -> nextSibling = NULL;
		new -> firstChild = NULL;
		new -> parent = NULL;
		*current = new;
		return 1;
	}
	strcpy( new -> name, name);
	new -> nextSibling = current -> firstChild;
	new -> parent = current;
	current -> firstChild = new;
	return 1;
}
