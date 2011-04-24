#include "node.h"
int node::removeChild(node **subtree, int value){
	node *tmp = *subtree;
	if(tmp == NULL) return 0;
	if(tmp -> value == value){
		if(!tmp -> left && !tmp -> right){
			delete tmp;
			*subtree = NULL;
			return 1;
		}
		else if(tmp -> left == NULL){
			tmp = tmp -> right;
			return 1;
		}
		else if(tmp -> right == NULL){
			tmp = tmp -> left;
			return 1;
		}
		else{
			node *min = this -> findMin(tmp -> right);
			tmp -> value = min -> value;
			removeChild(&((*subtree) -> right), (*subtree) -> value);
			return 1;
		}
	}
	if(this -> removeChild(&((*subtree) -> left), value)) return 1;
	else return this -> removeChild(&((*subtree) -> right), value);
	return 0;
}
