#include <stdio.h>
/**
* saisie - saisie un nombre positif
* strictement < 100
*
* @i: index dans la série
* Return: int value
*
*/
int saisie(int i)
{
	int n;

	n = -1;
	while (n < 0 || n >= 100)
	{
	printf("Entrez un entier n%d = ", i);
	scanf("%d", &n);
	}
	return (n);
}
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int n, s, max, i;


	i = 1;
	n = saisie(i);
	s = n;
	max = n;
	while (n != 0)
	{
		i++;
		n = saisie(i);
		s = s + n;
		if (n > max)
		{
			max = n;
		}
	}
	printf("la somme est : %d, le valeur maximale est: %d\n", s, max);
	return (0);
}
