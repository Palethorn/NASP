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
		*(temp + i) = *(temp + (i - 1));
	}
	*(temp + position) = element;
	*list = temp;
	return 1;
}
