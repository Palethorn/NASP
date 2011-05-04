#include "additional.h"
#include "definition.h"
void rmRecursive(node *subdir){
	node* temp = NULL;
	if(!subdir) return;
	rm(subdir -> nextSibling);
	rm(subdir -> firstChild);
	if(subdir -> nextSibling -> firstChild){
		temp = subdir -> nextSibling -> firstChild;
		free(temp);
		subdir -> nextSibling -> firstChild = NULL;
	}
	if(subdir -> nextSibling){
		temp = subdir -> nextSibling;
		free(temp);
		subdir -> nextSibling = NULL;
	}
}
