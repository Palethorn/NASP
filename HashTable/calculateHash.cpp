#include "header.h"
// Preklapanje sa dijeljenjem
int calculateHash(char *jmbg)
{
	int i = 0, j1 = 0, j2 = 0, j3 = 0, sum = 0;
	char  k1[4], k2[4], k3[4];
	for(i = 0; i < 4; i++)
	{
		k1[i] = jmbg[3 - i]; // Prve 4 znamenke u obrnutom redosljedu
		k2[i] = jmbg[4 + i]; // Druge 4 znamenke
		k3[i] = jmbg[12 - i]; // Zadnje 4 znamenke u obrnutom redosljedu
	}
	j1 = atoi(k1); // Pretvori k1 u int
	j2 = atoi(k2); // Pretvori k2 u int
	j3 = atoi(k3); // Pretvori k3 u int
	return (j1 + j2 + j3) % P;
}