#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	char caractere;

	printf("Entrez un caractère : ");
	scanf("%c", &caractere);

	if (caractere >= 48 && caractere <= 57)
	{
		printf("'%c' est un chiffre.\n", caractere);
	}
	else if ((caractere >= 65 && caractere <= 90) ||
	 (caractere >= 97 && caractere <= 122))
	{
		printf("'%c' est une lettre de l'alphabet.\n", caractere);
	}
	else
	{
		printf("'%c' est un autre type de caractère.\n", caractere);
	}
	return (0);
}
