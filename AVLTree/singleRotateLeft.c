/*
* Single left rotation
*/
#include "header.h"
node* singleRotateLeft(node* subtree){
	node *tmp = NULL;
        short tmprh;
	// Do the rotation
        tmp = subtree -> right;
        tmprh = tmp -> lh;
        subtree -> right = tmp -> left;
        subtree -> rh = tmprh;
	tmp -> left = subtree;
	// Update balance factors
        tmp -> lh = tmp -> left -> lh >= tmp -> left -> rh ? tmp -> left -> lh + 1 : tmp -> left -> rh + 1;
        tmp -> balanceFactor = tmp -> lh - tmp -> rh;
        tmp -> left -> balanceFactor = tmp -> left -> lh - tmp -> left -> rh;
	return tmp;// New subroot
}
