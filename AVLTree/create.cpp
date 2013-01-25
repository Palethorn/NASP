#include "header.h"
void create(int label, node *tl, node *tr, node **root)
{
    *root = createNode(label);
    (*root)->left = tl;
    (*root)->right = tr;
	if(tl != NULL)
	{
		(*root)->lh = tl->lh > tl->rh ? tl->lh + 1 : tl->rh + 1;
	}
	if(tr != NULL)
	{
		(*root)->rh = tr->lh > tr->rh ? tr->lh + 1 : tr->rh + 1;
	}
}