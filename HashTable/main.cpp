#include "header.h"
int main()
{
	record rec, *tmp = NULL;
	char jmbg[14];
	int choice = 1;
	while(choice)
	{
		printf("Odaberite operaciju:\n"
			"0. Izlaz\n"
			"1. Unesi zapis\n"
			"2. Pronadji zapis\n");
		scanf("%d", &choice);
		switch(choice)
		{
		case 0: break;
		case 1:
			printf("Unesite ime: ");
			scanf("%s", rec.firstName);
			printf("Unesite prezime: ");
			scanf("%s", rec.lastName);
			printf("Unesite JMBG: ");
			scanf("%s", rec.jmbg);
			write(&rec);
			break;
		case 2:
			printf("Unesite JMBG: ");
			scanf("%s", jmbg);
			tmp = findRecord(jmbg);
			if(tmp != NULL)
			{
				printf("Ime: %s\nPrezime: %s\nJMBG: %s\n", tmp->firstName, tmp->lastName, tmp->jmbg);
			}
			break;
		default:
			choice = 1;
			break;
		}
	}
	return 0;
}