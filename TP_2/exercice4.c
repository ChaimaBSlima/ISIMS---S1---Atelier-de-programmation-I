#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	float total;

	float remise = 0.0;

	printf("Entrez le total à payer en DT : ");
	scanf("%f", &total);

	if (total > 100)
	{
		remise = 0.15;
	}
	else if (total > 20)
	{
		remise = 0.05;
	}
	printf("Le montant à payer est : %.2f DT\n", total - (total * remise));

	return (0);
}
