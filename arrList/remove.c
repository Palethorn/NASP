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
