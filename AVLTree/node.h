#ifndef NODE_H
#define NODE_H
	typedef struct element{
		int value;
		short rh, lh, balanceFactor;
		struct element *left;
		struct element *right;
	}node;
#endif
