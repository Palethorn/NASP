#include "header.h"
void write(record *rec)
{
	FILE *f = NULL;
	int hashKey = 0;
	record *tmp = (record *)malloc(sizeof(record));
	hashKey = calculateHash(rec->jmbg);
	printf("Hash key: %d\n", hashKey);
	f = fopen(FILENAME, "r+b");
	fseek(f, hashKey * sizeof(record) * C, SEEK_SET);
	while(fread(tmp, sizeof(record), 1, f))
	{
		if(strcmp(tmp->jmbg, rec->jmbg) == 0)
		{
			printf("Zapis postoji!\n");
			return;
		}
	}
	fwrite(rec, sizeof(record), 1, f);
	fclose(f);
}