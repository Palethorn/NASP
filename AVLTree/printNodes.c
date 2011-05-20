/*
* Printing nodes in-order with all the debug information
*/
#include "header.h"
void printNodes(node *subtree){
	if(subtree == NULL) return;
	printNodes(subtree -> left);
	printf("value: %d, balanceFactor: %d, left height: %d, right height: %d \n", subtree -> value, subtree -> balanceFactor, subtree -> lh, subtree -> rh);
	printNodes(subtree -> right);
}
