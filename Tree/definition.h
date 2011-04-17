#ifndef DEFINITION_H
#define DEFINITION_H
typedef struct element{
	int id, value;
	struct element *firstChild;
	struct element **children;
	struct element *nextSibling;
}node;
#endif
