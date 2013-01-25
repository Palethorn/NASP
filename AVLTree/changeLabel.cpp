#include "header.h"
void changeLabel(int newLabel, node *n, node *subtree)
{
    node *tmp = findNode(subtree, n->value);
    if(tmp != NULL)
    {
        tmp->value = newLabel;
    }
}