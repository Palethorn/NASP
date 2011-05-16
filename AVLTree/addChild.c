/*
* Funkcija za dodavanje elemenata u stablo. Usput balansira stablo.
*/
#include "header.h"
int addChild(node **tree, int value){
	node* subtree = *tree;
	int result;
	if(!subtree){//Ako je stablo prazno
		node *n = (node *)malloc(sizeof(node));
		n -> value = value;
		n -> left = NULL;
		n -> right = NULL;
		n -> lh = n -> rh = 0;
		n -> balanceFactor = 0;
		*tree = n;
		return 1;
	}
	if(value < subtree -> value){
		if(subtree -> left == NULL){//Dosli smo do mjesta gdje je moguce ubaciti element
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			n -> lh = n -> rh = 0;
			n -> balanceFactor = 0;
			subtree -> left = n;
			subtree -> lh += 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			return 1;
		}
		else{//Ulaz u rekurziju ako element ima lijevo dijete. Provjera balans faktora te balansiranje stabla u povratku.
			subtree -> lh = addChild(&(subtree -> left), value) + 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			result = checkBalance(subtree);
			if(result){// Ako je potebna rotacija
				printf("Rotacija: %d\n", result);
                                printf("value: %d, balance factor: %d\n", subtree -> value, subtree -> balanceFactor);
				*tree = performRotation(subtree, result);
			}
			return (*tree) -> lh >= (*tree) -> rh ? (*tree) -> lh : (*tree) -> rh;
		}
	}
	else if(value > subtree -> value){
		if(subtree -> right == NULL){//Dosli smo do mjesta gdje je moguce ubaciti element
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			n -> lh = n -> rh = 0;
			n -> balanceFactor = 0;
			subtree -> right = n;
			subtree -> rh += 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			return 1;
		}
		else{//Ulaz u rekurziju ako element ima desno dijete. Provjera balans faktora te balansiranje stabla.
			subtree -> rh = addChild(&(subtree -> right), value) + 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			result = checkBalance(subtree);
			if(result){// Ako je potrebna rotacija
				printf("Rotacija: %d\n", result);
                                printf("value: %d, balance factor: %d\n", subtree -> value, subtree -> balanceFactor);
				*tree = performRotation(subtree, result);
			}
			return (*tree) -> lh >= (*tree) -> rh ? (*tree) -> lh : (*tree) -> rh;
		}
	}
	//Never, never, neverland
	return 0;
}
