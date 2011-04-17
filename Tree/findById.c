#include "definition.h"
#include "additional.h"
node *findById(node *tree,int id){
	int i;
	node *found = NULL;
	if(!tree){
		return NULL;
	}
	if(tree -> id == id)
		return tree;
	if((found = findById(tree -> firstChild, id)))
		return found;
	while(tree -> nextSibling)
		if((found = findById(tree -> nextSibling,id))) return found;
	return NULL;
}
