#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	char c;

	printf("Entrez un caractère alphabétique: ");
	scanf("%c", &c);

	if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
	{
		c = c + 1;
		printf("Le caractère suivant est : %c\n", c);
	} else
	{
		printf("Caractère non valide.\n");
	}
	return (0);

}
