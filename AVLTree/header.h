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
* Function declarations
*/
#ifndef HEADER_H
#define HEADER_H
	#include "node.h"
	#include "additional.h"
	int addChild(node** tree, int value);
	int removeChild(node** subtree, int value);
	node* findMin(node* subtree);
	node* findMax(node* subtree);
	void printNodes(node* subtree);
	node* findNode(node* subtree, int value, int* hops);
	node* singleRotateLeft(node* subtree);
	node* singleRotateRight(node* subtree);
	node* doubleRotateRightLeft(node* subtree);
	node* doubleRotateLeftRight(node* subtree);
	int checkBalance(node* subtree);
	node* performRotation(node* subtree, int rotation);
#endif
