#include "node.h"
node* node::findNode(node *subtree, int value){
	if(!subtree) return NULL;
	if(subtree -> value == value) return subtree;
	if(subtree -> value < value) return this -> findNode(subtree -> right, value);
	if(subtree -> value > value) return this -> findNode(subtree -> left, value);
}
