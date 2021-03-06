/*
    Binary Tree implementation
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
#ifndef NODE_H
#define NODE_H
#include "stdio.h"
	class node{
		private:
			int value;
			node *left;
			node *right;	
		public:
			node(int value, node *left, node *right){
				this -> value = value;
				this -> left = left;
				this -> right = right;
			}
			int addChild(node *subtree, int value);
			int removeChild(node **subtree, int value);
			node* findMin(node *subtree);
			node* findMax(node *subtree);
			void printNodes(node *subtree);
			node* findNode(node *subtree, int value);
	};
#endif
