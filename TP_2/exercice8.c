#include <stdio.h>
#include <math.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	float a, b, c;

	float delta, x1, x2;

	printf("Entrez la valeur de a : ");
	scanf("%f", &a);
	printf("Entrez la valeur de b : ");
	scanf("%f", &b);
	printf("Entrez la valeur de c : ");
	scanf("%f", &c);
	if (a == 0)
	{
		printf("a doit être différent de 0.\n");
		return (0);
	}
	delta = (b * b) - (4 * a * c);
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("L'équation a deux solutions réelles :\n");
		printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
	}
	else if (delta == 0)
	{
		x1 = -b / (2 * a);
		printf("L'équation a une seulle solution :\n");
		printf("x1 = x2 = %.2f\n", x1);
	}
	else
	{
		printf("Pas de solutions dans R.\n");
	}
	return (0);
}
