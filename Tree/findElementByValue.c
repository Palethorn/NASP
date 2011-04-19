#include "definition.h"
#include "additional.h"
node *findElementByValue(node *tree,int value){
	int i;
	node *found = NULL;
	if(!tree){
		return NULL;
	}
	if(tree -> value == value)
		return tree;
	if((found = findElementByValue(tree -> firstChild, value)))
		return found;
	while(tree -> nextSibling)
		if((found = findElementByValue(tree -> nextSibling, value))) return found;
	return NULL;
}
