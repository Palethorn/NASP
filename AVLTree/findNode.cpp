#include "header.h"
node* findNode(node *subtree, int value){
	if(!subtree) return NULL;//Prazno [pod]stablo
	if(subtree->value == value) return subtree;// If element is found
	if(subtree->value < value){
		return findNode(subtree->right, value);// Go right recursively
	}
	if(subtree->value > value){
		return findNode(subtree->left, value);// Go left recursively
	}
	//Never, never, neverland
	return NULL;
}
