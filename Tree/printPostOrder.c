#include "additional.h"
#include "definition.h"
void printPostOrder(node *tree){
	if(!tree)
		return;
	printPostOrder(tree -> firstChild);
	if(tree -> nextSibling)
		printPostOrder(tree -> nextSibling);
	printf("Node id %d has value of %d\n", tree -> id, tree -> value);
}
