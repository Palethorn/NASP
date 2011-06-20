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
* Perform double rotation, child to the left, root to the right
*/
#include "header.h"
node* doubleRotateLeftRight(node* subtree){
        printf("Single left rotate...\n");
	subtree -> left = singleRotateLeft(subtree -> left);
        printf("Single right rotate...\n");
	subtree = singleRotateRight(subtree);
	return subtree;
}
