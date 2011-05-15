/*
* Funkcija vrsi dvostruku rotaciju ako postoji potreba, prvo lijevu na lijevom podstablu zatim desnu na korijenu
*/
#include "header.h"
node* doubleRotateLeftRight(node* subtree){
	node* tmp = NULL;
	tmp = singleRotateLeft(subtree -> left);
	subtree -> left = tmp;
	tmp = singleRotateRight(subtree);
	return tmp;
}
