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

#include "header.h"
#define SIZE 16
int main(){
	node* tree = NULL;
	node* element = NULL;
	int i = 0, elements[] = {3,2,1,4,5,6,7,16,15,14,13,12,11,10,8,9};
	for(i = 0; i < SIZE; i++){
		addChild(&tree,elements[i]);
	}
	printNodes(tree);
	return 0;
}
