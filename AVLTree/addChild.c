/*
    Adelson-Velskii & Landis Tree implementation
    Copyright (C) 2011  David Ćavar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
* Function for adding nodes to a tree. Checks nodes for balancing along the way.
*/
#include "header.h"
int addChild(node **tree, int value){
	node* subtree = *tree;
	int result;
	if(!subtree){// If the tree is empty
		node *n = (node *)malloc(sizeof(node));
		n -> value = value;
		n -> left = NULL;
		n -> right = NULL;
		n -> lh = n -> rh = 0;
		n -> balanceFactor = 0;
		*tree = n;
		return 1;
	}
	if(value < subtree -> value){
		if(subtree -> left == NULL){// We can add a child
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			n -> lh = n -> rh = 0;
			n -> balanceFactor = 0;
			subtree -> left = n;
			subtree -> lh += 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			return 1;
		}
		else{// Entering a recursion if an element has left child. Checking balance factors. If the tree needs balancing it performs the task.
			subtree -> lh = addChild(&(subtree -> left), value) + 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			result = checkBalance(subtree);
			if(result){// If the tree needs to be balanced
				printf("Rotacija: %d\n", result);
                                printf("value: %d, balance factor: %d\n", subtree -> value, subtree -> balanceFactor);
				*tree = performRotation(subtree, result);
			}
			return (*tree) -> lh >= (*tree) -> rh ? (*tree) -> lh : (*tree) -> rh;
		}
	}
	else if(value > subtree -> value){
		if(subtree -> right == NULL){// We can add a child
			node *n = (node *)malloc(sizeof(node));
			n -> value = value;
			n -> left = NULL;
			n -> right = NULL;
			n -> lh = n -> rh = 0;
			n -> balanceFactor = 0;
			subtree -> right = n;
			subtree -> rh += 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			return 1;
		}
		else{// Entering a recursion if an element has right child. Checking balance factors. If the tree needs balancing it performs the task.
			subtree -> rh = addChild(&(subtree -> right), value) + 1;
			subtree -> balanceFactor = subtree -> lh - subtree -> rh;
			result = checkBalance(subtree);
			if(result){// If the tree needs to be balanced
				printf("Rotacija: %d\n", result);
                                printf("value: %d, balance factor: %d\n", subtree -> value, subtree -> balanceFactor);
				*tree = performRotation(subtree, result);
			}
			return (*tree) -> lh >= (*tree) -> rh ? (*tree) -> lh : (*tree) -> rh;
		}
	}
	//Never, never, neverland
	return 0;
}
