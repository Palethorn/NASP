/*
    Adelson-Velskii & Landis Tree implementation
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

/*
* Finding element with a requested value. Returns its addres.
*/
#include "header.h"
node* findNode(node *subtree, int value, int *hops){
	if(!subtree) return NULL;//Prazno [pod]stablo
	if(subtree -> value == value) return subtree;// If element is found
	if(subtree -> value < value){
		(*hops)++;// Incrementing a value that shows how many times we had to go into recursion
		return findNode(subtree -> right, value, hops);// Go right recursively
	}
	if(subtree -> value > value){
		(*hops)++;// Incrementing a value that shows how many times we had to go into recursion
		return findNode(subtree -> left, value, hops);// Go left recursively
	}
	//Never, never, neverland
	return NULL;
}
