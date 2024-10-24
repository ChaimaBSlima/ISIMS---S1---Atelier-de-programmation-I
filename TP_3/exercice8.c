#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int n;


	printf(" Menu :\n");
	printf(" tapez 1 pour plat escalope pannée\n");
	printf(" tapez 2 pour , plat escalope grillée\n");
	printf(" tapez 3 pour plat grillade \n");
	printf(" tapez 4 pour plat shawarma\n");
	n = 0;
	while (n < 1 || n > 4)
	{
	printf("Tapez le numéro du plat = ");
	scanf("%d", &n);
	}
	switch (n)
	{
	case 1:
		printf(" vous avez choisi le plat escalope pannée\n");
		break;
	case 2:
		printf(" vous avez choisi le plat escalope grillée\n");
		break;
	case 3:
		printf(" vous avez choisi le plat grillade\n");
		break;
	default:
		printf(" vous avez choisi le plat shawarma\n");
		break;

	}
	return (0);
}
