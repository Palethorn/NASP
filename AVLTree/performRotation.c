#include "header.h"
/*
* Funkcija s obzirom na vracenu akciju funkcije checkBalance.c poziva odgovarajucu opciju funkciju za balansiranje.
* Vrijednosti akcija su objasnjene u checkBalance.c. Stvarna rotacija se obavlja u odgovarajucim funkcijama.
*/
node* performRotation(node* subtree, int rotation){
	switch(rotation){
		case 1:
			return singleRotateRight(subtree);
			break;
		case 2:
			return doubleRotateLeftRight(subtree);
			break;
		case 3:
			return singleRotateLeft(subtree);
			break;
		case 4:
			return doubleRotateRightLeft(subtree);
			break;
		default:
			return subtree;
			break;
	}
	//Never, never, neverland
	return subtree;
}
