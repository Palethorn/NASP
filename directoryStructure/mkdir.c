#include "additional.h"
#include "definition.h"
int mkdir(node** current, char name[]){
	node* new = NULL;
	node* tmp = *current;
	new = (node *)malloc(sizeof(node));
	if(!(*current)){
		strcpy( new -> name, name);
		new -> nextSibling = NULL;
		new -> firstChild = NULL;
		new -> parent = NULL;
		new -> previousSibling = NULL;
		tmp = new;
		return 1;
	}
	strcpy(new -> name, name);
	new -> nextSibling = tmp -> firstChild;
	if(new -> nextSibling)
		new -> nextSibling -> previousSibling = new;
	new -> parent = tmp;
	new -> previousSibling = NULL;
	tmp -> firstChild = new;
	return 1;
}
