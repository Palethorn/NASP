#include "header.h"
node *makeNull(node *tree)
{
    if(tree == NULL)
    {
        return NULL;
    }
    tree->left = makeNull(tree->left);
    tree->right = makeNull(tree->right);
    free(tree);
    return NULL;
}