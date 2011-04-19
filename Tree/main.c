#include "definition.h"
#include "header.h"
#include "additional.h"
int main(){
	node elements[5];
	node *result;
	elements[0].id = 1;
	elements[0].value = 1;
	elements[0].nextSibling = NULL;
	elements[0].firstChild = &elements[1];
	
	elements[1].id = 2;
	elements[1].value = 2;
	elements[1].nextSibling = &elements[2];
	elements[1].firstChild = &elements[3];
	
	elements[2].id = 3;
	elements[2].value = 3;
	elements[2].nextSibling = NULL;
	elements[2].firstChild = &elements[4];
	
	elements[3].id = 4;
	elements[3].value = 4;
	elements[3].nextSibling = NULL;
	elements[3].firstChild = NULL;
	
	elements[4].id = 5;
	elements[4].value = 5;
	elements[4].nextSibling = NULL;
	elements[4].firstChild = NULL;
	
	/*printf("Printing in inorder:");
	printInOrder(elements);
	printf("\n");
	printf("Printing in postorder:");
	printPostOrder(elements);
	printf("\n");
	printf("Printing in preorder:");
	printPreOrder(elements);
	printf("\n");*/
	
	result = findParentByChildId(elements,5);
	if(result){
		printf("%d\n", result -> value);
	}

return 0;
}
/*
		1
	2		3

	4		5

*/
