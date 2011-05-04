#include "additional.h"
#include "definition.h"
int mkdir(node** current, char name[]){
	node* new = NULL;
	new = (node *)malloc(sizeof(node));
	if(!(*current)){
		strcpy(new -> name, name);
		new -> nextSibling = NULL;
		new -> firstChild = NULL;
		new -> parent = NULL;
		new -> previousSibling = NULL;
		*current = new;
		return 1;
	}
	strcpy( new -> name, name);
	new -> nextSibling = (*current) -> firstChild;
	new -> parent = *current;
	new -> previousSibling = NULL;
	if(new -> nextSibling)
		new -> nextSibling -> previousSibling = new;
	(*current) -> firstChild = new;
	return 1;
}
