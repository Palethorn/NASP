#include <stdio.h>
#include <malloc.h>
#ifndef HEADER_H
#define HEADER_H
	
	typedef struct element{
		int value;
		short rh, lh, balanceFactor;// For determining if a tree needs rotation
		struct element *left;
		struct element *right;
	}node;
	
	int addChild(node**, int);
	int removeChild(node**, int);
	node* findMin(node*);
	node* findMax(node*);
	void inOrder(node*);
	void preOrder(node*);
	void postOrder(node*);
	node* findNode(node*, int);
	node* singleRotateLeft(node*);
	node* singleRotateRight(node*);
	node* doubleRotateRightLeft(node*);
	node* doubleRotateLeftRight(node*);
	int checkBalance(node*);
	node* performRotation(node*, int);
	node* makeNull(node *);
	void create(int label, node*, node*, node **);
	node* createNode(int);
	node *leftSubtree(node*, node**);
	node *rightSubtree(node*, node**);
	node* parent(node*, node*);
	int label(node*, node*);
	void changeLabel(int, node*, node*);
	node *root(node *);
#endif
