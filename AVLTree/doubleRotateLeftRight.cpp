#include "header.h"
node* doubleRotateLeftRight(node* subtree){
    printf("Single left rotate...\n");
	subtree->left = singleRotateLeft(subtree->left);
    printf("Single right rotate...\n");
	subtree = singleRotateRight(subtree);
	return subtree;
}
