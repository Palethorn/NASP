#include "additional.h"
#include "definition.h"
void print(element *list){
	if(!list){
		printf("List is empty!\n");
	}
	else{
		while(list){
			printf("%d\n",list -> value);
			list = list -> next;
		}
	}
}
