/*
    Directory structure simulation
    Copyright (C) 2011  David Ćavar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "definition.h"
#include "header.h"
#include "additional.h"
int main(){
	node *fs = NULL;
	node* current = NULL;
	node *temp = NULL;
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
			"5. Find directory\n"
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
				break;
			case 5:
				printf("Enter directory name: ");
				scanf("%s", name);
				if(temp = findNode(current -> firstChild, name))
					printf("%s\n", temp -> name);
				break;
			default:
				choice = 1;
				break;
		}
	}
	return 0;
}

