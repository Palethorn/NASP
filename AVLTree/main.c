#include "header.h"
#define SIZE 16
int main(){
	node* tree = NULL;
	node* element = NULL;
	int i = 0, elements[] = {3,2,1,4,5,6,7,16,15,14,13,12,11,10,8,9};
	for(i = 0; i < SIZE; i++){
		addChild(&tree,elements[i]);
	}
	printNodes(tree);
	return 0;
}
