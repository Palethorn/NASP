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
* Perform double rotation, child to the right, root to the left
*/
#include "header.h"
node* doubleRotateRightLeft(node* subtree){
	printf("Single right rotate...\n");
	subtree -> right = singleRotateRight(subtree -> right);
	printf("Single left rotate...\n");
	subtree = singleRotateLeft(subtree);
	return subtree;
}
