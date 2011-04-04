#include "additional.h"
void printAll(int list[], int last){
    int i;
    if(last == -1) printf("List is empty!\n");
    for(i = 0; i <= last; i++){
        printf("Element %d je %d\n",i,list[i]);
    }
}
