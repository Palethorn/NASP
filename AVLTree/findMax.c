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
* Finds node with max value
*/
#include "header.h"
node* findMax(node *subtree){
	if(subtree == NULL) return NULL;
	if(subtree -> right == NULL){// No further.
		return subtree;
	}
	/*
	* Going recursively to the rightmost node of the tree, because that one represents the max value
	*/
	return findMax(subtree -> right);
}
