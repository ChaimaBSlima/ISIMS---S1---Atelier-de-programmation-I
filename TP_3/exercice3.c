#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int n, S1, S2, S3;

	S1 = 0;
	S2 = 0;
	S3 = 0;
	printf("Entrez un entier : ");
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++)
	{
		S1 = S1 + i;
		if (i % 2 == 0)
		{
			S2 = S2 + i;
		}
		else
		{
			S3 = S3 + i;
		}
	}
	printf("Somme : %d, Somme Pair: %d, Somme Impaire %d \n", S1, S2, S3);
	return (0);

}
