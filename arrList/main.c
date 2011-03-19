// Some comment
#include "arrayList.h"
#include "includes.h"
int main(void){
	int *list = NULL,size = 0, i;
	list = (int *)malloc(sizeof(int) * 4);
	allocate(&list);
	for(i = 0; i < 5; i++){
		if(!insert(&list,i,0,&size)) break;
	}
	rm(&list,3,&size);
	print(list,size);
	return 0;
}
