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
#include "arrListStatic.h"
int main(int argc, char** argv) {
    int choice = 7, element, position;
    arrListStatic *arr = new arrListStatic();
    while(choice){
        printf("Choose an option:\n"
                "0. Exit\n"
                "1. Insert element\n"
                "2. Remove element\n"
                "3. Print all elements\n"
                "4. Delete all elements\n"
                );
scanf("%d", &choice);
        switch(choice){
            case 0: break;
            case 1:
                printf("Input element to be added to the list:");
                scanf("%d",&element);
                printf("Input position where the element needs to be added:");
                scanf("%d",&position);
                arr->insert(element, position);
                break;
            case 2:
                printf("Input position of element that needs to be removed:");
                scanf("%d",&position);
                arr->rm(position);
                break;
            case 3:
                arr->printAll();
            case 4:
                arr->flush();
            default:
                choice = 3;
                break;
        }
    }
    return 0;
}