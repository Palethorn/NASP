/*
* Funkcija vrsi dvostruku rotaciju ako postoji potreba, prvo lijevu na lijevom podstablu zatim desnu na korijenu
*/
#include "header.h"
node* doubleRotateLeftRight(node* subtree){
        printf("Single left rotate...\n");
	subtree -> left = singleRotateLeft(subtree -> left);
        printf("Single right rotate...\n");
	subtree = singleRotateRight(subtree);
	return subtree;
}
