#include "node.h"
node* node::findMax(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> right == NULL){
		return subtree;
	}
	return this -> findMax(subtree -> right);
}
