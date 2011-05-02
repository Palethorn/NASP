#include "binTree.h"
int main(){
	binTree *tree = new binTree(12);
	tree -> addElement(48);
	tree -> addElement(16);
	tree -> addElement(-12);
	tree -> addElement(5);
	tree -> removeElement(12);
	tree -> printTree();
	return 0;
}
