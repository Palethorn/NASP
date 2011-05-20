/*
* Function that checks balance factors
*/
#include "header.h"
int checkBalance(node* subtree){
	if(subtree -> balanceFactor >= 2 && subtree -> left -> balanceFactor > 0){// If it need single right rotate
		return 1;
	}
	if(subtree -> balanceFactor >= 2 && subtree -> left -> balanceFactor < 0){// If it needs double rotate, first rotate child to the left then root to the right
		return 2;
	}
	if(subtree -> balanceFactor <= -2 && subtree -> right -> balanceFactor < 0){// If it need single left rotate
		return 3;
	}
	if(subtree -> balanceFactor <= -2 && subtree -> right -> balanceFactor > 0){// If it needs double rotate, first rotate child to the right then root to the left
		return 4;
	}
	return 0;// If balancing is not required
}
