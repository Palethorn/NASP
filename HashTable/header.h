#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef HEADER_H
#define HEADER_H
#define FILENAME "records.bin"
#define C 4 // Broj zapisa u pretincu
#define M 10 // Broj pretinaca
#define N 40 // Broj ukupnih zapisa
#define P 7 // Prim broj za modul
	typedef struct node
	{
		char jmbg[14];
		char firstName[20];
		char lastName[20];
	}record;
	int calculateHash(char*);
	void write(record*);
	record *findRecord(char*);
#endif