#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int day;

	printf("Entrez un numéro de jour: ");
	scanf("%d", &day);
	switch (day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("il y a cours.\n");
			break;
		case 6:
			printf("il y a DS.\n");
			break;
		case 7:
			printf("on se repose.\n");
			break;
		default:
			printf("Erreur : numéro de jour invalide.\n");
	}

	return (0);
}
