#include "definition.h"
#include "additional.h"
node *findByValue(node *tree,int value){
	int i;
	node *found = NULL;
	if(!tree){
		return NULL;
	}
	if(tree -> value == value)
		return tree;
	if((found = findByValue(tree -> firstChild, value)))
		return found;
	while(tree -> nextSibling)
		if((found = findByValue(tree -> nextSibling, value))) return found;
	return NULL;
}
