#include "additional.h"
#include "definition.h"
int mkdir(node** current, char name[]){
	node* new = NULL;
	node* tmp = *current;
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
	/*if((*current) -> firstChild)
		(*current) -> firstChild -> previousSibling = new;*/
	new -> parent = *current;
	new -> previousSibling = NULL;
	(*current) -> firstChild = new;
	return 1;
}
