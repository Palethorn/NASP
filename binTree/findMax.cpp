#include "header.h"
node* findMax(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> right == NULL){
		return subtree;
	}
	return findMax(subtree -> right);
}
