#include "node.h"
node* node::findMin(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> left == NULL){
		return subtree;
	}
	return this -> findMin(subtree -> left);
}
