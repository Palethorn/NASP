/*
    Directory structure simulation
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
int mkdir(node** current, char name[]){
	node* new = NULL;
	new = (node *)malloc(sizeof(node));
	if(!(*current)){
		strcpy(new -> name, name);
		new -> nextSibling = NULL;
		new -> firstChild = NULL;
		new -> parent = NULL;
		new -> previousSibling = NULL;
		*current = new;
		return 1;
	}
	strcpy( new -> name, name);
	new -> nextSibling = (*current) -> firstChild;
	new -> parent = *current;
	new -> previousSibling = NULL;
	if(new -> nextSibling)
		new -> nextSibling -> previousSibling = new;
	(*current) -> firstChild = new;
	return 1;
}
