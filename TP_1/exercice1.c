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

	printf("reel 1: ");
	scanf("%f", &a);
	printf("reel 2: ");
	scanf("%f", &b);

	printf("%.3f, %.3f\n", a + b, a * b);
	return (0);
}
