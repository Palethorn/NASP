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
node* node::findNode(node *subtree, int value){
	if(!subtree) return NULL;
	if(subtree -> value == value) return subtree;
	if(subtree -> value < value) return this -> findNode(subtree -> right, value);
	if(subtree -> value > value) return this -> findNode(subtree -> left, value);
}
