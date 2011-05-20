/*
* Finds node with max value
*/
#include "header.h"
node* findMax(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> right == NULL){// No further.
		return subtree;
	}
	/*
	* Going recursively to the rightmost node of the tree, because that one represents the max value
	*/
	return findMax(subtree -> right);
}
