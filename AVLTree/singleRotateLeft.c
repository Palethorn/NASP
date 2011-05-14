#include "header.h"
node* singleRotateLeft(node* subtree){
	node *tmp = subtree -> right;
	subtree -> right = tmp -> left;
	tmp -> left = subtree;
	tmp -> left -> rh =
		tmp -> left -> right -> lh >= tmp -> left -> right -> rh ?
			(tmp -> left -> right -> lh + 1) :
				(tmp -> left -> right -> rh + 1);
	tmp -> lh =
		tmp -> left -> lh >= tmp -> left -> rh ?
			(tmp -> left -> lh + 1) :
				(tmp -> left -> rh + 1);
	tmp -> balanceFactor = tmp -> lh - tmp -> rh;
	return tmp;
}
