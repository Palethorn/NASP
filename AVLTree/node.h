/*
* Tree elements definition
*/
#ifndef NODE_H
#define NODE_H
	typedef struct element{
		int value;
		short rh, lh, balanceFactor;// For determining if a tree needs rotation
		struct element *left;
		struct element *right;
	}node;
#endif
