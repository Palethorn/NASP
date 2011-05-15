#include "header.h"
/*
* Funkcija s obzirom na vracnenu akciju funkcije checkBalance.c poziva odgovarajucu opciju funkciju za balansiranje.
* Vrijednosti akcija su objasnjene u checkBalance.c. Stvarna rotacija se obavlja u odgovarajucim funkcijama.
*/
node *performRotation(node* subtree, int rotation){
	switch(rotation){
		case 1:
			return singleRotateLeft(subtree);
		case 2:
			return doubleRotateLeftRight(subtree);
		case 3:
			return singleRotateRight(subtree);
		case 4:
			return doubleRotateRightLeft(subtree);
	}
}
