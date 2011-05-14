#include "header.h"
node* singleRotateLeft(node *subtree){
	node *tmp = subtree -> left;
	subtree -> left = tmp -> right;
	tmp -> right = subtree;
	tmp -> right -> lh = tmp -> right -> left -> lh >= tmp -> right -> left -> rh ? (tmp -> right -> left -> lh + 1) : (tmp -> right -> left -> rh + 1);
	tmp -> rh = tmp -> right -> lh >= tmp -> right -> rh : (tmp -> right -> lh + 1) : (tmp -> right -> rh + 1);
	tmp -> balanceFactor = tmp -> lh - tmp -> rh;
	return tmp;
}
