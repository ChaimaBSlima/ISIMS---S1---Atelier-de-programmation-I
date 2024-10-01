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

	printf("Entier 1: ");
	scanf("%d", &a);
	printf("Entier 2: ");
	scanf("%d", &b);
	printf("Entier 3: ");
	scanf("%d", &c);

	printf("%.3f \n", (float)(a + b + c) / 3);
	return (0);
}
