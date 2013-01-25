#include "header.h"
int removeChild(node **subtree, int value){
	node *tmp = *subtree;
	int result = 0;
	if(tmp == NULL) return 0;
	if(tmp->value == value){
		if(tmp->left == NULL && tmp->right == NULL){
			free(tmp);
			*subtree = NULL;
			return -1;
		}
		else if(tmp->left == NULL){
			*subtree = (*subtree)->right;
			free(tmp);
			return (*subtree)->lh > (*subtree)->rh ? (*subtree)->lh : (*subtree)->rh;
		}
		else if(tmp->right == NULL){
			*subtree = (*subtree)->left;
			free(tmp);
			return (*subtree)->lh > (*subtree)->rh ? (*subtree)->lh : (*subtree)->rh;
		}
		else{
			node *min = findMin(tmp->right);
			tmp->value = min->value;
			tmp->rh = removeChild(&((*subtree)->right), (*subtree)->value) + 1;
			result = checkBalance(*subtree);
			if(result)
			{
				printf("Rotacija: %d\n", result);
                printf("value: %d, balance factor: %d\n", tmp->value, tmp->balanceFactor);
				*subtree = performRotation(*subtree ,result);
			}
			return (*subtree)->lh > (*subtree)->rh ? (*subtree)->lh : (*subtree)->rh;
		}
	}
	if(tmp->value > value)
	{
		tmp->lh = removeChild(&(tmp->left), value) + 1;
		tmp->balanceFactor = tmp->lh - tmp->rh;
		result = checkBalance(*subtree);
		if(result)
		{
			printf("Rotacija: %d\n", result);
            printf("value: %d, balance factor: %d\n", tmp->value, tmp->balanceFactor);
			*subtree = performRotation(*subtree, result);
		}
		return (*subtree)->lh > (*subtree)->rh ? (*subtree)->lh : (*subtree)->rh;
	}
	else
	{
		tmp->rh = removeChild(&(tmp->right), value) + 1;
		tmp->balanceFactor = tmp->lh - tmp->rh;
		result = checkBalance(*subtree);
		if(result)
		{
			printf("Rotacija: %d\n", result);
            printf("value: %d, balance factor: %d\n", tmp->value, tmp->balanceFactor);
			*subtree = performRotation(*subtree, result);
		}
		return (*subtree)->lh > (*subtree)->rh ? (*subtree)->lh : (*subtree)->rh;
	}
	return 0;
}
