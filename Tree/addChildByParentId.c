#include "definition.h"
#include <malloc.h>
#include "header.h"
int addChildByParentId(node *tree, int parentId, int newValue, int newId){
	node *parent = NULL, *new = NULL;
	new = (node *)malloc(sizeof(node));
	parent = findElementById(tree, parentId);
	if(parent && new){
		new -> id = newId;
		new -> value = newValue;
		new -> nextSibling = parent -> firstChild;
		new -> firstChild = NULL;
		parent -> firstChild = new;
	}
	else return 0;
	return 1;
}
