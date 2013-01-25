#include "header.h"
int main(){
	node *tree = NULL, *tmp = NULL;
	int choice = 1, value = 0, value1 = 0, value2 = 0;
	while(choice)
	{
		        printf("Choose an option:\n"
                "0. Exit\n"
                "1. Add child\n"
				"2. Find max\n"
				"3. Find min\n"
				"4. Find\n"
				"5. Print inorder\n"
				"6. Print postorder\n"
				"7. Print preorder\n"
                "8. Find label\n"
				"9. Root\n"
				"10. Remove child\n"
				"11. Create\n"
				"12. Parent\n"
				"13. Change label\n"
				"14. Left subtree\n"
				"15. Right subtree\n"
				);
				scanf("%d", &choice);
				switch(choice)
				{
				case 0:
					break;
				case 1:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					addChild(&tree, value);
					break;
				case 2:
					tmp = findMax(tree);
					if(tmp != NULL)
					{
						printf("Max vrijednost je: %d\n", tmp->value);
						tmp = NULL;
					}
					break;
				case 3:
					tmp = findMin(tree);
					if(tmp != NULL)
					{
						printf("Min vrijednost je: %d\n", tmp->value);
						tmp = NULL;
					}
					break;
				case 4:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					tmp = findNode(tree, value);
					if(tmp != NULL)
					{
						printf("Element je pronadjen: %d\n", tmp->value);
						tmp = NULL;
					}
					break;
				case 5:
					inOrder(tree);
					break;
				case 6:
					postOrder(tree);
					break;
				case 7:
					preOrder(tree);
					break;
				case 8:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					value = label(findNode(tree, value), tree);
					printf("Pronadjeni label: %d\n", value);
					break;
				case 9:
					printf("Root element je: %d\n", (root(tree))->value);
					break;
				case 10:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					removeChild(&tree, value);
					break;
				case 11:
					printf("Unesite vrijednost novog korijena: ");
					scanf("%d", &value);
					printf("Unesite vrijednost lijevog podstabla: ");
					scanf("%d", &value1);
					printf("Unesite vrijednost desnog podstabla: ");
					scanf("%d", &value2);
					create(value, findNode(tree, value1), findNode(tree, value2), &tree);
					tmp = NULL;
					break;
				case 12:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					tmp = parent(findNode(tree, value), tree);
					if(tmp != NULL)
					{
						printf("Parent element je: %d\n", tmp->value);
						tmp = NULL;
					}
					break;
				case 13:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					printf("Unesite novu vrijednost: ");
					scanf("%d", &value1);
					changeLabel(value1, findNode(tree, value), tree);
					break;
				case 14:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					leftSubtree(findNode(tree, value), &tmp);
					if(tmp != NULL)
					{
						printf("Lijevo podstablo:\n");
						inOrder(tmp);
						tmp = NULL;
					}
					break;
				case 15:
					printf("Unesite vrijednost: ");
					scanf("%d", &value);
					rightSubtree(findNode(tree, value), &tmp);
					if(tmp != NULL)
					{
						printf("Desno podstablo:\n");
						inOrder(tmp);
						tmp = NULL;
					}
					break;
				}
	}
	return 0;
}
