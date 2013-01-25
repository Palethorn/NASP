#include "header.h"
node* singleRotateRight(node* subtree){
	node *tmp = NULL;
    short tmprh;
	// Perform rotation
    tmp = subtree->left;
    tmprh = tmp->rh;
    subtree->left = tmp->right;
    subtree->lh = tmprh;
	tmp->right = subtree;
	// Update balance factors
    tmp->rh = tmp->right->lh >= tmp->right->rh ? tmp->right->lh + 1 : tmp->right->rh + 1;
    tmp->balanceFactor = tmp->lh - tmp->rh;
    tmp->right->balanceFactor = tmp->right->lh - tmp->right->rh;
	return tmp;// Return new subroot
}
