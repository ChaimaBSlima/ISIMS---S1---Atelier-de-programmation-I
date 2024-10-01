#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	float a;

	float b;

	printf("longuer: ");
	scanf("%f", &a);
	printf("largeur: ");
	scanf("%f", &b);

	printf("surface : %.3f périmétre : %.3f \n", a * b, (a + b) * 2);
	return (0);
}
