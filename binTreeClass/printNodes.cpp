#include <stdio.h>
#include "node.h"
void node::printNodes(node *subtree){
	if(subtree == NULL) return;
	printNodes(subtree -> left);
	printf("%d\n", subtree -> value);
	printNodes(subtree -> right);
}
