#include "header.h"
int main(){
	node *tree = NULL;
	node* element = NULL;
	int hops = 0;
	addChild(&tree, 3);
	addChild(&tree, 2);
	addChild(&tree, 1);
	addChild(&tree, 4);
	addChild(&tree, 5);
	addChild(&tree, 6);
	addChild(&tree, 7);
	//removeChild(&tree, 12);
	element = findNode(tree,4,&hops);
	printf("value: %d, balance factor: %d, left height: %d, right height: %d, hops: %d\n",element -> value, element -> balanceFactor, element -> lh, element -> rh, hops);
	//printNodes(tree);
	return 0;
}
