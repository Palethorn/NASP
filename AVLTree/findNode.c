/*
* Funkcija vraca adresu elementa koji ima pripadajucu trazenu vrijednost.
*/
#include "header.h"
node* findNode(node *subtree, int value, int *hops){
	if(!subtree) return NULL;//Prazno [pod]stablo
	if(subtree -> value == value) return subtree;//Ako je element pronadjen.
	if(subtree -> value < value){
		hops++;
		return findNode(subtree -> right, value);//Idi desno rekurzivnim pozivom.
	}
	if(subtree -> value > value){
		hops++;
		return findNode(subtree -> left, value);//Idi lijevo rekurzivnim pozivom.
	}
}
