#include "header.h"
node* doubleRotateRightLeft(node* subtree){
	node* tmp = NULL;
	tmp = singleRotateRight(subtree -> right);
	subtree -> right = tmp;
	tmp = singleRotateLeft(subtree);
	return tmp;
}
