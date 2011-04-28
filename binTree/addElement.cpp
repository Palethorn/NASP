#include "node.h"
#include "binTree.h"
int binTree::addElement(int value){
	return root -> addChild(root, value);
}
