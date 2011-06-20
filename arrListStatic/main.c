/*
    List implemented using static array
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
#include <stdlib.h>
#include "header.h"
#include "additional.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int list[SIZE], last, choice = 7, element, position;
    flush(list, &last);
    while(choice){
        printf("Choose an option:\n"
                "0. Exit\n"
                "1. Insert element\n"
                "2. Remove element\n"
                "3. Print element\n"
                "4. Print all elements\n"
                "5. Find element\n"
                "6. Flush elements\n"
                );
scanf("%d", &choice);
        switch(choice){
            case 0: break;
            case 1:
                printf("Input element to be added to the list:");
                scanf("%d",&element);
                printf("Input position where the element needs to be added:");
                scanf("%d",&position);
                insert(list,element, position, &last);
                break;
            case 2:
                printf("Input position of element that needs to be removed:");
                scanf("%d",&position);
                rm(list,position,&last);
                break;
            case 3:
                printf("Input position of element that needs to be printed:");
                scanf("%d",&position);
                print(list,position,last);
                break;
            case 4:
                printAll(list,last);
                break;
            case 5:
                printf("Input element that needs to be found:");
                scanf("%d",&element);
                position = find(list, element, last);
                if(position == -1) printf("Element is not found!\n");
                else{
                    print(list, position, last);
                }
                break;
            case 6:
                flush(list,&last);
                break;
            default:
                choice = 7;
                break;
        }
    }
    return (EXIT_SUCCESS);
}

