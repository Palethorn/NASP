/*
    General Tree implementation
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
#include "definition.h"
#include "additional.h"
node *findParentByChildId(node *tree,int id){
	int i;
	node *found = NULL;
	if(!tree){
		return NULL;
	}
	if(!(tree -> firstChild))
		return NULL;
	if(tree -> firstChild -> id == id)
		return tree;
	if((found = findParentByChildId(tree -> firstChild, id)))
		return found;
	while(tree -> nextSibling)
		if((found = findParentByChildId(tree -> nextSibling,id))) return found;
	return NULL;
}
