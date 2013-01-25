#include "header.h"
void preOrder(node *subtree){
	if(subtree == NULL) return;
	/*
	* Printing nodes pre-order with all the debug information
	*/
	printf("value: %d, balanceFactor: %d, left height: %d, right height: %d \n", subtree->value, subtree->balanceFactor, subtree->lh, subtree->rh);
	preOrder(subtree->left);
	preOrder(subtree->right);
}
