#include "additional.h"
#include "definition.h"
void ls(node *subdir){
	if(!subdir)
		return;
	puts(subdir -> name);
	ls(subdir -> nextSibling);
	
}
