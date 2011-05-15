/*
* Funkcija obavlja jednostruku rotaciju u lijevo te vraca adresu novog root elementa podstabla.
*/
#include "header.h"
node* singleRotateLeft(node* subtree){
	node *tmp = NULL;
        short tmprh;
        tmp = subtree -> right;
        tmprh = tmp -> lh;
        subtree -> right = tmp -> left;
        subtree -> rh = tmprh;
	tmp -> left = subtree;
        tmp -> lh = tmp -> left -> lh >= tmp -> left -> rh ? tmp -> left -> lh + 1 : tmp -> left -> rh + 1;
        tmp -> balanceFactor = tmp -> lh - tmp -> rh;
        tmp -> left -> balanceFactor = tmp -> left -> lh - tmp -> left -> rh;
	return tmp;
}
