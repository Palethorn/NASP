#include "header.h"
node* singleRotateRight(node *subtree){
	node *tmp = subtree -> right;
	subtree -> right = tmp -> left;
	tmp -> left = subtree;
	return tmp;
}
