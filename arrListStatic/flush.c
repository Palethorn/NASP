#include "additional.h"
void flush(int list[], int *last){
    int i;
    for(i = 0; i < SIZE; i++){
        list[i] = 0;
    }
    *last = -1;
}