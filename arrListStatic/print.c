#include "additional.h"
void print(int list[], int position, int last){
    if(position < 0 || position > last){
        printf("Element doesn't exist!\n");
    }
    printf("Element on position %d has value of %d.\n",position, list[position]);
}