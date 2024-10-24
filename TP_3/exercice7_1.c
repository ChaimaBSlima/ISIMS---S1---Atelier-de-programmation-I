#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int i, n, s;

	while (n < 100 || n > 9999)
	{
	printf("Entrez un entier de 3 ou 4 chiffres = ");
	scanf("%d", &n);
	}
	i = 0;
	s = 0;
	while (n != 0)
	{
		s = s + n % 10;
		i++;
		n = n / 10;
	}
	printf("la moyenne des chiffre est : %.3f\n ", (float)(s) / (float) i);
	return (0);

}
