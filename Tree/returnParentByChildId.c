#include "definition.h"
#include "additional.h"
node *findParentByChildId(node *tree,int id){
	int i;
	node *found = NULL;
	if(!tree){
		return NULL;
	}
	if(!(tree -> firstChild))
		return NULL;
	if(tree -> firstChild -> id == id)
		return tree;
	if((found = findParentByChildId(tree -> firstChild, id)))
		return found;
	while(tree -> nextSibling)
		if((found = findParentByChildId(tree -> nextSibling,id))) return found;
	return NULL;
}
