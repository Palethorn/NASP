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
int removeHead(element **list){
	element *p = *list;
	if((*list) == NULL){
		printf("List is empty!\n");
		return 0;
	}
	if((*list) -> next == NULL){
		free(*list);
		*list = NULL;
		return 1;
	}
	*list = (*list) -> next;
	free(p);
	return 1;
}
