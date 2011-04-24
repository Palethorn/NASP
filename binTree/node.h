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
			node *findNode(node *subtree, int value);
	};
#endif
