#include "header.h"
node *parent(node *n, node *root)
{
    node *tmp = NULL;
    if(root == NULL || n == NULL)
    {
        return NULL;
    }
    if(root->left == n || root->right == n)
    {
        return root;
    }
	if(n->value < root->value)
	{
		tmp = parent(n, root->left);
	}
    else
    {
        tmp = parent(n, root->right);
    }
    return tmp;
}