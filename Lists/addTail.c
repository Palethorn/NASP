/*
    Linked list implementation
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
#include "additional.h"
#include "definition.h"
int addTail(element **list, int val){
	element *tmp, *p = *list;
	if(!(tmp = (element *)malloc(sizeof(element)))){
		printf("Error!\n");
		return 0;
	}
	tmp -> value = val;
	tmp -> next = NULL;
	if(*list == NULL){
		*list = tmp;
		return 1;
	}
	while(p -> next){
		p = p -> next;
	}
	p -> next = tmp;
	return 1;
}
