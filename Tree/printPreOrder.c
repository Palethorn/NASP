#include "additional.h"
#include "definition.h"
void printPreOrder(node *tree){
	if(!tree)
		return;
	printf("Node id %d has value of %d\n", tree -> id, tree -> value);
	printPreOrder(tree -> firstChild);
	if(tree -> nextSibling)
		printPreOrder(tree -> nextSibling);
}
