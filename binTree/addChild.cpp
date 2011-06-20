/*
    Binary Tree implementation
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
#include "header.h"
int addChild(node **tree, int value){
	node* subtree = *tree;
	if(!subtree){
		node *n = (node *)malloc(sizeof(node));
		n -> value = value;
		n -> left = NULL;
		n -> right = NULL;
		*tree = n;
		return 1;
	}
	if(value < subtree -> value){
		if(subtree -> left == NULL){
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			subtree -> left = n;
				return 1;
		}
		else addChild(&subtree -> left, value);
	}
	else{
		if(subtree -> right == NULL){
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			subtree -> right = n;
				return 1;
		}
		else addChild(&subtree -> right, value);
	}
	return 0;
}
