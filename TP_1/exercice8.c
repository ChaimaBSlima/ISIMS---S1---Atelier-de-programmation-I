#include <stdio.h>
#include <math.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	float x1, y1, x2, y2;

	printf("Entrez premier point (x1, y1) : ");
	scanf("%f %f", &x1, &y1);

	printf("Entrez deuxième point (x2, y2) : ");
	scanf("%f %f", &x2, &y2);

	printf("premier point : (%.2f, %.2f)\n", x1, y1);
	printf(" deuxième point : (%.2f, %.2f)\n", x2, y2);

	printf("La distance est : %.2f\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

	return (0);

}
