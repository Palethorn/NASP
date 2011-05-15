/*
* Funkcija pronalazi element sa najvecom vrijednosti u stablu.
*/
#include "header.h"
node* findMax(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> right == NULL){//No further.
		return subtree;
	}
	return findMax(subtree -> right);//Trazimo element sa najvecom vrijednoscu pa idemo u krajnju desnu stranu stabla.
}
