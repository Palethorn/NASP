#include "header.h"
int addChild(node **tree, int value){
	node* subtree = *tree;
	node* n = NULL;
	int result;
	if(!subtree){// If the tree is empty
		n = createNode(value);
		*tree = n;
		return 1;
	}
	if(value < subtree->value){
		if(subtree->left == NULL){// We can add a child
			n = createNode(value);
			subtree->left = n;
			subtree->lh += 1;
			subtree->balanceFactor = subtree->lh - subtree->rh;
			return 1;
		}
		else{// Entering a recursion if an element has left child. Checking balance factors. If the tree needs balancing it performs the task.
			subtree->lh = addChild(&(subtree->left), value) + 1;
			subtree->balanceFactor = subtree->lh - subtree->rh;
			result = checkBalance(subtree);
			if(result){// If the tree needs to be balanced
				printf("Rotacija: %d\n", result);
                printf("value: %d, balance factor: %d\n", subtree->value, subtree->balanceFactor);
				*tree = performRotation(subtree, result);
			}
			return (*tree)->lh >= (*tree)->rh ? (*tree)->lh : (*tree)->rh;
		}
	}
	else if(value > subtree->value){
		if(subtree->right == NULL){// We can add a child
			n = createNode(value);
			subtree->right = n;
			subtree->rh += 1;
			subtree->balanceFactor = subtree->lh - subtree->rh;
			return 1;
		}
		else{// Entering a recursion if an element has right child. Checking balance factors. If the tree needs balancing it performs the task.
			subtree->rh = addChild(&(subtree->right), value) + 1;
			subtree->balanceFactor = subtree->lh - subtree->rh;
			result = checkBalance(subtree);
			if(result){// If the tree needs to be balanced
				printf("Rotacija: %d\n", result);
                printf("value: %d, balance factor: %d\n", subtree->value, subtree->balanceFactor);
				*tree = performRotation(subtree, result);
			}
			return (*tree)->lh >= (*tree)->rh ? (*tree)->lh : (*tree)->rh;
		}
	}
	//Never, never, neverland
	return 0;
}
