#include "node.h"
#include "binTree.h"
node* binTree::findElement(int value){
	return root->findNode(root, value);
}
