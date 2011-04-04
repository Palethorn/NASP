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