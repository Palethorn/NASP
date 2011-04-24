node* node::findNode(node *subtree, int value){
	if(!subtree) return NULL;
	if(subtree -> value == value) return subtree;
	if(subtree -> value < value) return findElement(subtree -> right, value);
	if(subtree -> value > value) return findElement(subtree -> left, value);
}
