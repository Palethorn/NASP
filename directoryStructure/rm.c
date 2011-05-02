void rm(node *current, char *name){
	node *temp;
	temp = find(current -> firstChild, name);
	rmRecursive(temp -> firstChild);
	if(temp -> firstChild){
		free(temp -> firstChild);
		temp -> firstChild = NULL;
	}
	temp -> previousSibling -> nextSibling = temp -> nextSibling;
	free(temp);
}
