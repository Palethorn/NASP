#include "includes.h"
void delAll(int **list, int *size){
	free(*list);
	*list = NULL;
	*size = 0;
}
