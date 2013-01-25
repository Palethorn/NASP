#include "header.h"
node *createNode(int value)
{
    node *n = NULL;
	n = (node *)malloc(sizeof(node));
	n->value = value;
	n->left = NULL;
	n->right = NULL;
	n->lh = n->rh = 0;
	n->balanceFactor = 0;
    return n;
}