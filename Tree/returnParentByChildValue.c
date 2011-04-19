#include "definition.h"
#include "additional.h"
node *findParentByChildValue(node *tree,int value){
	int i;
	node *found = NULL;
	if(!tree){
		return NULL;
	}
	if(!(tree -> firstChild))
		return NULL;
	if(tree -> firstChild -> value == value)
		return tree;
	if((found = findParentByChildValue(tree -> firstChild, value)))
		return found;
	while(tree -> nextSibling)
		if((found = findParentByChildValue(tree -> nextSibling,value))) return found;
	return NULL;
}
