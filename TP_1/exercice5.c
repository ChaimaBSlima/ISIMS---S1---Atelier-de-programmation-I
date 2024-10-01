#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int a;

	int b;

	int c;

	int bign;

	printf("entier 1: ");
	scanf("%d", &a);
	printf("entier 2: ");
	scanf("%d", &b);
	printf("entier 3: ");
	scanf("%d", &c);
	bign = a;
	if (b > bign)
	{
		bign = b;
	}
	if (c > bign)
	{
		bign = c;
	}

	printf("Big number = %d\n ", bign);
	return (0);

}
