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
int removeTail(element **list){
	element *p = *list;
	if(p == NULL){
		printf("List is empty!\n");
		return 0;
	}
	if(p -> next == NULL){
		free(p);
		*list = NULL;
		return 1;
	}
	while(p -> next -> next){
		p = p -> next;
	}
	free(p -> next);
	p -> next = NULL;
	return 1;
}
