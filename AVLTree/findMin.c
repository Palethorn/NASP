/*
* Funkcija pronalazi element sa minimalnom vrijednoscu unutar stabla.
*/
#include "header.h"
node* findMin(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> left == NULL){//No further.
		return subtree;
	}
	return findMin(subtree -> left);//Trazimo element sa minimalnom vrijednoscu stoga se rekurzija krece do krajnjeg lijevog elementa stabla.
}
