/* 
 * File:   main.c
 * Author: david
 *
 * Created on March 25, 2011, 8:03 PM
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

