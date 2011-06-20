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
#include <malloc.h>
#include "header.h"
int addChildByParentValue(node *tree, int parentValue, int newValue, int newId){
	node *parent = NULL, *new = NULL;
	new = (node *)malloc(sizeof(node));
	parent = findElementByValue(tree, parentValue);
	if(parent && new){
		new -> id = newId;
		new -> value = newValue;
		new -> nextSibling = parent -> firstChild;
		new -> firstChild = NULL;
		parent -> firstChild = new;
	}
	else return 0;
	return 1;
}
