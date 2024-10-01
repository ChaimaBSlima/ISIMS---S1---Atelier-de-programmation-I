#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int x, y, z;

	int max, min;

	printf("Entrez trois entiers: ");
	scanf("%d %d %d", &x, &y, &z);
	min = x;
	max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	if (y < min)
	{
		min = y;
	}
	if (z < min)
	{
		min = z;
	}

	printf("Le maximum est : %d\n", max);
	printf("Le minimum est : %d\n", min);

	return (0);
}
