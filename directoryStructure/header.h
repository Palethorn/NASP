#ifndef HEADER_H
#define HEADER_H
	#include "definition.h"
	int cd(node **current, char name[]);
	node* findNode(node *subdir,char name[]);
	void ls(node *subdir);
	int mkdir(node** current, char name[]);
	int rm(node **current, char name[]);
	void rmRecursive(node *subdir);
#endif
