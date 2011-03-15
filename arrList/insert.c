#include "includes.h"
int insert(int **list,int element, int position, int *size){
	int i, *temp = NULL;
	if(position > *size || position < 0) return 0;
	if(!(temp = (int *)realloc(*list, sizeof(int)*(*size + 1)))){
		printf("Out of memory!");
		return 0;
	}
	*size = *size + 1;
	for(i = *size - 1; i != position && i > 0; i--){
		temp[i] = temp[i - 1];
	}
	temp[position] = element;
	*list = temp;
	return 1;
}
