#include "includes.h"
int rm(int **list, int position, int *size){
	int i,*temp = NULL;
	if(position > *size - 1 || position < 0 || *size == 0) return 0;
	for(i = position;  i < *size - 1; i++){
		*(*list + i) = *(*list + i + 1);
	}
	if(!(temp = (int *)realloc(*list,sizeof(int)*(*size - 1)))){
		printf("Error!\n");
		return 0;
	}
	*list = temp;
	*size = *size - 1;
	return 1;
}
