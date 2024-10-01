#include <stdio.h>
#include <math.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	float x1, y1, x2, y2, x, y;
	float first, last, segment;

	printf("La première extrémité (x1, y1) : ");
	scanf("%f %f", &x1, &y1);
	printf("La seconde extrémité (x2, y2) : ");
	scanf("%f %f", &x2, &y2);
	printf("Entrez les coordonnées du point (x, y) : ");
	scanf("%f %f", &x, &y);

	first =  sqrt((x1 - x) * (x1 - y) + (y1 - x) * (y1 - y));
	last = sqrt((x2 - x) * (x2 - y) + (y2 - x) * (y2 - y));
	segment = sqrt((x1 - x2) * (x1 - y2) + (y1 - x2) * (y1 - y2));

	if (first + last == segment)
	{
		printf("Le point se trouve sur le segment.\n");
	}
	else
	{
		printf("Le point ne se trouve pas sur le segment.\n");
	}
	return (0);
}
