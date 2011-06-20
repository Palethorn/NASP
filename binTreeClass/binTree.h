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
#include "node.h"
#ifndef TREE_H
#define TREE_H
class binTree{
		private:
			node *root;
			int lvlsNo;
			int elementNo;
		public:
			binTree(int value){
				root = new node(value, NULL, NULL);
				lvlsNo = 1;
				elementNo = 1;
			}
			int addElement(int value);
			int removeElement(int value);
			void printTree();
			node* findElement(int value);
			//void balance();
			//void checkBalance();
	};
#endif
/*
lvl 1 1
lvl 2 3
lvl 3 7
lvl 4 15
lvl 5 31
...
lvl n 2^n - 1

if(2 ^ (log(n + 1)) - elementNo > 0)
*/
