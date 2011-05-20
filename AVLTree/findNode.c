/*
* Finding element with a requested value. Returns its addres.
*/
#include "header.h"
node* findNode(node *subtree, int value, int *hops){
	if(!subtree) return NULL;//Prazno [pod]stablo
	if(subtree -> value == value) return subtree;// If element is found
	if(subtree -> value < value){
		(*hops)++;// Incrementing a value that shows how many times we had to go into recursion
		return findNode(subtree -> right, value, hops);// Go right recursively
	}
	if(subtree -> value > value){
		(*hops)++;// Incrementing a value that shows how many times we had to go into recursion
		return findNode(subtree -> left, value, hops);// Go left recursively
	}
	//Never, never, neverland
	return NULL;
}
