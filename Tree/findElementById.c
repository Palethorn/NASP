#include "definition.h"
#include "additional.h"
node *findElementById(node *tree,int id){
	int i;
	node *found = NULL;
	if(!tree){
		return NULL;
	}
	if(tree -> id == id)
		return tree;
	if((found = findElementById(tree -> firstChild, id)))
		return found;
	while(tree -> nextSibling)
		if((found = findElementById(tree -> nextSibling,id))) return found;
	return NULL;
}
