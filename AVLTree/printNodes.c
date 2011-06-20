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
* Function for adding nodes to a tree. Checks nodes for balancing along the way.
*/

/*
* Printing nodes in-order with all the debug information
*/
#include "header.h"
void printNodes(node *subtree){
	if(subtree == NULL) return;
	printNodes(subtree -> left);
	/*
	* Printing nodes in-order with all the debug information
	*/
	printf("value: %d, balanceFactor: %d, left height: %d, right height: %d \n", subtree -> value, subtree -> balanceFactor, subtree -> lh, subtree -> rh);
	printNodes(subtree -> right);
}
