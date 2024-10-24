#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int n, i, n_copy, len, s;

	printf("Entrez un entier : ");
	scanf("%d", &n);
	n_copy = n;
	len = 1;
	while ((n_copy / 10) != 0)
	{
		len = len * 10;
		n_copy = n_copy / 10;
	}
	s = 0;
	while (n != 0)
	{
		s = s + (n % 10) * len;
		n = n / 10;
		len = len / 10;
	}
	printf("%d\n", s);
	return (0);
}
