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
	for (int i = 0; i < 11; i++)
	{
		printf("%d x %d = %d \n", n, i, n * i);
	}
	return (0);
}
