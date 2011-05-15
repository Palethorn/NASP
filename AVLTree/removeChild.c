/*
* Funkcija uklanja element iz stabla cija pripadajuca vrijednost odgovara trazenoj.
*/
#include "header.h"
int removeChild(node **subtree, int value){
	node *tmp = *subtree;
	if(tmp == NULL) return 0;
	if(tmp -> value == value){
		if(!tmp -> left && !tmp -> right){
			free(tmp);
			*subtree = NULL;
			return 1;
		}
		else if(tmp -> left == NULL){
			*subtree = (*subtree) -> right;
			free(tmp);
			return 1;
		}
		else if(tmp -> right == NULL){
			*subtree = (*subtree) -> left;
			free(tmp);
			return 1;
		}
		else{
			node *min = findMin(tmp -> right);
			tmp -> value = min -> value;
			removeChild(&((*subtree) -> right), (*subtree) -> value);
			return 1;
		}
	}
	if(removeChild(&((*subtree) -> left), value)) return 1;
	else return removeChild(&((*subtree) -> right), value);
	return 0;
}
