#include "binTree.h"
int binTree::removeElement(int value){
	return this -> root -> removeChild(&root, value);
}
