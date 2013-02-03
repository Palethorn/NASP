#include "header.h"
record *findRecord(char *jmbg)
{
	FILE *f = NULL;
	record *tmp = (record *)malloc(sizeof(record));
	int hashKey = calculateHash(jmbg);
	printf("Hash key: %d\n", hashKey);
	f = fopen(FILENAME, "rb");
	fseek(f, hashKey * sizeof(record) * C, SEEK_SET);
	while(fread(tmp, sizeof(record), 1, f))
	{
		if(strcmp(tmp->jmbg, jmbg) == 0)
		{
			fclose(f);
			return tmp;
		}
	}
	fclose(f);
	return NULL;
}