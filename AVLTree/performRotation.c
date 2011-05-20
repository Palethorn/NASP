#include "header.h"
/*
* Calling individual function for rotation based on the result of checkBalance() function.
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
