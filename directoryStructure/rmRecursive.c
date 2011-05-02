void rmRecursive(node subdir){
	node* temp = NULL;
	if(!subdir) return;
	rm(subdir -> nextSibling);
	rm(subdir -> firstChild);
	if(subdir -> nextSibling){
		temp = subdir -> nextSibling;
		free(temp);
		subdir -> nextSibling = NULL;
	}
}
