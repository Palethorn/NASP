#include "header.h"
node* doubleRotateLeftRight(node* subtree){
	node* tmp = NULL;
	tmp = singleRotateLeft(subtree -> left);
	subtree -> left = tmp;
	tmp = singleRotateRight(subtree);
	return tmp;
}
