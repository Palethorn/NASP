#include "includes.h"
int allocate(int **list){
	if(!(*list = (int *)malloc(sizeof(int)))){
		printf("Error");
		return 0;
	}
	return 1;
}
