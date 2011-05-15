/*
* Funkcija obavlja jednostruku rotaciju u desno te vraca adresu novog root elementa podstabla.
*/
#include "header.h"
node* singleRotateRight(node* subtree){
	node *tmp = NULL;
        short tmprh;
        tmp = subtree -> left;
        tmprh = tmp -> rh;
        subtree -> left = tmp -> right;
        subtree -> lh = tmprh;
	tmp -> right = subtree;
        tmp -> rh = tmp -> right -> lh >= tmp -> right -> rh ? tmp -> right -> lh + 1 : tmp -> right -> rh + 1;
        tmp -> balanceFactor = tmp -> lh - tmp -> rh;
        tmp -> right -> balanceFactor = tmp -> right -> lh - tmp -> right -> rh;
	return tmp;
}