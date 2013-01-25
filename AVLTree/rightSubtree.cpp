#include "header.h"
node *rightSubtree(node *t, node **tr)
{
	if(t != NULL)
	{
		*tr = t->right;
		return *tr;
	}
	*tr = NULL;
	return NULL;
}