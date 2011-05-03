#include "header.h"
int addChild(node **tree, int value){
	node* subtree = *tree;
	if(!subtree){
		node *n = (node *)malloc(sizeof(node));
		n -> value = value;
		n -> left = NULL;
		n -> right = NULL;
		*tree = n;
		return 1;
	}
	if(value < subtree -> value){
		if(subtree -> left == NULL){
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			subtree -> left = n;
				return 1;
		}
		else addChild(&subtree -> left, value);
	}
	else{
		if(subtree -> right == NULL){
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			subtree -> right = n;
				return 1;
		}
		else addChild(&subtree -> right, value);
	}
	return 0;
}
