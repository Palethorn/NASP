#include "header.h"
void inOrder(node *subtree){
	if(subtree == NULL) return;
	inOrder(subtree->left);
	/*
	* Printing nodes in-order with all the debug information
	*/
	printf("value: %d, balanceFactor: %d, left height: %d, right height: %d \n", subtree->value, subtree->balanceFactor, subtree->lh, subtree->rh);
	inOrder(subtree->right);
}
