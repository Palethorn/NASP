/*
    List implemented using dynamic array
    Copyright (C) 2011  David Ćavar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "arrayList.h"
#include "includes.h"
int main(void){
	int *list = NULL,size = 0, i;
	list = (int *)malloc(sizeof(int) * 4);
	allocate(&list);
	for(i = 0; i < 5; i++){
		if(!insert(&list,i,0,&size)) break;
	}
	//rm(&list,3,&size);
	printf("%d\n", find(list, 2, size));	
	print(list,size);
	return 0;
}
