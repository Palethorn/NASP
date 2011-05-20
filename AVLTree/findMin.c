/*
* Finds node with min value
*/
#include "header.h"
node* findMin(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> left == NULL){// No further.
		return subtree;
	}
	/*
	* Going recursively to the leftmost node of the tree, because that one represents the max value
	*/
	return findMin(subtree -> left);
}
