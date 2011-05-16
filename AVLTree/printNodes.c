/*
* Funkcija ispisuje sve elemente stabla u in-order nacinu.
*/
#include "header.h"
void printNodes(node *subtree){
	if(subtree == NULL) return;
	printNodes(subtree -> left);
	printf("value: %d, balanceFactor: %d, left height: %d, right height: %d \n", subtree -> value, subtree -> balanceFactor, subtree -> lh, subtree -> rh);
	printNodes(subtree -> right);
}
