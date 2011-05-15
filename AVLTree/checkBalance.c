/*
* Provjera da li je potrebno balansirati stablo. Ako jeste detektiraj slucaj narusavanja balansiranosti i odaberi akciju.
*/
#include "header.h"
int checkBalance(node* subtree){
	if(subtree -> balanceFactor >= 2 && subtree -> left > 0){//Ako je potrebna desna rotacija.
		return 1;
	}
	if(subtree -> balanceFactor >= 2 && subtree -> left < 0){//Ako je potrebna dvostruka rotacija, prvo lijevo, zatim desno.
		return 2;
	}
	if(subtree -> balanceFactor <= -2 && subtree -> right < 0){//Ako je potrebna lijeva rotacija.
		return 3;
	}
	if(subtree -> balanceFactor <= -2 && subtree -> right > 0){//Ako je potrebna dvostruka rotacija, prvo desno, zatim lijevo.
		return 4;
	}
	return 0;//Vrati 0 ako nije potrebno balansiranje.
}
