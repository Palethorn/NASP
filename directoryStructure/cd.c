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
#include "header.h"
int cd(node** current, char name[]){
	node* subdir = NULL;
	if((*current) == NULL) return 0;
	subdir = findNode((*current) -> firstChild,name);
	if(subdir != NULL){
		*current = subdir;
		return 1;
	}
	return 0;
}
