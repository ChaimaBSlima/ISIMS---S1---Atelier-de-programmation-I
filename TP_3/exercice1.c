#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int i;

	i = 0;
	do {
	printf(" iteration %d \n", i);
	i++;
	} while (i < 10);
	printf("valeur de i après la boucle : %d \n", i);
	return (0);
}
