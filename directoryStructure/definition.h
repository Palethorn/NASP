#ifndef DEFINITION_H
#define DEFINITION_H
typedef struct element{
	char name[20];
	struct element* parent;
	struct element* firstChild;
	struct element* nextSibling;
	struct element* previousSibling;
}node;
#endif
