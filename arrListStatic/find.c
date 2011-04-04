#include "additional.h"
int find(int list[],int element, int last){
    int i;
    for(i = 0; i <= last; i++){
        if(list[i] == element){
            return i;
        }
    }
    return -1;
}