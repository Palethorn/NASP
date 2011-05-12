#include "header.h"
int main(){
	node *tree = NULL;
	addChild(&tree, 12);
	addChild(&tree, 48);
	addChild(&tree, 16);
	addChild(&tree, -12);
	addChild(&tree, 5);
	removeChild(&tree, 12);
	printNodes(tree);
	return 0;
}
