#include "additional.h"
int rm(int list[], int position, int *last){
    int i;
    if(position > *last || position < 0){
        printf("Error!\n");
        return 0;
    }
    for(i = position; i < *last; i++){
        list[i] = list[i+1];
    }
    (*last)--;
    return 1;
}
