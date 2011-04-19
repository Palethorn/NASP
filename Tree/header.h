#ifndef HEADER_H
#define HEADER_H
	int removeChildById(node *tree, int id);
	int removeChildByValue(node *tree, int value);
	node *findElementById(node *tree,int id);
	node *findElementByValue(node *tree, int value);
	void printPreOrder(node *tree);
	void printPostOrder(node *tree);
	int addChildByParentId(node *tree, int parentId, int newValue, int newId);
	int addChildByParentValue(node *tree, int parentValue, int newValue, int newId);
#endif
