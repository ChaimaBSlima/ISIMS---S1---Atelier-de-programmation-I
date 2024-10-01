#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int a, b, temp;

	printf("Entrez a puis b : ");
	scanf("%d %d", &a, &b);

	printf("Avant permutation : a = %d, b = %d\n", a, b);

	temp = a;
	a = b;
	b = temp;

	/*
	* Sans utilisation de variable auxiliare
	* a = a + b;
    * b = a - b;
    * a = a - b;
	*/

	printf("Après permutation : a = %d, b = %d\n", a, b);

	return (0);
}
