#include "additional.h"
#include "definition.h"
void ls(node *subdir){
	if(!subdir)
		return;
	printf("%s ",  subdir -> name);
	ls(subdir -> nextSibling);
}
