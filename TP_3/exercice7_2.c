#include <stdio.h>
/**
* parfait - calculer le parfait
* d'un nombre
*
* @n: int
*
* Return: int value
*
*/
int parfait(int n)
{
	int i, a;

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
	return (a);
}
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

	if (parfait(n) == n)
	{
		printf("%d, est parfait\n", n);
	}
	else
	{
		printf("%d, n'est pas parfait\n", n);
	}
	return (0);
}
