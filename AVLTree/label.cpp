#include "header.h"
int label(node *n, node *root)
{
    node *tmp = NULL;
	if(n != NULL)
	{
		tmp = findNode(root, n->value);
	}
    if(tmp != NULL)
    {
        return tmp->value;
    }
    return -1;
}