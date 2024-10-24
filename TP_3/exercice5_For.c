#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int n, i, a;

	printf("Entrez un entier : ");
	scanf("%d", &n);
	a = 0;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			a = a + i;
		}
	}
	printf("factoriel du nombre est : %d\n", a);
	return (0);
}
