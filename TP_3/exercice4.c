#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int n;

	printf("Entrez un entier : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int espace = 1; espace <= n - i; espace++)
		{
			printf(" ");
		}
		for (int j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return (0);
}
