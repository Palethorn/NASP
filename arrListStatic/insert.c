#include "additional.h"
int insert(int list[],int element, int position, int *last){
    int i;
    if((position < 0) || (position > (*last + 1)) || ((*last + 1) >= SIZE)){
        printf("Error! Position value out of bounds or no space available.\n");
        return 0;
    }
    for(i = *last + 1; i > 0 && i != position; i--){
        list[i] = list[i-1];
    }
    list[position] = element;
    (*last)++;
    return 1;
}