/*
* Perform double rotation, child to the right, root to the left
*/
#include "header.h"
node* doubleRotateRightLeft(node* subtree){
	printf("Single right rotate...\n");
	subtree -> right = singleRotateRight(subtree -> right);
	printf("Single left rotate...\n");
	subtree = singleRotateLeft(subtree);
	return subtree;
}
