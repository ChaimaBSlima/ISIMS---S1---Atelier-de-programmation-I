#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int N, first_digit, last_digit;

	printf("Entrez un entier de 3 chiffres : ");
	scanf("%d", &N);

	if (N < 100 || N > 999)
	{
		printf(" Veuillez entrer un entier de 3 chiffres.\n");
		return (1);
	}

	first_digit = N / 100;
	last_digit = N % 10;

	if (first_digit == last_digit)
	{
		printf("%d est symétrique.\n", N);
	}
	else
	{
		printf("%d n'est pas symétrique.\n", N);
	}
	return (0);
}

