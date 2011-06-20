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
* Single right rotation
*/
#include "header.h"
node* singleRotateRight(node* subtree){
	node *tmp = NULL;
        short tmprh;
	// Perform rotation
        tmp = subtree -> left;
        tmprh = tmp -> rh;
        subtree -> left = tmp -> right;
        subtree -> lh = tmprh;
	tmp -> right = subtree;
	// Update balance factors
        tmp -> rh = tmp -> right -> lh >= tmp -> right -> rh ? tmp -> right -> lh + 1 : tmp -> right -> rh + 1;
        tmp -> balanceFactor = tmp -> lh - tmp -> rh;
        tmp -> right -> balanceFactor = tmp -> right -> lh - tmp -> right -> rh;
	return tmp;// Return new subroot
}
