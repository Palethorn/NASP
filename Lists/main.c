/*
    Linked list implementation
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
#include "header.h"
#include "additional.h"
#include "definition.h"
int main(){
	element *list = NULL;
	int choice = 7, element;
	 while(choice){
        printf("Choose an option:\n"
                "0. Exit\n"
                "1. Insert head\n"
		"2. Insert tail\n"
                "3. Remove head\n"
		"4. Remove tail\n"
                "5. Print all\n"
		"6. Flush\n"
                );
scanf("%d", &choice);
        switch(choice){
            case 0: break;
            case 1:
                printf("Input element to be added at the head of the list:\n");
                scanf("%d",&element);
                addHead(&list, element);
                break;
            case 2:
                printf("Input element to be added at the tail of the list:\n");
                scanf("%d",&element);
                addTail(&list, element);
                break;
            case 3:
                removeHead(&list);
                break;
            case 4:
                removeTail(&list);
                break;
            case 5:
                print(list);
                break;
            case 6:
		flush(&list);
            default:
                choice = 7;
                break;
        }
    }
    return 0;
}
