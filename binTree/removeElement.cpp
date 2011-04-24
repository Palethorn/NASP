#include "binTree.h"
int binTree::removeElement(int value){
	return root -> removeChild(&root, value);
}
