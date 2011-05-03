#include "header.h"
void printNodes(node *subtree){
	if(subtree == NULL) return;
	printNodes(subtree -> left);
	printf("%d\n", subtree -> value);
	printNodes(subtree -> right);
}
