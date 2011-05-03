#include "definition.h"
#include "header.h"
#include "additional.h"
int main(){
	node *fs = NULL;
	node *current = NULL;
	int choice = 1;
	char name[20];
	fs = (node *)malloc(sizeof(node));
	fs -> firstChild = NULL;
	fs -> previousSibling = NULL;
	fs -> parent = NULL;
	strcpy(fs -> name, "/");
	current = fs;
	while(choice){
		printf(
			"Choose action:\n"
			"0. Exit\n"
			"1. List directories\n"
			"2. Change directory\n"
			"3. Create directory\n"
			"4. Remove directory\n"
			"> "
		);
		scanf("%d",&choice);
		switch(choice){
			case 0:
				break;
			case 1:
				ls(current -> firstChild);
				printf("\n");
				break;
			case 2:
				printf("Enter directory name: ");
				scanf("%s", name);
				cd(&current, name);
				break;
			case 3:
				printf("Enter directory name: ");
				scanf("%s", name);
				mkdir(&current, name);
				break;
			case 4:
				printf("Enter directory name: ");
				scanf("%s", name);
				rm(&current, name);
			default:
				choice = 1;
				break;
		}
	}
	return 0;
}

