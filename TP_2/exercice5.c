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
	printf("Caractère : %c, Code ASCII : %d\n", caractere, caractere);
	if (caractere >= 'A' && caractere <= 'Z')
	{
		printf("C'est une lettre majuscule.\n");
		printf("En minuscule : %c\n", caractere + 32);
	}
	else if (caractere >= 'a' && caractere <= 'z')
	{
		printf("C'est une lettre minuscule.\n");
		printf("En majuscule : %c\n", caractere - 32);
	}
	else
	{
		printf("Erreur : Ce n'est pas une lettre.\n");
	}

	return (0);
}
