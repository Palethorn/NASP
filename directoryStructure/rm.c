#include "additional.h"
#include "definition.h"
int rm(node **current, char name[]){
	node *temp = NULL;
	if(*current == NULL || (*current) -> firstChild == NULL) return 0;
	temp = findNode((*current) -> firstChild, name);
	if(temp){
		rmRecursive(temp -> firstChild);
		if(temp -> firstChild){
			free(temp -> firstChild);
			temp -> firstChild = NULL;
			return 1;
		}
		if(temp -> previousSibling){
			temp -> nextSibling -> previousSibling = temp -> previousSibling;
			temp -> previousSibling -> nextSibling = temp -> nextSibling;
		}
		else (*current) -> firstChild = temp -> nextSibling;
		free(temp);
		return 1;
	}
	return 0;
}
