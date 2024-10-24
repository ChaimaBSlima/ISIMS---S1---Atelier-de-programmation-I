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
	i = 1;
	a = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			a = a + i;
		}
		i++;
	}
	printf("factoriel du nombre est : %d\n", a);
	return (0);
}
