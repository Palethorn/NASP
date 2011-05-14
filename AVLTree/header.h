#ifndef HEADER_H
#define HEADER_H
	#include "node.h"
	#include "additional.h"
	int addChild(node **tree, int value);
	int removeChild(node **subtree, int value);
	node* findMin(node *subtree);
	node* findMax(node *subtree);
	void printNodes(node *subtree);
	node* findNode(node *subtree, int value);
	node* singleRotateLeft(node* subtree);
	node* singleRotateRight(node* subtree);
	int checkBalance(node* subtree);
#endif
