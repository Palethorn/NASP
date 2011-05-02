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
