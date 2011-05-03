#include "header.h"
node* findMin(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> left == NULL){
		return subtree;
	}
	return findMin(subtree -> left);
}
