#ifndef HEADER_H
#define HEADER_H
	int addChild(node **tree, int value, int parentId);
	int removeChildById(node **tree, int id);
	int removeChildByValue(node **tree, int id);
	int removeChildByAddr(node **tree, node *addr);
	node *findById(node *tree,int id);
	node *findByValue(node *tree, int value);
	void printPreOrder(node *tree);
	void printPostOrder(node *tree);
#endif
