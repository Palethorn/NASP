#include "header.h"
void postOrder(node *subtree){
	if(subtree == NULL) return;
	postOrder(subtree->left);
	postOrder(subtree->right);
	/*
	* Printing nodes post-order with all the debug information
	*/
	printf("value: %d, balanceFactor: %d, left height: %d, right height: %d \n", subtree->value, subtree->balanceFactor, subtree->lh, subtree->rh);
}
