#include "header.h"
node *leftSubtree(node *t, node **tl)
{
	if(t != NULL)
	{
		*tl = t->left;
		return *tl;
	}
	*tl = NULL;
	return NULL;
}