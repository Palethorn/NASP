#include "header.h"
int addChild(node **tree, int value){
	node* subtree = *tree;
	if(!subtree){
		node *n = (node *)malloc(sizeof(node));
		n -> value = value;
		n -> left = NULL;
		n -> right = NULL;
		n -> lh = n -> rh = 0;
		n -> balanceFactor = 0;
		*tree = n;
		return 0;
	}
	if(value < subtree -> value){
		if(subtree -> left == NULL){
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			n -> lh = n -> rh = 0;
			n -> balanceFactor = 0;
			subtree -> left = n;
			subtree -> lh += 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			return 1;
		}
		else{
			subtree -> lh += addChild(&subtree -> left, value);
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
		}
	}
	else if(value > subtree -> value){
		if(subtree -> right == NULL){
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			n -> lh = n -> rh = 0;
			n -> balanceFactor = 0;
			subtree -> right = n;
			subtree -> rh += 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			return 1;
		}
		else{
			subtree -> rh += addChild(&subtree -> left, value);
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
		}
	}
	return 0;
}
