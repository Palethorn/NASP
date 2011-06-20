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
#include "node.h"
int node::removeChild(node **subtree, int value){
	node *tmp = *subtree;
	if(tmp == NULL) return 0;
	if(tmp -> value == value){
		if(!tmp -> left && !tmp -> right){
			delete tmp;
			*subtree = NULL;
			return 1;
		}
		else if(tmp -> left == NULL){
			tmp = tmp -> right;
			return 1;
		}
		else if(tmp -> right == NULL){
			tmp = tmp -> left;
			return 1;
		}
		else{
			node *min = this -> findMin(tmp -> right);
			tmp -> value = min -> value;
			removeChild(&((*subtree) -> right), (*subtree) -> value);
			return 1;
		}
	}
	if(this -> removeChild(&((*subtree) -> left), value)) return 1;
	else return this -> removeChild(&((*subtree) -> right), value);
	return 0;
}
