void rm(node **current, char *name){
	node *temp;
	if(*current == NULL || (*current) -> firstChild == NULL) return 0;
	if(temp = find(current -> firstChild, name)){
		rmRecursive(temp -> firstChild);
		if(temp -> firstChild){
			free(temp -> firstChild);
			temp -> firstChild = NULL;
		}
		if(temp -> previousSibling){
			temp -> previousSibling -> nextSibling = temp -> nextSibling;
		}
		else *current = temp -> nextSibling;
		free(temp);
	}
}
