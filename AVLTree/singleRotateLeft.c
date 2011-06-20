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
* Single left rotation
*/
#include "header.h"
node* singleRotateLeft(node* subtree){
	node *tmp = NULL;
        short tmprh;
	// Do the rotation
        tmp = subtree -> right;
        tmprh = tmp -> lh;
        subtree -> right = tmp -> left;
        subtree -> rh = tmprh;
	tmp -> left = subtree;
	// Update balance factors
        tmp -> lh = tmp -> left -> lh >= tmp -> left -> rh ? tmp -> left -> lh + 1 : tmp -> left -> rh + 1;
        tmp -> balanceFactor = tmp -> lh - tmp -> rh;
        tmp -> left -> balanceFactor = tmp -> left -> lh - tmp -> left -> rh;
	return tmp;// New subroot
}
