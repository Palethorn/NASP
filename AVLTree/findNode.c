/*
* Funkcija vraca adresu elementa koji ima pripadajucu trazenu vrijednost.
*/
#include "header.h"
node* findNode(node *subtree, int value){
	if(!subtree) return NULL;//Prazno stablo
	if(subtree -> value == value) return subtree;//Ako je element pronadjen.
	if(subtree -> value < value) return findNode(subtree -> right, value);//Idi desno rekurzivno.
	if(subtree -> value > value) return findNode(subtree -> left, value);//Idi lijevo rekurzivno.
}
