#include "node.h"
int node::addChild(node *subtree, int value){
	if(value < subtree -> value){
		if(subtree -> left == NULL){
			subtree -> left = new node(value, NULL, NULL);
				return 1;
		}
		else this -> addChild(subtree -> left, value);
	}
	else{
		if(subtree -> right == NULL){
			subtree -> right = new node(value, NULL, NULL);
				return 1;
		}
		else this -> addChild(subtree -> right, value);
	}
	return 0;
}
