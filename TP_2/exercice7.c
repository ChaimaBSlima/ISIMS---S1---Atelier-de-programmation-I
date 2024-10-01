#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int num1, num2;
	char operateur;

	printf("Entrez le premier entier : ");
	scanf("%d", &num1);

	printf("Entrez le deuxième entier : ");
	scanf("%d", &num2);

	printf("Entrez un opérateur arithmétique (+, -, *, /) : ");
	scanf(" %c", &operateur);

	switch (operateur)
	{
		case '+':
			printf("Résultat : %d + %d = %d\n", num1, num2, num1 + num2);
			break;
		case '-':
			printf("Résultat : %d - %d = %d\n", num1, num2, num1 - num2);
			break;
		case '*':
			printf("Résultat : %d * %d = %d\n", num1, num2, num1 * num2);
			break;
		case '/':
			if (num2 != 0)
			{
				printf("Résultat : %d / %d = %.2f\n", num1, num2, (float) num1 / num2);
			}
			else
			{
				printf("Erreur : Division par zéro n'est pas permise.\n");
			}
			break;
		default:
			printf("Erreur : Opérateur invalide.\n");
	}
	return (0);
}
