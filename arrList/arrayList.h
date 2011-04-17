#pragma once
#ifndef ARRAYLIST_H
#define ARRAYLIST_H
	int insert(int **list,int element, int position, int *size);
	int rm(int **list, int position, int *size);
	void delAll(int **list, int *size);
	void print(int *list, int size);
	int find(int *list, int element, int size);
	int allocate(int **list);
#endif
