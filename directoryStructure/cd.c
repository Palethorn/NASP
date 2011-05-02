int cd(node **current, char *name, char path){
	node subdir = NULL;
	if(subdir = find(current -> firstChild)){
		*current = subdir;
		return 1;
	}
	return 0;
}
