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
/*
* Calling individual function for rotation based on the result of checkBalance() function.
*/
node* performRotation(node* subtree, int rotation){
	switch(rotation){
		case 1:
			return singleRotateRight(subtree);
			break;
		case 2:
			return doubleRotateLeftRight(subtree);
			break;
		case 3:
			return singleRotateLeft(subtree);
			break;
		case 4:
			return doubleRotateRightLeft(subtree);
			break;
		default:
			return subtree;
			break;
	}
	//Never, never, neverland
	return subtree;
}
